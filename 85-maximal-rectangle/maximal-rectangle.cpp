class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        if(n == 0) return 0;
        
        vector<int> left_first_min(n, 0);
        vector<int> right_first_min(n, 0);

        stack<int> s;
        
        // Calculate the left first smaller element for each index
        for(int i = 0 ; i < n ; i++)
        {
            while(!s.empty() && heights[s.top()] >= heights[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                left_first_min[i] = 0;
            }
            else
            {
                left_first_min[i] = s.top() + 1;
            }
            s.push(i);
        }

        // Clear the stack for the next iteration
        while(!s.empty())
        {
            s.pop();
        }

        // Calculate the right first smaller element for each index
        for(int i = n - 1 ; i >= 0 ; i--)
        {
            while(!s.empty() && heights[s.top()] >= heights[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                right_first_min[i] = n - 1;
            }
            else
            {
                right_first_min[i] = s.top() - 1;
            }
            s.push(i);
        }

        // Find the maximum rectangle area
        int max_area = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int width = right_first_min[i] - left_first_min[i] + 1;
            int area = width * heights[i];
            max_area = max(max_area, area);
        }

        return max_area;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int maxArea = 0 ;
        
        int n = matrix.size();
        if(n == 0) return 0;
        int m = matrix[0].size();

        vector<int> heights(m, 0); 
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(matrix[i][j] == '1') heights[j]++; 
                else
                {
                    heights[j] = 0;
                }
            }
            int area = largestRectangleArea(heights); 
            maxArea = max(area , maxArea);
        }
        return maxArea;
    }
};
