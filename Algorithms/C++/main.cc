#include "sum_array.hh"
#include "insertion_sort.hh"
using namespace std;

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int N = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, N);
    printArray(arr, N);

    int arr2[] = {1, 2, 3, 10, 12};
    int n = sizeof(arr2) / sizeof(arr2[0]);
    sum_array(arr2, n);

    return 0;
}