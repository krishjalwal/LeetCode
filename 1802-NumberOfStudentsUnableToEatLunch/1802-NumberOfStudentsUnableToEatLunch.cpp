// Last updated: 8/9/2026, 12:05:02 AM
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        int n = students.size();
        for(int i=0;i<n;i++){
            q.push(students[i]);
        }
        int i = 0; //traverse the sandwiches array
        int count = 0;
        while(q.size()>0 && count!=q.size()){
            if(q.front()==sandwiches[i]){
                count = 0;
                q.pop();
                i++;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }
        }
        return q.size();

    }
};