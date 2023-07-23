class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> ump;
        int left = 0;
        int right = 0;
        int longestSub = 0;
        int maxfreq = 0;
        
        while(right < s.size())
        {
            ump[s[right]]++;
            
            maxfreq = max(maxfreq, ump[s[right]]);
            
           
            while((right - left +1) - maxfreq  > k)
            {
                ump[s[left]]--;
                left++;
            }
            
            longestSub = max(longestSub, right - left + 1);
            right++;
            
        }
        return longestSub;
    }
};