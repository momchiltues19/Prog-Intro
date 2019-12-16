#include <iostream>

using namespace std;

int gcd(int,int);

int main()
{
    int a, b;
    cout << "Input: ";
    cin >> a;
    cin >> b;

    cout << endl << "Output: " << gcd(a,b) << endl;

    return 0;
}

int gcd(int a, int b)
{
    int result = 1, n = min(a,b);
    for(int i=1; i<=n; i++)
    {
        if(a%i==0 && b%i==0) result=i;
    }
    return result;
}
