#include <iostream>
#include <string>

using namespace std;

string half(string);
int count_space(string);

int main()
{
    string input;

    getline(cin, input);

    cout << half(input) << endl;
    cout << count_space(input);
    return 0;
}

string half(string str)
{
    int siz=str.length();

    return str.substr(siz/2);
}

int count_space(string str)
{
    int siz=str.length(), space=0;

    for(int i=0; i<siz; i++)
        if(str[i]==' ') space++;

    return space;
}
