class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0; // Index to keep track of the current position in the modified array

        for (int i = 0; i < chars.size(); ) {
            char current_char = chars[i];
            int count = 0;

            // Count consecutive repeating characters
            while (i < chars.size() && chars[i] == current_char) {
                ++i;
                ++count;
            }

            // Update the array with the compressed characters
            chars[index++] = current_char;

            if (count > 1) {
                string count_str = to_string(count);
                for (char digit : count_str) {
                    chars[index++] = digit;
                }
            }
        }

        return index;
    }
    
};