class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        stack<int> st;
        queue<int> q;

        for(int i = sandwiches.size() - 1; i >= 0; i--)
        {
            st.push(sandwiches[i]);
        }

        for(int i = 0 ; i < students.size() ; i++)
        {
            q.push(students[i]);
        }
        
        int count = 0;

        while(!q.empty())
        {
            if(q.front() == st.top())
            {
                q.pop();
                st.pop();
                count = 0; // Resetting count as a student got their preferred sandwich
            }
            else
            {
                int student = q.front();
                q.pop();
                q.push(student);
                count++;

                // If we looped through all students and couldn't serve their preferred sandwich, break the loop
                if(count == q.size()) 
                    break;
            }
        }

        return q.size(); // Remaining students who couldn't get their preferred sandwich
    }
};