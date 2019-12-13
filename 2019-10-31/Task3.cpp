#include <iostream>

using namespace std;

int main()
{
    int num, row;

    do
    {
        cin >> num;
    } while(num<=0);

    row = 2*num-1;

    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < row; j++)
        {
            if((row-j >= num-i) && (row-j <= num+i))
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }

    for(int j = 0; j < row; j++)
    {
        if((row-j >= num) && (row-j <= num))
            cout << '*';
        else
            cout << ' ';
    }
    
    return 0;
}
