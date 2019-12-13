#include <iostream>
#include <string>

using namespace std;

string reverse(string);
bool is_pali(string);

int main()
{
    string input, check;

    getline(cin, input);

    cout << reverse(input) << endl;
    cout << boolalpha;
    cout << is_pali(input);

    return 0;
}

string reverse(string s)
{
    string result="";
    int n = s.length();
    for(int i=n-1; i>=0; i--)
    {
        result+=s[i];
    }

    return result;
}

bool is_pali(string s)
{
    return s == reverse(s);
}

