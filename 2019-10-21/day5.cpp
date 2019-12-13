#include <iostream>

using namespace std;

void swap_num_better(double *, double *);

int main()
{
    double x, y, z, temp;

    cin >> x >> y >> z;

    if(x>y) swap_num_better(&x, &y);
    if(x>z) swap_num_better(&x, &z);
    if(y>z) swap_num_better(&y, &z);

    cout << x << " " << y << " " << z << endl; 

    double a, b;

    cin >> a >> b;

    if (a==0)
    {
        if(b==0) cout << "All the solutions" << endl;
        else cout << "No solution" << endl;
    }
    else cout << "Solution x = " << b/a << endl;

    return 0;
}




int swap_num()
{
    int a, b, c;
    cin >> a;
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << a << " ";
    cout << b << endl;

    return 0;
}


bool circle()
{
    int x, y;
    bool b1, b2, b3;

    cin >> x;
    cin >> y;

    b1 = (x*x + y*y  <= 4.0)&&(y>=0.0);
    b2 = (x+1.0)*(x+1.0) + y*y <= 1.0;
    b3 = (x-1.0)*(x-1.0) + y*y >= 1.0;

    cout << boolalpha;
    return ((b1||b2) && b3);
}

void swap_num_better(double *a, double *b)
{
    double c;
    c = *a;
    *a = *b;
    *b = c;
}



#include <iostream>

using namespace std;

int main()
{

    int month, year, day_count;
    bool isLeap = ((year%4==0)&&(year!=100))||(year%400);

    cin >> month >> year;

    if(month>12||month<1||year<1)
    {
        cout << "Fail" << endl;
        return 0;
    }

    switch(month)
    {
        case 2: if(isLeap) day_count = 29; else day_count = 28; break;
        default: day_count = 30 + (month%2); break;
    }

    cout << day_count;
    return 0;
}

