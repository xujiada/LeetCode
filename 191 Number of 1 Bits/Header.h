class Solution {
public:
    int hammingWeight(uint32_t n) {
    int count;
    for(count = 0; n; n >>= 1)  //向右移一位
    {
        count += n & 1;
    }
    return count; 
    }
    
};
