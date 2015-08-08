int lengthOfLastWord(char* s) {
     int len = 0;
    while(*s)
    {
        if(*s++ != ' ')
            ++len;
        else if( *s && *s !=' ' ) //因为第一个if语句运行完后将s+1;所以*s判断是否是最后的字符，*s!=' '判断是否s字符不为' '
            len = 0;
    }
    return len;
};

