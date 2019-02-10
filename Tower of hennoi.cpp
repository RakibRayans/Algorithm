#include<bits/stdc++.h>
using namespace std;

void move(int disk,char n1,char n2,char n3)
{
    if(disk==1)
    {
        cout<<"move disk "<<disk<<" from "<<n1 <<" to "<<n3 <<endl;
        return;
    }
    move(disk-1,n1,n3,n2);
    cout<<"move disk "<<disk<<" from "<< n1 <<" to "<<n3 <<endl;
    move(disk-1,n2,n1,n3);
}
int main()
{
    int disk;
    cout<<"Enter the number of disk:"<<endl;
    cin>>disk;
    move(disk,'A','B','C');
    return 0;

}
