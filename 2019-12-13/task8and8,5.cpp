#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int count_a_words(string);

int main()
{
    string input, check;

    getline(cin, input);

    //cout << boolalpha;
    cout << count_a_words(input);

    return 0;
}

int count_a_words(string s)
{
    int result = 0, n=s.length();

    for(int i=0; i<n; i++)
    {
        if(isalnum(s[i])&&!isalnum(s[i-1]))
        {
            while(isalnum(s[i]))
            {
                if(s[i]=='a'||s[i]=='A'){result++;break;}
                i++;
            }
        }
    }

    return result;
}
