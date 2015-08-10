Merge Sorted Array 
===
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { <br>
        int i = n + m - 1, x = m - 1, y = n - 1;<br>
        
        while( y >= 0)
        {
            nums1[i--] = x >=0 && nums1[x] > nums2[y] ? nums1[x--]: nums2[y--];
        }
    }
