#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,item;
    cout<<"elements number:"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the item to be search:"<<endl;
    cin>>item;
    for(i=1;i<=n;i++)
    {
        if(a[i]==item)
            {
            cout<<"Item Found in position "<<i<<endl;
            break;
            }
        if(i==n)
        {
            cout<<"Item is not Found"<<endl;
        }
    }
    return 0;
}
