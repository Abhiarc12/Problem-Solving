#include<stdio.h>
int main()
{
    char a[100],b[100],c[300];
    int i,len1,len2;
    printf("enter first string\n");
    scanf("%s",a);
    printf("enter second string\n");
    scanf("%s",b);
     len1 = strlen(a);
     len2 = strlen(b);
    for(i=0;i<len1;i++)
     c[i] = a[i];
    for(i=0;i<len2;i++){
            printf("\t");
        c[len1+i] = b[i];
    }
    for(i=0;i<len1+len2;i++)
     printf("%c",c[i]);
    return 0;
}
