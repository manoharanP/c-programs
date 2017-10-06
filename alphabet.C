#include <stdio.h>

int main()
{
   char str;
   scanf("%c",&str);
    if(str>='a'&&str<='z'||str>='A'&&str<='Z')
    printf("It is a alphabet");
    else
    printf("it is not an alphabet");
    return 0;
}
