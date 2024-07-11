#include <iostream>
using namespace std;
void allIndex(int a[], int size, int index, int indexes[], int x, int &count)
{
    // Base case
    if (index == size)
    {
        for (int i = 0; i < count; i++)
        {
            cout << indexes[i] << " ";
        }
    }
    // When present element is x
    if (a[index] == x)
    {
        indexes[count] = index;
        count++;
    }
    // recursive call
    allIndex(a, size, index + 1, indexes, x, count);
}

int main()
{
    int n, count = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    int indexes[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the value: ";
    cin >> x;
    allIndex(arr, n, 0, indexes, x, count);
    return 0;
}