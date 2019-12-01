#include <iostream>

using namespace std;

int main()
{
    int dividend, divisor, dec_size;

    cout << "Input dividend: ";
    cin >> dividend;

    do
    {
        cout << "Input divisor: ";
        cin >> divisor;
    }while(divisor==0);

    cout << "Input size of decimal part: ";
    cin >> dec_size;

    int dec_part[dec_size];

    cout << "Result is: " << dividend/divisor << ".";

    dividend=10*(dividend%divisor);
    for(int i=0; i<dec_size; i++)
    {
        dec_part[i] = dividend/divisor;
        dividend=10*(dividend%divisor);
    }

    for(int i=0; i<dec_size; i++)
    {
        cout << dec_part[i];
    }
    cout << endl;

    return 0;
}
