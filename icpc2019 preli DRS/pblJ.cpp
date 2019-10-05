#include<bits/stdc++.h>
using  namespace std;

int main()
{
    long long int n,x,k,s,i,smul=1;
    cin>>n;
   for(int j=1;j<=n;j++)
    {
        cin>>x;
        if(x==1)
        {
            cin>>k;
            s=k*k;
            cout<<"Case "<<j<<": "<<s<<endl;
        }
        else{
           long long int arr[x];
            for(i=0;i<x;i++)
            {
                cin>>arr[i];
            }
            sort(arr,arr+x);
            cout<<"Case "<<j<<": "<<arr[0]*arr[x-1]<<endl;
        }
    }
    return 0;
}

