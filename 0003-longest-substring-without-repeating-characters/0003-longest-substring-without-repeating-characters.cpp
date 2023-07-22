class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        //TC = O(n)(for traversing) + O(1)(for lookup in the vector)  = O(n)
        //SC = O(1)
        
        int n = s.size();
        vector<int> storage(256, -1);
        
        int len = 0;
        int left = 0;
        int right = 0;
        
        while(right < n)
        {
            if(storage[s[right]] != -1)
                left = max(storage[s[right]] + 1, left);
            
            storage[s[right]] = right;
            
            len = max(right - left + 1, len);
            right++;
        }
        return len;
    }
};