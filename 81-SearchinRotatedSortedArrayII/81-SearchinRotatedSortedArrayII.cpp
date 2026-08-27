// Last updated: 8/28/2026, 3:15:27 AM
1class Solution {
2public:
3    bool search(vector<int>& arr, int k) {
4    int n = arr.size();
5    int low = 0, high = n - 1;
6
7    while (low <= high) {
8        int mid = (low + high) / 2;
9
10        // If mid points to the target
11        if (arr[mid] == k) return true;
12
13        // Edge case: all three are equal, we cannot determine which side is sorted
14        if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
15            low++;
16            high--;
17            continue;
18        }
19
20        // If the left half is sorted
21        if (arr[low] <= arr[mid]) {
22            if (arr[low] <= k && k <= arr[mid]) {
23                high = mid - 1; // Target lies in left
24            } else {
25                low = mid + 1;  // Target lies in right
26            }
27        } else {
28            // Right half is sorted
29            if (arr[mid] <= k && k <= arr[high]) {
30                low = mid + 1;  // Target lies in right
31            } else {
32                high = mid - 1; // Target lies in left
33            }
34        }
35    }
36
37    return false;   
38    }
39};