#include <iostream>
using namespace std;
void print(int n)
{
    // base case
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    print(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    print(n);
    return 0;
}