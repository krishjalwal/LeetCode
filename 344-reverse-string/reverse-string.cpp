class Solution {
public:
    void reverseString(vector<char>& s) {
        int A = 0 ;
        int B = s.size() - 1 ;

        while(A<=B)
        {
            swap(s[A],s[B]);
            A++;
            B--;
        }

        for(int i = 0 ; i < s.size() ; i++)
        {
            cout<<s[i];
        }
    }
};