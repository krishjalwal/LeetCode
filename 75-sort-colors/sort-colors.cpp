class Solution {
private:
    void mergeSort(vector<int>& nums, int low, int high) {
        if (low < high) {
            int mid = low + (high - low) / 2;

            // Recursively sort the two halves
            mergeSort(nums, low, mid);
            mergeSort(nums, mid + 1, high);

            // Merge the sorted halves
            merge(nums, low, mid, high);
        }
    }

    void merge(vector<int>& nums, int low, int mid, int high) {
        int n1 = mid - low + 1;
        int n2 = high - mid;

        // Create temporary arrays
        vector<int> left(n1), right(n2);

        // Copy data to temporary arrays left[] and right[]
        for (int i = 0; i < n1; i++)
            left[i] = nums[low + i];
        for (int j = 0; j < n2; j++)
            right[j] = nums[mid + 1 + j];

        // Merge the temporary arrays back into nums[low..high]
        int i = 0, j = 0, k = low;
        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                nums[k] = left[i];
                i++;
            } else {
                nums[k] = right[j];
                j++;
            }
            k++;
        }

        // Copy the remaining elements of left[], if there are any
        while (i < n1) {
            nums[k] = left[i];
            i++;
            k++;
        }

        // Copy the remaining elements of right[], if there are any
        while (j < n2) {
            nums[k] = right[j];
            j++;
            k++;
        }
    }
public:
    void sortColors(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);

        // Output the sorted array
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << " ";
        }
    }
};