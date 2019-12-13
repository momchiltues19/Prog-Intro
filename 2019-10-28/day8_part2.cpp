#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char a;
    cin >> a;

    if(a >= 'A' && a <= 'Z')
        a += 'a' - 'A';

    if(a >='a' && a<= 'z')
    {
        switch(a)
        {
            case 'a': case 'e': case 'i': case 'o': case'u':
                cout << "vowel" << endl; break;
            default:
                cout << "consonant" << endl;
        }
    }
    else
        cout << "invalid input" << endl;

    return 0;
}
