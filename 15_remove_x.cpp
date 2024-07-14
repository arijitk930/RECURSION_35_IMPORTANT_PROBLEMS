#include <iostream>
#include <cstring>
using namespace std;
void remove(char str[])
{
    if (strlen(str) == 0)
    {
        return;
    }
    remove(str + 1);
    if (str[0] == 'x')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }
}
int main()
{
    char str[50];
    cout << "Enter a string: ";
    cin >> str;
    remove(str);
    cout << str << endl;
    return 0;
}