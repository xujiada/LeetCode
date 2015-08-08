Length of Last Word
===
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

For example, <br>
Given s = "Hello World",<br>
return 5.<br>

while(*s)<br>
    {<br>
        if(*s++ != ' ')<br>
            ++len;<br>
        else if( *s && *s !=' ' ) //因为第一个if语句运行完后将s+1;所以*s判断是否是最后的字符，*s!=' '判断是否s字符不为' '<br>
            len = 0;<br>
    }<br>
