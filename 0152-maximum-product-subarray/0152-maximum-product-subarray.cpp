class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //TC = O(n)
        //SC = O(1)
        int maxi = INT_MIN;
        int n = nums.size();
        int prefix = 1;
        int suffix = 1;

        for(int i=0; i<n; i++)
        {
            if(prefix == 0)
            prefix = 1;
            if(suffix ==0)
            suffix = 1;
            prefix *= nums[i];
            suffix *= nums[n-i-1];
            maxi = max(maxi, max(prefix,suffix));
        }
      
        return maxi;


      /*  int product = 1;
        for(int i=0; i<nums.size(); i++)
        {
            product *= nums[i];
            maxi = max(maxi,product);
            if(product==0)
            product=1;
        }
        product = 1;
        for(int i=nums.size()-1;i>=0; i--)
        {
            product *= nums[i];
            maxi = max(maxi,product);
            if(product==0)
            product=1;
        }
        */
      
        
    }
};