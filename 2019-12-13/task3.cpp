#include <iostream>
#include <string>

using namespace std;

bool is_start(string, string);

int main()
{
    string input, check;

    getline(cin, input);
    getline(cin, check);

    cout << boolalpha;
    cout << is_start(input, check);

    return 0;
}

bool is_start(string str, string pre)
{
    return str.find(pre)==0;
}

