#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "JAHANGIR HUSSEN" <<endl<<"CSE2201025011"<<endl;
    cout << "Enter a string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        while (!(s[i] >= 'a' && s[i] <= 'z')
                && !(s[i] >= 'A' && s[i] <= 'Z')
                && !(s[i] >= '0' && s[i] <= '9')
                && !(s[i] == ' ') && s[i] != '\0')
        {
            for (int j = i; j < s.length(); j++)
            {
                s[j] = s[j + 1];
            }

        }
    }

    cout << "After removing punctuations  string is : " << s << endl;

    return 0;
}
