/*-----------------------------------------------------//
// *****Program to implement MERGE SORT using c++***** //
//-----------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
/*-----------------------------------------//
// *****Merges two subarrays of arr[] in sorted order***** //
// *************First subarray is arr[l..m]*************** //
// ************Second subarray is arr[m+1..r]************* //
//-----------------------------------------*/
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    /* Merge the temp arrays back into arr[l..r]*/
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
/*--------------------------------------------------------------------//
// ***  function to divide arr into two subarrays and calling     *** //
// *** merge funtion to merge the two subarrays in sorted order   *** //
// ***     l is for left index and r is right index of the        *** //
// ***            sub-array of arr to be sorted
//--------------------------------------------------------------------*/
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;                      //finding middle position of the array to divide it in two halves
        mergeSort(arr, l, m);                   //recursive call to further divide the  first half
        mergeSort(arr, m+1, r);                 //recursive call to further divide the second half
        merge(arr, l, m, r);                    //merging two halves
    }
}
//----------------------------------------------------//
// *****Function to print the sorted array array***** //
//----------------------------------------------------//
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<A[i]<<" ";
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
    cout<<"\nEnter the elements to be sorted : ";
    for(int i=0; i<n; i++)
         cin>>arr[i];
    mergeSort(arr, 0, n-1);
    cout<<"Sorted array is : ";
    printArray(arr, n);
    return 0;
}
