#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n;
    cout<<"m * n value:"<<endl;
    cin>>m>>n;
    int a[m][n],b[m][n];
    cout<<"Enter 2 metrix:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
