#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    getline(cin, str);

    int num = str.length();

    string tr = str.substr(1, num);

    //does str have repeating letters
    for(int i =0; i < num; i++)
    {
        if(str.find(tr[i])==str.find(str[i]))
        {
            cout << "yesyes" << endl;
            break;
        }
    }
    return 0;
}
