#include <iostream>
#include <string>
using namespace std;
string removeduplicates(string s)
{
    if (s.size() == 0)
    {
        return s;
    }
    if (s[0] == s[1])
    {
        return s[0] + removeduplicates(s.substr(2, s.size()));
    }
    else
    {
        return s[0] + removeduplicates(s.substr(1, s.size()));
    }
}
int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    string result = removeduplicates(s);
    cout << result;
    return 0;
}