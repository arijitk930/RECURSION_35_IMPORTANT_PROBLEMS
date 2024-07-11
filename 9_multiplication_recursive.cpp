#include <iostream>
using namespace std;
int multiplication(int m, int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    // recursive call
    int result = m + multiplication(m, n - 1);
    return result;
}
int main()
{
    int m, n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;
    int result = multiplication(m, n);
    cout << result;
    return 0;
}