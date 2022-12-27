#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i, len1,len2,x=0;
    printf("enter first string\n");
    scanf("%s",a);
    printf("enter second string\n");
    scanf("%s",b);
    len1 = strlen(a);
    len2 = strlen(b);
    if(len1==len2){
        for(i=0;i<len1;i++)
        {
            if(a[i]==b[i])
                x++;
        }
        if(x==len1)
            printf("Entered Strings are same\n");
        else
            printf("Entered String are not Same\n");
    }
    else
        printf("Entered String are not same\n");
    return 0;
}
