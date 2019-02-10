#include<iostream>
using namespace std;

int flip( );
int main( void )
{
int s,t,H=0,T=0;

for ( t=1;t<=100;t++){
    printf( "%d\n", flip( ));

    if (flip( ) == 0)
    H++;
    else
    T++;



}
cout<<"heads was flipped %d times"<<H<<endl;
cout<<"tails was flipped %d times"<<T<<endl;

return 0;

}
int flip( )
{
    int i = rand() % 2;


        if (i == 0)
             return 0;

        else
             return 1;


       }
