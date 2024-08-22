#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char id[100];
    int count = 0, flag = 0, i;
    cout<<"NAME: JAHANGIR HUSSEN"<<endl;
    cout<<"ID  : CSE2201025011"<<endl;
    cout<<"Gmail: jahangirhussen06@gmail.com"<<endl;

    cout << "Enter an identifier: ";
    gets(id);

    if ((id[0] >= 'a' && id[0] <= 'z')
            || (id[0] >= 'A' && id[0] <= 'Z')
            || (id[0] == '_'))
    {

        for (i = 1; i < strlen(id); i++)
        {

            if (!((id[i] >= 'a' && id[i] <= 'z')
                    || (id[i] >= 'A' && id[i] <= 'Z')
                    || (id[i] == '_')
                    || (id[i] >= '0' && id[i] <= '9')))
            {
                flag = 1;
                break;
            }
            count++;
        }

        if (flag == 0 && count == strlen(id) - 1)
        {
            cout << "This is a valid identifier" << endl;
        }
        else
        {
            cout << "This is an invalid identifier" << endl;
        }
    }
    else
    {
        cout << "This is an invalid identifier" << endl;
    }



    return 0;
}

/// laTTER NUMBER ,UNDARSCORE TAKA BANE VALID IDENTIFIER

/**
sort kore ascii value cheek kore identifier ber kora jay
Digits (0-9): ASCII 48 থেকে 57
Lowercase letters (a-z): ASCII 97 থেকে 122
Uppercase letters (A-Z): ASCII 65 থেকে 90
Underscore (_): ASCII 95
*/
