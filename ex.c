#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[100],sen[100];

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    scanf("%c",&ch);
    scanf("%s",s);
    fgets(sen,100,stdin);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}