// Last updated: 8/9/2026, 12:10:32 AM
class Solution {
public:
    bool isPowerOfFour(int n) {
        while(n){
            if(n%4==0){
                n=(n/4);
            }
            else{
                if(n==1){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
         return false;
    }
};