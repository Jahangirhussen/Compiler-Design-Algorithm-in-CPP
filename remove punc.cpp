#include<bits/stdc++.h>
using namespace std;
int main()
{
    char line [150];
    int j;
    cout<<"jahangir \n";
    cout<<"Enter a string: ";
    gets(line);

    for(int i = 0; line[i] != '\0'; i++)
    {
        while (!(line[i] >= 'a' && line[i] <= 'z')
                && ! (line[i] >= 'A' && line[i] <= 'Z')
                &&! (line[i] >='0'&&line[i]<='9')
                &&! (line[i] == ' ')
                &&! (line[i] == '\0')
                &&! (line[i] == '\n'))
        {
            for(j = i; line[j] !='\0'; j++)
            {
                line[j] = line[j + 1];
            }

            line[j] = '\0';
        }
        cout<<"Output string: ";
        puts(line);
        cout<<line<<endl;
        return 0;

    }


}
