/*-----------------------------------------------------//
// *****Program to implement INSERTION SORT using c++***** //
//-----------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
/*---------------------------------------------------------------//
// *****function to implement insertion sort which takes array***** //
// *****arr which is to be sorted and size of the array , n***** //
//---------------------------------------------------------------*/
void insertion_sort(int arr[], int n)
{
    /* incrementing the index of key element */
    for(int i=1; i<n; i++)
    {
        int key=arr[i];
        int j=i-1;
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while(j>=0&&key<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        /* move the key element to the correct position */
        arr[j+1]=key;
    }
}
/*-----------------------------------------------//
// *****Function to print the sorted array ***** //
//-----------------------------------------------*/
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<arr[i]<<" ";
}
/*--------------------------//
// *****Driver program***** //
//--------------------------*/
int main()
{
    int n;
    cout<<"\n Enter no of elements : ";
    cin>>n;
    int arr[n];
    cout<<"\n Enter the elements : ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    insertion_sort(arr,n);
    cout<<"Sorted array:";
    printArray(arr, n);
    return 0;
}
