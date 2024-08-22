#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    if (s.length() >= 2 && s[0] == '/' && s[1] == '*')
    {
        cout << "Multiple line comment." << endl;
    }
    else if (s.length() >= 2 && s[0] == '/' && s[1] == '/')
    {
        cout << "Single line comment." << endl;
    }
    else
    {
        cout << "Not a comment." << endl;
    }

    return 0;
}
