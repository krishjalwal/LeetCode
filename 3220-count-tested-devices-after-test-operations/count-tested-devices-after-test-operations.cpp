class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int ans=0;
        for ( int i=0;i<batteryPercentages.size();i++ ){
            if( batteryPercentages[i]>0 ){
                ans++;
                for ( int j=i+1 ; j <batteryPercentages.size();j++ ){
                    batteryPercentages[j]--;
                }
            }
        }

        return ans;
    }
};