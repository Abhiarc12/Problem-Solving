#include<stdio.h>
int main()
{
    char a[100];
    int i,j,length,k=1,x=0;
    while(k)
    {
    printf("enter the string\n");
    scanf("%s",a);
    length = strlen(a);
     for(i=0;i<length;i++)
     {
         x = 0;
         for(j=0;j<length;j++)
         {
             if(a[i]==a[j])
                x++;
         }
         printf("%c reapeat itself by %d times\n",a[i],x);
         printf("\n");
     }
     printf("do you want to check more words say 0 or 1\n");
     scanf("%d",&k);
    }
    return 0;
}
