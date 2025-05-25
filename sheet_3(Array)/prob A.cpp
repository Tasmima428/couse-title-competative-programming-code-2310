//course name: Competitive Programming
//course code:2310
//course teacher name: Mirza Raquib
//date:19/5/25
//Problem name:A-Summation
#include <bits/stdc++.h>
using namespace std;
int main()
{
        long long t,sum=0;
        cin>>t;
        for(long long i=1;i<=t;i++)
        {
            long long a;
            cin>>a;
            sum += a;
        }
        cout<<abs(sum)<<endl;
}

