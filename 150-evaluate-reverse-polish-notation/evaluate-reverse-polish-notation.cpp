class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> mystack;
        int ans = 0; 
        for (auto str : tokens) {
            if (str != "+" && str != "*" && str != "-" && str != "/") {
                int var = stoi(str);
                mystack.push(var);
            } else {
                int pop1 = mystack.top();
                mystack.pop();
                int pop2 = mystack.top();
                mystack.pop();

                if (str == "+") {
                    ans = pop2 + pop1;  // Note the order of operands
                    mystack.push(ans);
                } else if (str == "*") {
                    ans = pop2 * pop1;  // Note the order of operands
                    mystack.push(ans);
                }
                else if (str == "-") {
                    ans = pop2 - pop1;  // Note the order of operands
                    mystack.push(ans);
                }
                else if (str == "/") {
                    ans = pop2 / pop1;  // Note the order of operands
                    mystack.push(ans);
                }
            }
        }
        return mystack.top();
    }
};