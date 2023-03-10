#include <iostream>
#include <cstdlib>

using namespace std;

void quickSort()
{
  cout << "Quick sort";
  // int n, i;
  // cout << "\nEnter the number of data elements to be sorted: ";
  // cin >> n;

  // int arr[n];
  // for (i = 0; i < n; i++)
  // {
  //   cout << "Enter element " << i + 1 << ": ";
  //   cin >> arr[i];
  // }

  // QuickSort(arr, 0, n - 1);

  // // Printing the sorted data.
  // cout << "\nSorted Data ";
  // for (i = 0; i < n; i++)
  //   cout << "->" << arr[i];

  // void swap(int *a, int *b)
  // {
  //   int temp;
  //   temp = *a;
  //   *a = *b;
  //   *b = temp;
  // }

  // // Partitioning the array on the basis of values at high as pivot value.
  // int Partition(int a[], int low, int high)
  // {
  //   int pivot, index, i;
  //   index = low;
  //   pivot = high;

  //   // Getting index of the pivot.
  //   for (i = low; i < high; i++)
  //   {
  //     if (a[i] < a[pivot])
  //     {
  //       swap(&a[i], &a[index]);
  //       index++;
  //     }
  //   }
  //   // Swapping value at high and at the index obtained.
  //   swap(&a[pivot], &a[index]);

  //   return index;
  // }

  // // Random selection of pivot.
  // int RandomPivotPartition(int a[], int low, int high)
  // {
  //   int pvt, n, temp;
  //   n = rand();
  //   // Randomizing the pivot value in the given subpart of array.
  //   pvt = low + n % (high - low + 1);

  //   // Swapping pivot value from high, so pivot value will be taken as a pivot while partitioning.
  //   swap(&a[high], &a[pvt]);

  //   return Partition(a, low, high);
  // }

  // int QuickSort(int a[], int low, int high)
  // {
  //   int pindex;
  //   if (low < high)
  //   {
  //     // Partitioning array using randomized pivot.
  //     pindex = RandomPivotPartition(a, low, high);
  //     // Recursively implementing QuickSort.
  //     QuickSort(a, low, pindex - 1);
  //     QuickSort(a, pindex + 1, high);
  //   }
  //   return 0;
  // }
}

void bubbleSort()
{
  cout << "Bubble sort";
}

int main()
{

  cout << "1: Bubble sort\n";
  cout << "2: Quick sort\n";
  cout << "3: Selection sort\n";
  cout << "4: Merge sort\n";
  cout << "5: Heap sort\n";
  cout << "0: Exit\n";

  int selector;

  do
  {

    cout << "Input your choice:";
    cin >> selector;

    switch (selector)
    {
    case 1:
      bubbleSort();
      break;
    case 2:
      quickSort();
      break;

    default:
      break;
    }

    return 0;
  } while (selector != 0);
}