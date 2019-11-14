#include <iostream>

using namespace std;

bool is_pali(int);

int main()
{
    int num;

    cout << "Input number: ";
    cin >> num;

    cout << boolalpha;
    cout << is_pali(num) << endl;
    return 0;
}

bool is_pali(int n)
{
    int a[12], siz = 0;
    bool flag = true;
    for(; n>0; siz++)
    {
        a[siz] = n%10;
        n /= 10;
    }
    for(int i=siz-1, j=0; i>=0, j<siz; i--, j++)
    {
        if(a[i]!=a[j])
            flag = false;
    }
    return flag;
}
