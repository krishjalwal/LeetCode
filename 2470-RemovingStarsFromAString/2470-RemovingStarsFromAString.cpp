// Last updated: 8/9/2026, 12:03:28 AM
class Solution {
public:
    string removeStars(string s) {

        string myWord;

        for (char &item: s) {

            if (item == '*') {

                myWord.pop_back();
            }

            else {

                myWord += item;

            }


        }

        return myWord;
        
    }
};