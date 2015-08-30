int strStr(char* haystack, char* needle) {
     if (!*haystack && !*needle) return 0;
        char *p = haystack;
        for (; *p != '\0'; p++)
        {
            char *q1 = p, *q2 = needle;
            while (*q1 == *q2 && *q1 && *q2){
                ++q1;
                ++q2;
            }
            if (!*q2) return p - haystack;
            else if (!*q1) break;
        }
        return -1;
}