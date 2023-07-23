class Solution {
public:
    int numberOfSubstrings(string s) {
        
        // sliding window approach
        // TC = O(n)
        // SC = O(1)
        
        unordered_map<char,int>ump; // constatnt map(only 3 characters)
        int left = 0;
        int right = 0;
        int count = 0;
        
        while(right < s.length())
        {
            ump[s[right]]++;
            
            while(ump['a'] && ump['b'] && ump['c'])
            {
                count = count + (s.length() - right); // as we can form s.length() - right substrings, so every time it will get added
                    ump[s[left]]--;
                    left++;
            }
            right++;
        }
        return count;
    }
};