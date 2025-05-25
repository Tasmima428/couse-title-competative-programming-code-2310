
//course name: Competitive Programming
//course code:2310
//course teacher name: Mirza Raquib
//date:19/5/25
//Problem name:R - Sequence of Numbers and Sum
#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        long long a, b, max_v, min_v;
        cin>>a>>b;
        if(a<=0 || b<=0)
            break;
        if(a >= b)
        {
            max_v = a;
            min_v = b;
        }
        else
        {
            max_v = b;
            min_v = a;
        }

        long long sum=0;
        for(long long k=min_v;k<=max_v;k++)
        {
            cout << k << " ";
            sum += k;
        }
        cout<<"sum ="<<sum<<endl;
    }
}
