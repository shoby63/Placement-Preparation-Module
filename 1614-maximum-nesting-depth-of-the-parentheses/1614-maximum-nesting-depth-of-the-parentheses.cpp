class Solution {
public:
    int maxDepth(string s) {
        
        // TC = O(N)
        // SC = O(1)
        
        int currdepth = 0;
        int maxdepth = 0;

        for(char ch : s)
        {
            if(ch == '(')
                currdepth++;
            else if(ch == ')')
            {
                maxdepth = max(maxdepth, currdepth);
                currdepth--;
            }
        }
        return maxdepth;
    }
};