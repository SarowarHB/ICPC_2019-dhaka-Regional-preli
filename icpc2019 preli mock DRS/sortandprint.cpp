#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;

    int roll[109];
    string name[109];
    int mark[109];

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>roll[i];
        cin>>name[i];
        cin>>mark[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(mark[i]<mark[j])
            {
                swap(mark[i],mark[j]);
                swap(name[i],name[j]);
                swap(roll[i],roll[j]);
            }
            else if(i!=j && mark[i]==mark[j])
            {
                if(roll[i]>roll[j])
                {
                    swap(mark[i],mark[j]);
                    swap(name[i],name[j]);
                    swap(roll[i], roll[j]);
                }
            }
        }
    }

    cout<<"Roll | Name       | Marks"<<endl<<"-------------------------"<<endl;


    for(i=0; i<n; i++)
    {
        printf("%4d | ", roll[i]);
        int l = name[i].size();
        cout<<name[i];
        for(j=l; j<=10; j++)
            cout<<" ";
        cout<<"| "<<mark[i]<<endl;

    }
}
