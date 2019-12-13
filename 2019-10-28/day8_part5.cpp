#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, cop, rev=0;
    do
    {
        cin >> num;
    }while(num<0);

    cop = num;

    while(cop>0)
    {
        rev *= 10;
        rev += cop%10;
        cop /= 10;
    }
    cout << rev << endl;

    if(rev > num)
        cout << "rev is max" << endl;
    else if (rev < num)
        cout << "num is max" << endl;
    else
        cout << "palindrome" << endl;
    return 0;
}
