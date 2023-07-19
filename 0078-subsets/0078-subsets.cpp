class Solution {
public:
    void findingSubsets(vector<int>& nums,  vector<vector<int>>& ans, vector<int> output, int index)
    {
        if(index >= nums.size())
            return ans.push_back(output);
        
        //pick the current element
        
        output.push_back(nums[index]);
        findingSubsets(nums, ans, output, index+1);
        
        //first pop back the current element in order to not picking
        output.pop_back();
        //not taking the current element
        findingSubsets(nums, ans, output, index+1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        findingSubsets(nums, ans, output, index);
        return ans;
    }
};