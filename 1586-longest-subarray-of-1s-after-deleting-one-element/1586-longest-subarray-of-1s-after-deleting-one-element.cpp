class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
     
        int i=0;
        int j=0;

        int last_zero_index_at = -1;
        int result=0;

        while(j<n)
        {
            if(nums[j]==0){
                i = last_zero_index_at + 1;
                last_zero_index_at = j;
            }

            result = max(result, j-i);  
            j++;
// j-i+1 is the window size normally but as
// here we must always delete one element hence sisze will be j-i
        }
     
     return result;
       
    }
};