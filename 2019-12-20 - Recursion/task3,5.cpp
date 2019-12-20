#include <iostream>

using namespace std;

int q_power(int, int);

int main()
{
    int num, pow;

    cin >> num;
    cin >> pow;

    cout << q_power(num, pow) << endl;

    return 0;
}

int q_power(int n, int a)
{
    int temp;
    if(a==0) return 1;
    if(a%2==0){temp = q_power(n, a/2); return temp*temp;}
    return n*q_power(n,a-1);
}
