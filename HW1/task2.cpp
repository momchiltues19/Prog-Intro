#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int* find_repeating(int a, int b);

int main()
{
    int dividend, divisor, *dec_size, n, l;

    cout << "Input dividend: ";
    cin >> dividend;

    do
    {
        cout << "Input divisor: ";
        cin >> divisor;
    }while(divisor==0);

    cout << "Result is: " << dividend/divisor << ".";

    int gcd = __gcd(dividend, divisor);

    while(gcd != 1)
    {
        dividend /= gcd;
        divisor /= gcd;
        gcd = __gcd(dividend, divisor);
    }

    while(dividend > divisor)
    {
        dividend -= divisor;
    }

    dec_size = find_repeating(dividend, divisor);

    n = dec_size[0];
    l = dec_size[1];

    dividend=10*(dividend%divisor);
    for(int i=0; i<n+l; i++)
    {
        if(i == n) cout << "(";
        cout << dividend/divisor;
        dividend=10*(dividend%divisor);
    }

    cout << ")" << endl;

    return 0;
}

int* find_repeating(int a, int b)
{
    int k=0, j=0, q, l=1, n;

    while(b%2==0)
    {
        b/=2;
        k++;
    }
    while(b%5==0)
    {
        b/=5;
        j++;
    }
    q = b;
    n = max(k, j);

    while(fmod((pow(10,l)-1),q)!=0)
    {
        if(l>=q)
        {
            l=q-1;
            break;
        }
        l++;
    }
    int result[2] = {n, l};

    return result;
}
