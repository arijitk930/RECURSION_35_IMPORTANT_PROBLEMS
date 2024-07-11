#include <iostream>
using namespace std;
int lastIndex(int a[], int size, int x)
{
    if (size == 0)
        return -1;
    if (a[size-1]==x)
    {
        return size-1;
    }
    int ans = lastIndex(a + 1, size - 1, x);
    if (ans == -1)
        return -1;
    else
        return ans + 1;
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
    int result = lastIndex(arr, n, x);
    cout << result;
}