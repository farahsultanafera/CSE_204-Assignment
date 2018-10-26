#include<iostream>
using namespace std;
typedef long long ll;
int count,ck,c;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    c++;
}

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{

   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
        count++;
     }
     ck++;
     if (swapped == false)
        break;
   }
}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%c ", arr[i]);
    printf("\n\n%d Comparisons %d Passes %d Interchanges.\n",count,ck,c);
}


int main()
{
    int arr[] = {'P','E','O','P','L','E',};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
