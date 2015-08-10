class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = n + m - 1, x = m - 1, y = n - 1;
        
        while( y >= 0)
        {
            nums1[i--] = x >=0 && nums1[x] > nums2[y] ? nums1[x--]: nums2[y--];
        }
        
        
    }
};