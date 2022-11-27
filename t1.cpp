#include <iostream>
#include <conio.h>
using namespace std;
int boomrange(int arr[], int size);
main()
{
  int result = 0;
  int size = 0;
  cout << "Enter size of array ";
  cin >> size;
  int arr[size];
  cout << "Enter array ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout<<boomrange(arr, size);
}
int boomrange(int arr[], int size)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == arr[i + 2])
    {
      if (arr[i] != arr[i + 1])
      {
        count++;
      }
    }
  }
  return count;
}