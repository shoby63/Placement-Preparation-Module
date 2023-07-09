class Solution {
public:
    int binarySearch(vector<int>&nums,int target,int low,int high)
    {
           int mid = low + (high-low)/2;
           if(low>high)
               return -1;
           
             if(nums[mid]==target)
               return mid;

               else if(nums[mid]>target)
               return binarySearch(nums,target,low,mid-1);

               else 
               return binarySearch(nums,target,mid+1,high);
           
    }

    int search(vector<int>& nums, int target) {
        int low,high;
        
        low=0;
        high=nums.size()-1;

        int index = binarySearch(nums,target,low,high);
        return index;
    }
};