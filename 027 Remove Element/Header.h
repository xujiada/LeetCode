class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    while(find(nums.begin(),nums.end(),val)!=nums.end()) 
    {
        auto i = find(nums.begin(),nums.end(),val);
        nums.erase(i);
    }
    return nums.size();
    }
};