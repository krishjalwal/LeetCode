class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        for(int i = 0 ; i < chars.size() ;)
        {
            char current = chars[i];
            int count = 0;
            while(i < chars.size() && chars[i]==current)
            {
                i++;
                count++;
            }

            chars[index++] = current;


            if(count > 1)
            {
                string count_str = to_string(count);
                for(char digit : count_str)
                {
                    chars[index++] = digit;
                }
            }
        }
        return index;
    }
};