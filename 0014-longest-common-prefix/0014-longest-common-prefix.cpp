class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs.size();
       
        for(int i = 0; i<strs[0].length(); i++) //first string 
        {
            bool match = true;
            //first string ka har character ko ab compare krayenge remaining string se
            char ch = strs[0][i]; 
            for(int j=1; j<n; j++)
            {
                if(strs[j].size() < i || ch != strs[j][i])
               {
                 match = false;
                 break;
               }
            }
            if(match == false)
            break;
            else
            ans.push_back(ch);
        }
        return ans;
    }
};