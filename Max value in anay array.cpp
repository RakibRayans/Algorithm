#include <iostream>
using namespace std;

int main()
{
    int i, n;
    int arr[100];
    cout << "Enter total number of elements: ";
    cin >> n;
    cout <<"Enter the numbers:"<< endl;
    for(i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
    for(i =1;i < n; i++)
    {
       if(arr[1] < arr[i])
           arr[1] = arr[i];
    }
    cout << "Largest element = " << arr[1];

    return 0;
}
