class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res=0;
        for (int i=0;i<sentences.size();i++){
            string x = sentences[i];
            int r = x.size();
            int count =0;
            for (int j=0;j<r;j++){
                if(sentences[i][j]==' '){
                    count++;
                }

            }
            res = max(count,res);
        }

        return res+1;
    }
};