class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        map<int,vector<int>> pkp;
        for(int i=0;i<n;i++){
           mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
          pkp[mp[nums[i]]].push_back(nums[i]);
        //   int kk=mp[s[i]];
        //   cout<<kk<<endl;
        }

        vector<int> ans;

        for(auto it:pkp){
            sort(it.second.begin(),it.second.end());
            
            for(int i=it.second.size()-1;i>=0;i--){
                ans.push_back(it.second[i]);
            }
        }

        return ans;
    }
};