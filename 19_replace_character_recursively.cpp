#include <iostream>
#include <string>
using namespace std;
void removechar(string &s, char c1, char c2, int index)
{
    if (index == s.size())
    {
        return;
    }
    if (s[index] == c1)
    {
        s[index] = c2;
    }
    removechar(s, c1, c2, index + 1);
}
int main()
{
    string s;
    char c1, c2;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Enter c1: ";
    cin >> c1;
    cout << "Enter c2: ";
    cin >> c2;
    removechar(s, c1, c2, 0);
    cout << s;
    return 0;
}