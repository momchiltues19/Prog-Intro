#include <iostream>

using namespace std;

int fibo(int);

int main()
{
    int num;

    cin >> num;

    cout << fibo(num) << endl;

    return 0;
}

int fibo(int n)
{
    if(n<=1) return n;
    return fibo(n-1) + fibo(n-2);
}
