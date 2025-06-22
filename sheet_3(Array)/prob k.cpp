//course name: Competitive Programming
//course code:2310
//course teacher name: Mirza Raquib
//date:16/6/25
//Problem name:k. Sum of Digits

#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
     cin>>n;
     //long long a[n];
     string s;
     cin>>s;
    //for(int i=0;i<n;i++)
   //cin>>a[i];
    long long sum=0;
    for(int i=0;i<n;i++)
        sum= sum +(int)(s[i]-'0');
        cout<<sum<<endl;

}
