#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Max -10000000

using namespace std;

bool z=true;
void significantDigit(string s)
{
    if(s[0]=='0')
        z=false;
    int i, c=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='*')
            break;
        if(z && s[i]!='.')
            c++;
        else if(!z && s[i]!='0' && s[i]!='.')
        {
            z=true;
            c++;
        }
    }
    cout<<endl<<"Number of Significant digit= "<<c<<endl;
}

int main()
{
	string s;
	cin>>s;
	significantDigit(s);
	return 0;
}

