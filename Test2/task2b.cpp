#include <iostream>

using namespace std;

#define SIZE 100

int gcd(int,int);
int filter(int[SIZE], int);

int main()
{
    int n, result = 1;
    int arr[SIZE];
    do
    {
        cout << "Input arr size: ";
        cin >> n;
    }while(n<1||n>20);


    cout << endl << "Input "<< n << " real numbers:" << endl;
    for(int i=0; i<n; i++)
    {
            cin >> arr[i];
    }

    cout << endl << "GCD is " << filter(arr, n) << endl;

    cout << endl << "Filtered array is {" << arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=0)
            cout << ", " << arr[i];
        else break;
    }

    cout << "}" << endl;
    return 0;
}

int gcd(int a, int b)
{
    int result = 1, n = min(a,b);
    for(int i=1; i<=n; i++)
    {
        if(a%i==0 && b%i==0) result=i;
    }
    return result;
}

int filter(int arr[SIZE], int n)
{

    int result = 0, temp[n], j=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>=2)
        {
            arr[j]=arr[i];
            j++;
        }
    }

    for(int i=j; i<n; i++)
    {
        arr[i] = 0;
    }

    result = arr[0];

    for(int i=1; i<j; i++)
    {
        result = gcd(result, arr[i]);
    }

    return result;
}
