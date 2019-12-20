#include <iostream>

using namespace std;

int F[51];
int fibo(int);

int main()
{
    int num;

    cin >> num;

    F[0] = 0;
    F[1] = 1;

    for(int i=2; i<=num; i++)
    {
        F[i]=-1;
    }

    fibo(num);

    for(int i=0; i<=num; i++)
    {
        cout << F[i] << endl;
    }

    return 0;
}

int fibo(int n)
{
    if(F[n]==-1) F[n] = fibo(n-1) + fibo(n-2);
    return F[n];
}
