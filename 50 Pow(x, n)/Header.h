class Solution {
public:
    double myPow(double x, int n) {
    
       if( !n ) return 1;
       double tmp = pow(x, n/2);
     //  if(n&1)  return x*tmp*tmp;
     //  else
     //       return tmp*tmp;
      return n&0x1 ? n>0 ? x * tmp * tmp : tmp * tmp / x : tmp * tmp;
    }
};