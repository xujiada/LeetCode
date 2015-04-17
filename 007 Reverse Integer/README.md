#Reverse Integer 

Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321

Have you thought about this?
Here are some good questions to ask before coding. Bonus points for you if you have already thought through this!

If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100.

Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, then the reverse of 1000000003 overflows. How should you handle such cases?

For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.<br>

如果没有考虑到溢出情况，输入一个32位整数后可能反向会出现溢出，从而导致错误。<br>
`if ( result > 0x7FFFFFFF || result < (-0x7FFFFFFF - 1) )`  //考虑溢出的情况<br>
                                                          //0x7FFFFFF即为十进制的2^31次方（4字节的int型最大范围）<br>
因此result也需要设置为long型
