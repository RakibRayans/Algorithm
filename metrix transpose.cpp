#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n;
    cin>>m>>n;
    int a[m][n],b[m][n];
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
           b[i][j]=a[j][i];
           cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
