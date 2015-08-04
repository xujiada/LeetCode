class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      auto e = unique(nums.begin(),nums.end());
      nums.erase(e,nums.end());
      return nums.size();
    }
};