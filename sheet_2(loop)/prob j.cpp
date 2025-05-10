//course name: Competitive Programming
//course code:2310
//course teacher name: Mirza Raquib
//date:5/5/25
// Problem name: Primes from 1 to n
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k;
    cin>>n;
    bool a[n+1];
    for(i=0; i<=n;i++)
    {
        a[i]=true;
    }
    //multiplication or product
    for(j=2; j<=sqrt(n); j++)
    {
        //actual check
        if(a[j] == true)
        {
            for(k=j+j; k<=n; k++)
            {
                if(k % j == 0)
                {
                    a[k]=0;
                }
            }
        }
    }
    for(i=2; i<=n; i++)
    {
        if(a[i]) cout << i << " ";
    }
}