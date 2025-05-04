#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long a,n,mn;
    cin>>n;
 
        for(int i=1;i<=n;i++)
        {
            cin>>a; 
            if(i==1)mn=a;
            if(a>mn)mn=a;
            
        }
            cout<<mn<<endl;
 
        }