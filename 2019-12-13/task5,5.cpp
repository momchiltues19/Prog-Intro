#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool is_pali(string);

int main()
{
    string input, check;

    getline(cin, input);

    cout << boolalpha;
    cout << is_pali(input);

    return 0;
}

bool is_pali(string s)
{
    int n = s.length(), new_n = 0;

    for(int i=0; i<n; i++)
    {
        if(isalnum(s[i]))
        {
            if(isupper(s[i]))
            {
                s[new_n]=tolower(s[i]);
            }
            else
                s[new_n]=s[i];
            new_n++;
        }
    }
    n = new_n;
    for(int i=0, j=n-1; i<n; i++, j--)
    {
        if(s[i]!=s[j]) return false;
    }
    return true;
}

