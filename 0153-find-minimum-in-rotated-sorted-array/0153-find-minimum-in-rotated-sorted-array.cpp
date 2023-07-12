class Solution {
public:
    int findMin(vector<int>& nums) {
       int n = nums.size();
       int low = 0;
       int high = n - 1;
       int min = nums[0];
       
       while(low <= high)
       {
           int mid = low + (high - low)/2;
           if(nums[mid] >= nums[0])
           low = mid + 1;
           else
           {
               min = nums[mid];
               high = mid - 1;
           }
       }
       return min;
    }
};