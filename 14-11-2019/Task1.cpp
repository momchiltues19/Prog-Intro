#include <iostream>

using namespace std;

bool dot_check(double o[2],double r,double k[2]);

int main()
{
    double o[2], r, k[2];

    cout << "Input center coords: ";
    cin >> o[0] >> o[1];
    do
    {
        cout << "Input radius: ";
        cin >> r;
    }while(r<0);
    cout << "Input dot coords: ";
    cin >> k[0] >> k[1];

    cout << boolalpha;
    cout << dot_check(o, r, k) << endl;
    return 0;
}

bool dot_check(double o[2],double r,double k[2])
{
    bool flag;
    flag = k[0]>o[0]-r&&k[0]<o[0]+r&&k[1]>o[1]-r&&k[1]<o[1]+r;
    return flag;
}
