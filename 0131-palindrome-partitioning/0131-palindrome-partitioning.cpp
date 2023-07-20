class Solution {
public:
    void palindromePartition(int index, string &s, vector<vector<string>>& ans, vector<string>& output)
    {
        
/*After partitioning, every palindromic substring is inserted in a data structure When the base case has reached the list of palindromes generated during that recursion call is inserted in a vector of vectors.*/
        
       if(index == s.length())
       {
           ans.push_back(output);
           return;
       }
        
        //deciding the partition and looping
        
        for(int i=index; i<s.size(); ++i)
        {
            if (isPalindrome(s, index, i))
            {
             output.push_back(s.substr(index, i - index + 1));
             palindromePartition(i + 1, s, ans, output);
             output.pop_back();
            }
        }
    }
    
    bool isPalindrome(string s, int start, int end)
    {
        while (start <= end) {
            if (s[start++] != s[end--])
                return false;
    }
    return true;
  }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> output;
        palindromePartition(0, s, ans, output);
        return ans;
    }
};