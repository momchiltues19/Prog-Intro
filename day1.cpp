#include <iostream>

using namespace std;

int main()
{
    int a;
    float mass, height;

    cout << "mass in kg = ";
    cin >> mass;
    cout << "height in m = ";
    cin >> height;
    cout << "BMI = " << mass/(height*height) << endl;
/*
    cout << "abc = ";
    cin >> a;
    cout << "c = " << a%10 << endl;
    cout << "b = " << (a/10)%10 << endl;
    cout << "a = " << a/100 << endl;
*/


//    cout << "*******" << endl;
//    cout << "*     *" << endl;
//    cout << "*     *" << endl;
//    cout << "*******" << endl;


    return 0;
}
