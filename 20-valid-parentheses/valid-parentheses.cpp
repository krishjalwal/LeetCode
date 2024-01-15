class Solution {
public:
    bool isValid(string s) {
        stack<int> arr;
        for(char i : s)
        {
            if(i == '(' || i == '{' || i == '[')
            {
                arr.push(i);
            }

            else
            {
                if(arr.empty())
                {
                    return false;
                }

                char topElement = arr.top();
                arr.pop();

                if ((i == ')' && topElement != '(') ||
                    (i == '}' && topElement != '{') ||
                    (i == ']' && topElement != '[')) {
                    return false; 
                }
            }
            
        }
        return arr.empty();
        
    }
};