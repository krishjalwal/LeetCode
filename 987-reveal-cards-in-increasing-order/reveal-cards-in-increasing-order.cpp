class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        vector<int> ans(deck.size()) ;

        queue<int> q;
        for(int i = 0 ; i < deck.size() ; i++)
        {
            q.push(i);
        }

        for(auto card : deck)
        {
            int idx = q.front();
            q.pop();
            ans[idx] = card;

            if(!q.empty())
            {
                idx = q.front();
                q.pop();
                q.push(idx);
            }
        }

        return ans;
        
    }
};