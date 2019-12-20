#include <iostream>

using namespace std;

int power(int, int);

int main()
{
    int num, pow;

    cin >> num;
    cin >> pow;

    cout << power(num, pow) << endl;

    return 0;
}

int power(int n, int a)
{
    if(a==0) return 1;
    return n*power(n,a-1);
}
