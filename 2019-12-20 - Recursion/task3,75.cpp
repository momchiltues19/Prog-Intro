#include <iostream>

using namespace std;

int m_power(int, int, int);

int main()
{
    int num, pow, mod;

    cin >> num;
    cin >> pow;
    cin >> mod;

    cout << m_power(num, pow, mod) << endl;

    return 0;
}

int m_power(int n, int a, int m)
{
    int temp;
    if(a==0) return 1;
    if(a%2==0){temp = m_power(n, a/2, m); return (temp*temp)%m;}
    return (n%m)*(m_power(n,a-1,m)%m);
}
