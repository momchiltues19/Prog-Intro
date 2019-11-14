#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a = 0, b = 0, c = 0, des;

    cin >> a >> b >> c;

    des = b*b - 4*a*c;

    if(a==0)
    {
        if(b!=0)
            cout << "result is " << c/b << endl;
        else if(c==0)
            cout << "all x is solution" << endl;
        else
            cout << "no solution" << endl;
    }
    else
    {
        if(des < 0)
            cout << "no real solution" << endl;
        else
        {
            des = sqrt(des);
            cout << "results are " << (-b + des)/(2*a) <<
                "and" << (-b - des)/(2*a) << endl;
        }
    }
    return 0;
}
