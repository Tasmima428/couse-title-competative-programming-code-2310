#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        long long fact = 1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<fact<<endl;
    }
}