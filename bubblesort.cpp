/*-----------------------------------------------------//
// *****Program to implement BUBBLE SORT using c++***** //
//-----------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
/*---------------------------------------------------------------//
// *****function to implement bubble sort which takes array***** //
// *****arr which is to be sorted and size of the array , n***** //
//---------------------------------------------------------------*/
void bubblesort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])                           //if predecessor is greater than the successor in the given array
                swap(arr[j],arr[j+1]);                    //the swap the two numbers using stl
        }
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
    bubblesort(arr,n);
    cout<<"Sorted array:";
    printArray(arr, n);
    return 0;
}
