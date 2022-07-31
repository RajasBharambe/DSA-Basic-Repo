#include <iostream>
using namespace std;

void ShellSort(int arr[], int n)
{
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int j = gap; j < n; j += 1)
        {
            int temp = arr[j];
            int i = 0;

            for (i = j; (i >= gap) && (arr[i - gap] > temp); i -= gap)
            {
                arr[i] = arr[i - gap];
            }
            arr[i] = temp;
        }
    }
}



    cout << endl
         << "Shell Sort";

    ShellSort(arr1, n); // calling the function

    cout << endl
         << "After Sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}
