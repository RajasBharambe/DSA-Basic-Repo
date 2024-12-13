#include <iostream>
using namespace std;

void insertionSort(int arr[])
{
  int j = 0;
  int key; 

  for (int i = 1; i < 10; i++)
  {
    key = arr[i]; // picking the element
    j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }

    arr[j + 1] = key;
  }
}

int main()
{

  cout << "Enter 10 integers in any order" << endl;

  int myarray[10];

  for (int i = 0; i < 10; i++)
  {
    cin >> myarray[i];
  }

  cout << "Before Sorting: " << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << myarray[i] << "  ";
  }

  insertionSort(myarray); // calling the function

  cout << endl
       << "After Sorting: " << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << myarray[i] << "  ";
  }
 return 0;
}
