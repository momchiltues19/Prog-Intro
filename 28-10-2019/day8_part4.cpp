#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, digit_count=0, max_digit=0;
    do
    {
        cin >> num;
    }while(num<0);

    while(num>0)
    {
        if(num%10>max_digit)
            max_digit = num%10;
        digit_count++;
        num /= 10;
    }

    cout << "integer count is " << digit_count << " and max digit is " << max_digit << endl;
}
