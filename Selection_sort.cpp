/*-----------------------------------------------------//
// *****Program to implement BUBBLE SORT using c++***** //
//-----------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
/*---------------------------------------------------------------//
// *****function to implement selection sort which takes array***** //
// *****arr which is to be sorted and size of the array , n***** //
//---------------------------------------------------------------*/
void selection_sort(int arr[], int n)
{
    /* incrementing the boundary of unsorted array one by one*/
    for(int i=0; i<n-1; i++)
    {
        int pos=i;
        /* finding the minimum element in unsorted array */
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[pos])
                pos=j;
        }
        /* swapping the found minimum element withe the ith element */
        swap(arr[i], arr[pos]);
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
    selection_sort(arr,n);
    cout<<"Sorted array:";
    printArray(arr, n);
    return 0;
}
