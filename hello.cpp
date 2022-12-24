#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,4,9,10},i,j,key;
    cin>>key;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(arr[j]+arr[i]==key)
            {
            cout<<"True";
            return 0;
            }
        }
    }
    cout<<"False";
return 0;
}