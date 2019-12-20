#include <iostream>

using namespace std;

int main()
{
    int num, binary[100], b_size = 0;

    cin >> num;

    for(; num>0; b_size++)
    {
        binary[b_size] = num%2;
        num /= 2;
    }

    for(int i=b_size; i>0; i--)
    {
        cout << binary[i-1];
    }
    
    return 0;
}
