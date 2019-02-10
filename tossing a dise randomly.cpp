#include<iostream>
#include<cstdlib>
#include<ctime>
#include<conio.h>
using namespace std;
int main()
{
    int i=0;
    srand(time(0));
    while(i<15)
    {
       cout<<(rand()%6)+1<<endl;
       i++;
    }

    getch();
}

