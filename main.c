#include <stdio.h>
#include <stdlib.h>
#include "base64.h"
//https://www.jianshu.com/p/125c4bbed460
int main()
{
    // insert code here...

    char str1[] = "tablename";
    char str2[200] = {0}; //注意长度要给够
    int len = 0;
    base64_encode(str1,(int)strlen(str1),str2,&len);
    printf("%s, len = %d\n", str2, len);


    char str3[200] = {0};
    base64_decode(str2, (int)strlen(str2), str3, &len);

    printf("%s, len = %d\n", str3, len);
    return 0;
}
