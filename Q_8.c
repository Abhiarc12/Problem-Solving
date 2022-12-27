
#include<stdio.h>
int main()
{
    char a[100];
    int i,j,length;
    printf("enter the string\n");
    scanf("%s",a);
    length = strlen(a);
    for(i=0;i<length;i++)
    {
        for(j=0;j<=i;j++)
        {
             printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;
}
