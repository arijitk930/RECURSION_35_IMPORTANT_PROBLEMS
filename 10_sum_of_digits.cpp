#include <iostream>
using namespace std;
int sumofdigits(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    return n % 10 + sumofdigits(n / 10);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = sumofdigits(n);
    cout << result;
    return 0;
}