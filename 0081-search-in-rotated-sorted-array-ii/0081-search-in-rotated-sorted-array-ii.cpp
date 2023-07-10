class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low = 0;
        int high = n - 1;

        if(low > high)
        return false;

        while(low<=high)
        {
            int mid = low + (high - low)/2;
            if(nums[mid] == target)
            return true;

            //special cases
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++; high--;
                continue;
            }

            //check if left part sorted 
            if(nums[low] <= nums[mid])
            {
                if(nums[low]<=target && target<=nums[mid]) //target is lying in the left half
                high = mid - 1;
                else 
                low = mid + 1;      // target is now lying in the sorted part
            }

            //righ part is sorted
            else
            {
                 if(nums[mid]<=target && target<=nums[high]) //target is lying in the right half
                 low = mid + 1;
                 else 
                 high = mid -1;    // target is now lying in the sorted part
            }
        }
     return false;
    }
};