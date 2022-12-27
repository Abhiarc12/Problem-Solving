#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int i,j=0;
    printf("enter the string\n");
    scanf("%s",a);
    for(i=9;i>=0;i--)
        {
            b[j] = a[i];
            j++;
        }
        if(a==b)
            printf("yes");
        else
            printf("n");
    return 0;

}
