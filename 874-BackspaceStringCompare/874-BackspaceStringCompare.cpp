// Last updated: 8/9/2026, 12:08:02 AM
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int p1 = s.size() -1 ;
        int p2 = t.size() -1 ;

        int skipS = 0;
        int skipT = 0;

        while(p1>=0 || p2>=0)
        {
            while(p1 >= 0)
            {
                if(s[p1]=='#')
                {
                    skipS++;
                    p1--;
                }
                
                else if(skipS>0)
                {
                    skipS--;
                    p1--;
                }

                else
                {
                    break;
                }
            }

            while(p2 >= 0)
            {
                if(t[p2]=='#')
                {
                    skipT++;
                    p2--;
                }
                
                else if(skipT>0)
                {
                    skipT--;
                    p2--;
                }

                else
                {
                    break;
                }
            }

            if(p1>=0 && p2>=0 )
            {
                if(s[p1] != t[p2])
                {
                return false;
                }
            }
            

            else if((p1>=0) != (p2>=0))
            {
                return false;
            }

            p1--;
            p2--;
        }
        return true;
    }
};