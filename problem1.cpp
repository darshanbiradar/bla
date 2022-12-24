#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d,dec=0;
    cin>>n;
    int i=0,it=0;
    while(n>0)
    {
        d=n%10;
        dec+=d*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<dec<<" ";
    while(dec>0)
    {
        if(dec%2!=0)
        {
            dec=dec-1;
        }
        else
        {
            dec=dec/2;
        }
        cout<<" "<<dec;
        it++;
    }
    cout<<" "<<it;
return 0;
}