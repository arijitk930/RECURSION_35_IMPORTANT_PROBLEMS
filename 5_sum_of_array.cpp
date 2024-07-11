#include <iostream>
using namespace std;
int sum(int a[], int size)
{
    if (size == 0)
        return 0;
    int res = a[0] + sum(a + 1, size - 1);
    return res;
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
    int result = sum(arr, n);
    cout << result;
}