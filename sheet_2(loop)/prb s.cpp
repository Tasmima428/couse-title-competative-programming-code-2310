//course name: Competitive Programming
//course code:2310
//course teacher name: Mirza Raquib
//date:19/5/25
//Problem name:S - Sum of Consecutive Odd Numbers
#include <bits/stdc++.h>
using namespace std;
int main()
{
        long long t;
        cin>>t;
        for(long long i=1;i<=t;i++)
        {
            long long a,b,min_v,max_v;
            cin>>a>>b;
            if(a>=b)
            {
                max_v=a;
                min_v=b;
            }
            else
            {
                max_v=b;
                min_v=a;
            }
        long long sum=0;
        for(long long k=min_v+1;k<=max_v-1;k++)
        {
            if(k%2!=0)  sum += k;
        }
        cout<<sum<<endl;
    }
}

