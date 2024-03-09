class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // for(int i = 0 ; i < nums1.size() ; i++)
        // {
        //     for(int j = 0 ; j < nums2.size() ; j++)
        //     {
        //         if(nums1[i]==nums2[j])
        //         {
        //             return nums1[i];
        //         }
        //     }
        // }
        // return -1;

        int i = 0 ; int j = 0 ;

        while(i < nums1.size() && j < nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                return nums1[i];
            }
            else if(nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return -1;
    }
};