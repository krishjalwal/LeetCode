class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string sum1="0",sum2="0";
        for(int i=0;i<word1.size();i++){
            sum1+=word1[i];
        }
        for(int i=0;i<word2.size();i++){
            sum2+=word2[i];
        }return sum1==sum2;
    } 
    
};