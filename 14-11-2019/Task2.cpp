#include <iostream>

using namespace std;

bool is_sort(int*);

int main()
{
    int num[10];
    for(int i=0; i<10; i++)
    {
        cout << "Input number for array: ";
        cin >> num[i];
    }

    cout << boolalpha;
    cout << is_sort(num) << endl;
    return 0;
}

bool is_sort(int num[10])
{
    bool flag = true;
    for(int i=1; i<9; i++)
    {
        if((num[i]<num[i-1]&&num[i]<num[i+1])||(num[i]>num[i-1]&&num[i]>num[i+1]))
            flag = false;
    }
    return flag;
}
