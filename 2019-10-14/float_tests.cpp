#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    cout << num1*num2 << endl;

    unsigned long long int new_num1, new_num2, border = 4294967296LL;
    new_num1 = num1;
    new_num2 = num2;
    cout << (new_num1*new_num2)%border << endl;

    cout << (unsigned)(-1) << endl;

    cout << setprecision(22);

    float a = 0.125;
    double b = 0.125;
    long double c = 0.125L;
    cout << a << endl << b << endl << c << endl;

    float x, y , z, xy, yz;
    x = 1.23456f;
    y = -1.23457f;
    z = 0.00002f;
    xy = x + y;
    yz = y + z;
    cout << xy + z << endl;
    cout << x + yz << endl;

    return 0;
}
