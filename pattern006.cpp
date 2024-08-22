#include <iostream>
#include <string>
using namespace std;
/// full text theke sort text kuje
int main()
{
    cout << "JAHANGIR HUSSEN" << endl << "CSE2201025011" << endl << endl;

    string text, pat;
    cout << "Enter a text" << endl;
    getline(cin, text);
    cout << "Enter Pattern" << endl;
    getline(cin, pat);


    for (int i = 0; i <= text.length() - pat.length(); i++)
    {
        int j;
        for (j = 0; j < pat.length(); j++)
        {
            if (text[i + j] != pat[j])
                break;
        }
        if (j == pat.length())
        {
            cout << "Pattern found at index: " << i << endl;
        }
    }

    return 0;
}
