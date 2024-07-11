#include <iostream>
using namespace std;
int countzero(int n, int &count)
{
    // base case
    if (n == 0)
    {
        return count;
    }
    if (n % 10 == 0)
    {
        count++;
    }
    return countzero(n / 10, count);
}
int main()
{
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    int result = countzero(n, count);
    cout << result;
    return 0;
}