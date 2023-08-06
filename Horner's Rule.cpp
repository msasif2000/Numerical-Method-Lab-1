#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Max -10000000

using namespace std;


int Horner(int polynomial[],int n,int x)
{
	int result=polynomial[0], i;
	for (i=1;i<n;i++)
		result = result*x + polynomial[i];

	return result;
}

int main()
{
	int polynomial[] = {1, -2, 5, 10};
	int x=5;
	int n=sizeof(polynomial)/sizeof(polynomial[0]);
	cout<<endl<<"Evaluation of polynomial is "<<Horner(polynomial,n,x)<<endl;
	return 0;
}

