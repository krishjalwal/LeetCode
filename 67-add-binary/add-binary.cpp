class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int i = a.size() - 1; int j = b.size() - 1;
        int carry = 0; int add = 0;
        while(i>= 0 && j>=0)
        {
            add = stoi(string(1, a[i])) + stoi(string(1, b[j])) + carry;
            
            if(add == 1)
            {
                ans += "1";
                carry = 0;
            }
            else if(add == 2)
            {
                ans+= "0";
                carry = 1;
            }
            else if(add == 3)
            {
                ans+="1";
                carry = 1;
            }
            else
            {
                ans += "0";
                carry = 0;
            }
            i--;
            j--;
        }

        while(i>=0)
        {
            add = stoi(string(1, a[i])) + carry;
            if(add == 1)
            {
                ans += "1";
                carry = 0;
            }
            else if(add == 2)
            {
                ans+= "0";
                carry = 1;
            }
            else if(add == 0)
            {
                ans += "0";
                carry = 0;
            }
            i--;
        }

        while(j>=0)
        {
            add = stoi(string(1, b[j])) + carry;
            if(add == 1)
            {
                ans += "1";
                carry = 0;
            }
            else if(add == 2)
            {
                ans+= "0";
                carry = 1;
            }
            else if(add == 0)
            {
                ans += "0";
                carry = 0;
            }
            j--;
        }

        if(carry > 0)
        {
            ans += to_string(1);
        }


        return string(ans.rbegin() , ans.rend());
    }
};