#include <iostream>

using namespace std;

// merge function
void merge(int arr[], int l, int m, int r)


    int temp[5];

    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
            temp[k] = arr[j];
        j++;
        k++;
    }
    while (i <= m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= m)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (int s = l; s <= r; s++)
    {
        arr[s] = temp[s];
    }
}
// mergeSort function
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{

    cout << "Enter 5 elements in the array" << endl;
    int myarr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
    }
    cout << "Before Merge Sort: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }
    mergeSort(myarr, 0, 4);

    cout << endl
         << "After Merge Sort: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }
    return 0;
}
