#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Size 100000
#define Max -10000000
using namespace std;

double f(double x)
{
    return x*x*x-x+2;
}
void falsePosition(double a, double b)
{
    if (f(a)*f(b) >= 0)
    {
        cout<<"a and b is not right assumption"<<endl;
        return;
    }

    double c=a;
    for(int i=0;i<Size;i++)
    {
        c=b-((f(b)*(b-a))/(f(b)-f(a)));
        if (f(c)==0.0)
            break;
        else if (f(c)*f(a)<0)
            b = c;
        else
            a = c;
    }
    cout<<endl<<"The value of root is : "<<setprecision(4)<<c<<endl;
}
int main()
{
    double a=-5, b=0;
    falsePosition(a, b);
    return 0;
}

