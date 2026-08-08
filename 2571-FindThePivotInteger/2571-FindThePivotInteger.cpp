// Last updated: 8/9/2026, 12:03:18 AM
class Solution {
public:
    int pivotInteger(int n) {
        int start = 0;
        int end = 0;
        for(int i=n;i>0;i--){
            start = (i*(i+1))/2;
            end +=i;
            if(start == end)    return i;
        }
        return -1;
    }
};