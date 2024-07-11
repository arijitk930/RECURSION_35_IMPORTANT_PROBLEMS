#include <iostream>
using namespace std;
bool checkNumber(int a[], int size, int x)
{
    // base case
    if (size == 0)
        return false;
    if (a[0] == x)
        return true;
    else
        return checkNumber(a + 1, size - 1, x);
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the value: ";
    cin >> x;
    bool result = checkNumber(arr, n, x);
    if (result == 1)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }
    return 0;
}