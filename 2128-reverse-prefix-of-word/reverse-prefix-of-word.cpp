class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int i = 0 ; int end; bool flag = false;
        
        for(int i = 0 ; i < word.size() ; i++)
        {
            if(word[i]==ch)
            {
                flag = true;
                end = i;
                break;
            }
        }

        if(!flag)
        {
            return word;
        }

        while(i < end)
        {
            swap(word[i],word[end]);
            i++;
            end--;
        }

        return word;
    }
};