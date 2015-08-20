class Solution {
public:
    bool isHappy(int n) {
        int temp;
        while(n){
            if(n == 1) return true;
            if(n == 4) return false;
            temp = 0;
            while(n){
                temp += (n%10)*(n%10);
                n = n/10;
            }
            n = temp;
        }
    }
};