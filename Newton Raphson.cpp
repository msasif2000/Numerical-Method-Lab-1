#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Size 100000
#define Max -10000000
using namespace std;
double f1(double x)
{
    return 3*x*x-6;
}
double f(double x)
{
    return x*x*x-6*x+4;
}
void NewtonRaphson(double x0)
{
    double x1;
    x1=x0-(f(x0)/f1(x0));
    while(abs(x0-x1)>=0.000001){
       x1=x0;
       x0=x1-(f(x1)/f1(x1));
    }
    cout<<endl<<"The value of root is : "<<setprecision(4)<<x0<<endl;
}
int main()
{
    double a=-5;
    NewtonRaphson(a);
    return 0;
}
