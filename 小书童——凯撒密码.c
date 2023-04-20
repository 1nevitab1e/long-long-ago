#include<stdio.h>
#include<string.h>
int main()
{
    int n;
     scanf("%d",&n);
     getchar();
    char a[50];
     scanf("%s",a);
    for (int i=0;i<strlen(a);i++)
     {
        a[i]='a'+(a[i]-'a'+n)%26;
     }
          printf("%s",a);
    return 0;
}