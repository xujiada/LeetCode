class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ret ;//(2,-1);
        auto first = find(nums.begin(), nums.end(), target);
       // if(first == nums.end())
        //     return ret;
        auto second = count(nums.begin(), nums.end(), target);
        ret.push_back( (first == nums.end() ? -1 : first-nums.begin() ) );
        ret.push_back( (second == 0 ? -1 : first + second -1 - nums.begin()) );
        return ret;
        
    }
};