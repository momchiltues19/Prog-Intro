#include <iostream>

using namespace std;

int main()
{
    int num, result = 1;

    do
    {
        cin >> num;
    }while(num<0);

    if(num==0||num==1)result = 1;
    else
    {
        for(int i = 1, fib0 = 1, fib1 = 1; i < num; i++)
        {
            result = fib0 + fib1;
            fib0 = fib1;
            fib1 = result;
        }
    }

    cout << result << endl;
    
    return 0;
}
