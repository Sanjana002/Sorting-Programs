//------------------------------------------------------//
//  *****Program to implement QUICKSORT using C++*****  //
//------------------------------------------------------//
#include<bits/stdc++.h>

using namespace std;

//------------------------------------------------------------//
// ***   This function takes last element as pivot and    *** //
// ***        do partitioning about pivot element         *** //
// *** Places all elements smaller than pivot to the left *** //
// ***  and all elements greater than pivot to the right  *** //
//------------------------------------------------------------//
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];                         //pivot element
    int i = low;                                   //consider i as index of smaller elements

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            swap(arr[i], arr[j]);                   //swap using stl
            i++;                                    //increment index of smaller element
        }
    }
    swap(arr[i], arr[high]);                        //moving pivot element to the middle of array
    return (i);
}
//----------------------------------------------------//
// *****Function to implement quicksort on array***** //
//----------------------------------------------------//
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi + 1, high);
    }
}
//-----------------------------------------------//
/* *****Function to print the sorted array*****  */
//-----------------------------------------------//
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<arr[i]<<" ";
}
//--------------------------//
// *****Driver program***** //
//--------------------------//
int main()
{
    int n;
    cout<<"\n Enter no of elements";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    quickSort(arr, 0, n-1);
    cout<<"Sorted array:";
    printArray(arr, n);
    return 0;
}
