#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool valid = true;
    if (s.at(0) >= '0' && s.at(0) <= '9')
    {
        cout << "Invalid";
        return 0;
    }
    for (int i = 1; i < s.size(); i++)
    {
        char c = s.at(i);
        valid = ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || (c == '_'));
        if (!valid)
        {
            cout << "Invalid";
            return 0;
        }
    }
    string arr[] = {"int", "float", "static", "public", "string", "double", "char", "void", "return"};
    for (int i = 0; i < 9; i++)
    {
        if (s == arr[i])
        {
            cout << "Invalid";
            return 0;
        }
    }
    cout << "Valid";
}