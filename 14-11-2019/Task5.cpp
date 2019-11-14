#include <iostream>

using namespace std;

bool is_special(int);

int main()
{
    int num;

    cout << "Input number: ";
    cin >> num;

    cout << boolalpha;
    cout << is_special(num) << endl;
    return 0;
}

bool is_special(int n)
{
    int a[12], siz = 0;
    bool flag = true;
    for(; n>0; siz++)
    {
        a[siz] = n%10;
        n /= 10;
    }
    for(int i = siz-1; i>=2; i--)
    {
        if(a[i]!=a[i-1]*a[i-2])
            flag = false;
    }
    return flag;
}
