#include <iostream>
using namespace std;

void ShellSort(int arr[], int n)
{


int main()-
{
    int n;
    cout << "Enter size of the array: " << endl;
    cin >> n;
    int arr1[n];
    cout << "Enter " << n << " integers in any order" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Before Sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
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
