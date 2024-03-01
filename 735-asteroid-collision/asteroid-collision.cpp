class Solution {
public:
vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> st;

    for (int asteroid : asteroids) {
        // If the stack is empty or the current asteroid is moving to the right
        if (st.empty() || asteroid > 0) {
            st.push(asteroid);
        } else {
            // Current asteroid is moving to the left
            // Keep popping asteroids until no more collisions can occur
            while (!st.empty() && st.top() > 0 && st.top() < abs(asteroid)) {
                st.pop();
            }

            // Handle collisions
            if (!st.empty() && st.top() == abs(asteroid)) {
                st.pop(); // Both asteroids explode
            } else if (st.empty() || st.top() < 0) { 
                st.push(asteroid); // Current asteroid survives
            }
        }
    }

    // Convert stack to vector and return
    vector<int> result;
    while (!st.empty()) {
        result.insert(result.begin(), st.top());
        st.pop();
    }
    return result;
}

};