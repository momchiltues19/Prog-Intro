#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int count_words(string);

int main()
{
    string input, check;

    getline(cin, input);

    //cout << boolalpha;
    cout << count_words(input);

    return 0;
}

int count_words(string s)
{
    int result = 0, n=s.length();

    for(int i=0; i<n; i++)
    {
        if(isalnum(s[i])&&!isalnum(s[i-1]))
            result++;
    }

    return result;
}
