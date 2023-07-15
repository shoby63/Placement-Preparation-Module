/*
We need to handle four cases:
   -> Overflow
   -> Discarding all the leading whitespaces
   -> Sign of the number
   -> Invalid input

some special test cases ->
    ____123  -> 123
    ___-123  -> -123
    ____+123  -> 123
    _____-+123  -> 0
    ____+-123  -> 0
    ___123-  -> 123

    +-12  -> 0
    00123  -> 123
    123abc  -> 123
    123 1234  -> 123

    -99999999999999999  -> -2147483648
    00999999999999999  -> 2147483647
    2147483648  -> 2147483647
    -2147483648 -> -2147483648

<----------------------------------Time complexity: O(N)-----------------------------------> 
<----------------------------------Space complexity: O(1)---------------------------------->
*/

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();

        while(s[i] == ' '){ // skipping space characters at the beginning
            i++;
        }

        int pos = 0, neg = 0; 

        if(s[i] == '+'){
            pos++; // number of positive signs at the start in string
            i++;
        }

        if(s[i] == '-'){
            neg++; // number of negative signs at the start in string
            i++;
        }

        double ans = 0; 

        while(i<n && s[i] >= '0' && s[i] <= '9'){
            ans = ans*10 + (s[i] - '0'); // (s[i] - '0') is converting character to integer
            i++;
        }

        if(neg > 0) // if negative sign exist
            ans = -ans;
        if(pos > 0 && neg> 0) // if both +ve and -ve sign exist, Example: +-12
            return 0;

        if(ans > INT_MAX) // if ans > 2^31 - 1
            ans = INT_MAX;

        if(ans < INT_MIN) // if ans < 2^31
            ans = INT_MIN;

        return (int)ans;
    }
};