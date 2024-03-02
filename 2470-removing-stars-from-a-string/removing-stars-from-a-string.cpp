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