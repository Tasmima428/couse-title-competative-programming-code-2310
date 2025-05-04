#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    char x;
    cin>>n1>>x>>n2;
    if(x=='+')  
    {
        cout<<n1+n2;
    }
    else if(x=='-')
    {
        cout<<n1-n2;
    }
    else if(x=='*')
    {
        cout<<n1*n2;
    }
    
    else if(x=='/')
    {
        cout<<n1/n2;
    }

}