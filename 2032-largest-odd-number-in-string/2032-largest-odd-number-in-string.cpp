class Solution {
public:
    string largestOddNumber(string num) {
    
    for(int i = num.length() - 1; i>= 0; i--)
    {
        char c = num[i];
        if(c%2 != 0)
        return num.substr(0, i+1); //(start index, length)
    }
        return "";
    }
};