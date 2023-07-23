class Solution {
public:
    
    int helper(vector<int>& nums, int goal)
    {
         // TC = O(n)
        // SC = O(1)
        
        int left = 0;
        int right = 0;
        int sum = 0;
        int result = 0;
        
        if(goal < 0)
            return 0;
        
        while(right < nums.size())
        {
            sum = sum + nums[right];
            
            while(sum > goal)
            {
                sum = sum - nums[left];
                left++;
            }
            result = result + (right - left + 1);
            right++;
        }
        return result;
    }
    
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return helper(nums, goal) - helper(nums, goal - 1);
    }
};