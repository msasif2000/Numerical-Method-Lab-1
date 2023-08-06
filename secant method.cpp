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
    return x*x*x-5*x*x-29;
}
void Secant(double x1, double x2)
{
    double xn, x0;

    x0=x2-((f(x2)*(x2-x1))/(f(x2)-f(x1)));
    x1=x2;
    x2=x0;
    xn=x2-((f(x2)*(x2-x1))/(f(x2)-f(x1)));
    while(fabs(xn-x0)>=0.0005){
        x0=x2-((f(x2)*(x2-x1))/(f(x2)-f(x1)));
        x1=x2;
        x2=x0;
        xn=x2-((f(x2)*(x2-x1))/(f(x2)-f(x1)));
    }
    cout<<endl<<"The value of root is : "<<setprecision(4)<<x0<<endl;
}
int main()
{
    double a=-5, b=5;
    Secant(a, b);
    return 0;
}


