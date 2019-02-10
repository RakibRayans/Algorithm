#include<iostream>
#include<cstdlib>  //max=32767
#include<ctime>
#include<conio.h>
using namespace std;
int main()
{
    int i=0,x,y;
    cout<<"Enter range between which random number will be ganarated: ";
    cin>>x>>y;
    srand(time(0));
    while(i<5)
    {
       cout<<x+(rand()%(y-x+1))<<endl;
       i++;
    }

    getch();
}
