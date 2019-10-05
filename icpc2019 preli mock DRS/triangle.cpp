#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    if(x==y&&y==z)
    {
        cout<<"Equilateral Triangle"<<endl;
    }

    else if(x!=y&&y!=z&&z!=x)
    {
        cout<<"Bad Triangle"<<endl;
    }
     else
    {
        cout<<"Isosceles Triangle"<<endl;
    }
}
