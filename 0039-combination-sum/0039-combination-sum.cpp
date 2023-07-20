class Solution {
public:
    void findCombination(int i, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & output) {
      if (i == arr.size()) {
        if (target == 0) {
          ans.push_back(output);
        }
        return;
      }
      // pick up the element 
      if (arr[i] <= target) {
        output.push_back(arr[i]);
        findCombination(i, target - arr[i], arr, ans, output);
        output.pop_back();
      }
      // not picking up the element
      findCombination(i + 1, target, arr, ans, output);

    }
  public:
    vector < vector < int >> combinationSum(vector < int > & candidates, int target) {
      vector < vector < int >> ans;
      vector < int > output;
      findCombination(0, target, candidates, ans, output);
      return ans;
    }
    
};