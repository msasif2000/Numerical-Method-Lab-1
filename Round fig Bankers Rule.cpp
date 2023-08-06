#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Max -10000000
using namespace std;
int main()
{
    string num;
    int n, pos, k;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter your desired number of digits after you want to round: ";
    cin>>n;
    int ln=num.size();
    for(int i=0;i<ln;i++)
    {
        if(num[i]=='.')
        {
            pos=n;
            k=i;
            i++;
            n+=i;
            break;
        }
    }
    k+=pos;
    if(num[n]-'0'== 5)
    {
        if((num[k]-'0')%2==1)
        num[k]=num[k]+1;

    }
    else if(num[n]-'0'>5)
    {
        num[k]=num[k]+1;
    }
    for(int i=0;i<=k;i++)
        cout<<num[i];

return 0;
}
