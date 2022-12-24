#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;
    printf("Enter the number of integers");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr== NULL){
        printf("memory not avaliable");
        exit(0);
    }
    for(int i=0;i<n;i++){
        printf("Enter the integer :");
        scanf("%d", ptr + i);
    }
    for(int i=0;i<n;i++)
    {
            printf("%d ",*(ptr+i));
    }
return 0;
}