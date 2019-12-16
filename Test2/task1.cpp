#include <iostream>

using namespace std;

#define SIZE 20

int main()
{
    int n, temp = 0;
    double arr[SIZE][SIZE];
    do
    {
        cout << "Input matrix size: ";
        cin >> n;
    }while(n<1||n>20);


    cout << endl << "Input "<< n*n << " real numbers:" << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl <<"Ouput:" << endl;
    for(int j=n-1; j>0; j--)
    {
        for(temp = n-1; temp>=n-j; temp--)
            cout << arr[temp][j] << " ";
        for(int i = j; i >=0; i--)
            cout << arr[temp][i] << " ";
    }
    cout << arr[n-1][0] << endl;

    return 0;
}
