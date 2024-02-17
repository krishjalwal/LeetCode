class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>r;
        int n=names.size();
        for(int i=0;i<n;i++)
        {
            r.push_back({heights[i],names[i]});
        }
        sort(r.rbegin(),r.rend());
        n=0;
        for(auto i: r)
        {
            names[n]=i.second;
            n++;
        }
        return names;
    }
};