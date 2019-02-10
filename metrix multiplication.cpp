#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,r1,c1,r2,c2,sum=0;
    int a[5][5],b[5][5],c[5][5]={0};
    cout<<"Enter 2 matrix size"<<endl;
    cin>>r1>>c1;
    cin>>r2>>c2;
    cout<<"Enter 2 matrix"<<endl;
    while(c1 != r2)
    {
        cout<<"error! reenter the value:"<<endl;
        cin>>r1>>c1;
        cin>>r2>>c2;
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }

   for(i=0;i<r1;i++){
     for(j=0;j<c2;j++){
        for(k=0;k<c1;k++)
        {
            sum=sum+(a[i][k]*b[k][j]);
        }
        cout<<sum<<" ";
        sum=0;
     }
     cout<<endl;
   }


    return 0;
}
