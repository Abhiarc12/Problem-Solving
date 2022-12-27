int main()
{
    char a[10];
    int i;
    printf("enter the string\n");
    scanf("%s",a);
    for(i=9;i>=0;i--)
        printf("%c",a[i]);
    return 0;
}
