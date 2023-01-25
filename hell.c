#include<stdio.h>
struct student{
    int sem;
    char name[20];
    float cgp;
};
int main()
{
    int n;
    struct student s[10];
    printf("Enter the no of students");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the name,sem,cgp");
        scanf("%s %d %f",s[i].name,&s[i].sem,&s[i].cgp);
    }
    int lar;
    float l=-990;
    for(int i=0;i<n;i++)
    {
        if(s[i].cgp>l)
        {
            l=s[i].cgp;
            lar=i;
        }
    }
    printf("The student scored %f \n %d\n%s",s[lar].cgp,s[lar].sem,s[lar].name);
return 0;
}