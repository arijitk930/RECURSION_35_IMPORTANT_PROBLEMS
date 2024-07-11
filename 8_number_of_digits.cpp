#include <iostream>
using namespace std;
int numofdigits(int n)
{
    // base case
    if (n / 10 == 0)
    {
        return 1;
    }
    return 1 + numofdigits(n / 10);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = numofdigits(n);
    cout << result;
    return 0;
}