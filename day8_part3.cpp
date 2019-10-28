#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 0, sum = 0, amm = -1;
    do
    {
        cin >> x;
        if(x%2==0)
        {
            sum += x;
            amm++;
        }
    } while(x!=0);

    if(amm!=0)
    {
        cout << "average is " << (double)sum/amm << endl;
    }
    else cout << "0_0" << endl;
    return 0;
}
