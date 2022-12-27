#include<stdio.h>
int main()
{
    char a[100];
    int i,length,x=0,j;
    printf("enter the string\n");
    scanf("%s",a);
    length = strlen(a);
    for(i=0;i<length;i++)
    {
        j = a[i];
        if(j=32)
         x++;
         else
            x = x;
    }
    printf("%d",2*x);
    return 0;
}
