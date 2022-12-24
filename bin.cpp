/*
Time Complexity: O(log(n)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,j=1,sum=0,d;
    cin>>num;
    while(num>0)
    {
        d=num%2;
        d=d*j;
        sum+=d;
        j*=10;
        num/=2;
    }
    printf("\n%d",sum);
return 0;
}