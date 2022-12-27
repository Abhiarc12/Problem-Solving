#include<stdio.h>
int main()
{
    char a[1000];
    int i,length,j;
    printf("enter the string\n");
    scanf("%s",a);
    length = strlen(a);
    for(i=0;i<length;i++)
    {
        j = a[i];
        if(j>=97&&j<=122)
        {
            j = j-32;
            printf("%c",j);
        }
        if(i>=65&&i<=90)
           {
               j = j+32;
               printf("%c",a[i]);
           }
    }
    return 0;
}
