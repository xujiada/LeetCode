class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int j = 0;
        for(auto i = nums.begin(); i < nums.end(); i++)
        {   
            
            if(i == nums.end() -1)
            {
                if(*i >= target)
                    return j;
                else
                    return j+1;
            }
            if(*i < target && ++i != nums.end())
            {
                //++i;
                if(*i >= target)
                return j+1;
                i--;   //差了这一步，一直出错
            }
             if(*i >= target)
            {
                //++i;
                //if(*i > target)
                return 0;
            }
            j++;
        }
    }
};