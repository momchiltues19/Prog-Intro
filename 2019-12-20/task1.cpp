#include <iostream>

using namespace std;

int factor(int);

int main()
{
    int num;

    cin >> num;

    cout << factor(num) << endl;

    return 0;
}

int factor(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factor(n-1);
    }
}
