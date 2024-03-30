class Solution {
public:
    int characterReplacement(string s, int k) {
        int head = 0 ; int tail = 0 ; int ans = 0 ; int cnt[26] = {};
        int n = s.size();
        for(head = 0 ; head < s.size() ; head++)
        {
            cnt[s[head] - 'A']++;
            while(head - tail + 1 - *max_element(cnt,cnt+26) > k)
            {
                cnt[s[tail] - 'A']--;
                tail++;
            }
            ans = max(ans,head - tail + 1);
        }
        return ans;
    }
};