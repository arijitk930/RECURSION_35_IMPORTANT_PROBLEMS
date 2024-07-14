#include <iostream>
#include <string>
using namespace std;
string pairstar(string str)
{
    if (str.size() == 1)
    {
        return str;
    }
    if (str[0] == str[1])
    {
        return str[0] + string("*") + pairstar(str.substr(1, str.size()));
    }
    else
    {
        return str[0] + pairstar(str.substr(1, str.size()));
    }
}
int main()
{

    string str;
    cout << "Enter a string: ";
    cin >> str;
    string result = pairstar(str);
    cout << result << endl;
    return 0;
}