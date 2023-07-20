class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        int flag = 0; 
        for(int i = n-1; i>=0; i--)
        {    
/*agr hme blank space mil ra h and flag 1 hai iska mtlb hme words mil chuke hain to ab break krke loop ke bahar aa jayenge*/
/*or fir count return kr denge*/
            if(s[i]==' ' && flag == 1)
                break;
            if(s[i] != ' ')
            {
                flag = 1;
                count++;
            }
        }
        return count;
    }
};