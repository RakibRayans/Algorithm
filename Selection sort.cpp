#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1] = key;
   }
}


void printArray(int arr[], int n)
{
   int i;
   cout<<"After selection:"<<endl;
   for (i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}
int main()
{
    int n,i;
    cout<<"Enter how many elements:"<<endl;
    cin >> n ;
    cout<<"Enter the elements:"<<endl;
    int arr[n];
    for(i=0;i<n;i++)
        cin >> arr[i] ;
    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
