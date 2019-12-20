#include <iostream>

using namespace std;

void turn_hex(int);

int main()
{
    int num;

    cout << "Input number: ";
    cin >> num;

    turn_hex(num);
    return 0;
}

void turn_hex(int num)
{
    char hex_num[8];
    int temp  = 0, siz = 0;
    for(; num>0; siz++)
    {
        temp = num % 16;
        if(temp < 10)
        {
            hex_num[siz] = temp + 48;
        }
        else
        {
            hex_num[siz] = temp + 55;
        }
        num = num/16;
    }
    for(int i = siz-1; i>=0; i--)
    {
        cout << hex_num[i];
    }
    cout << endl;
}
