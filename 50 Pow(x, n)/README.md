Pow(x, n) 
=
Implement pow(x, n). <br>
  double tmp = pow(x, n/2); <br>
     //  if(n&1)  return x*tmp*tmp; <br>
     //  else <br>
     //       return tmp*tmp; <br>
      return n&0x1 ? n>0 ? x * tmp * tmp : tmp * tmp / x : tmp * tmp; <br>
      
      如果是按注释后的那些语句写，会忽略n<0的情况；
      关于条件语句，根据运算故优先级，从右到左看，即可看为：
      n&0x1 ? (n>0 ? x * tmp * tmp : tmp * tmp / x ): tmp * tmp;
