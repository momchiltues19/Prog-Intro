#include <iostream>

using namespace std;

int main()
{
    int num, a[100];
    bool flag = 1;

    cin >> num;

    for(int i=0; i<num; i++)
    {
        cin >> a[i];
    }

    for(int i=1; i<num-1; i++)
    {
        if(!((a[i]>a[i-1])&&(a[i+1]<a[i]))&&!((a[i]<a[i-1])&&(a[i+1]>a[i])))
        {
            flag = 0;
            break;
        }
    }
    cout << boolalpha;
    cout << flag;
    
    return 0;
}
