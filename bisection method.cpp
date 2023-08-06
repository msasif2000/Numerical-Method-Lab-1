#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Max -10000000
using namespace std;
double f(double x)
{
    return x*x*x-9*x+1;
}
void BiSection(double a, double b)
{
    if (f(a)*f(b) >= 0)
    {
        cout<<"a and b is not right assumption"<<endl;
        return;
    }

    double c=a;
    while((b-a)>=0.01)
    {
        c=(a+b)/2;
        if (f(c)==0.0)
            break;
        else if (f(c)*f(a)<0)
            b = c;
        else
            a = c;
    }
    cout<<endl<<"The value of root is : "<<c<<endl;
}
int main()
{
    double a=-5, b=0;
    BiSection(a, b);
    return 0;
}

