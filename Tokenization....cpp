#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string token = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            cout << token << endl;
            token = "";
        }
        else
        {
            token += s[i];
        }
    }

    if (!token.empty())
    {
        cout << token << endl;
    }

    return 0;
}
