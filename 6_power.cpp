#include <iostream>
using namespace std;
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * power(x, n - 1);
}

int main()
{
    int n, p;
    cout << "Enter the base: ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> p;
    int result = power(n, p);
    cout << result;
}