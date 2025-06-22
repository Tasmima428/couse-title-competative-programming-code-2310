//course name: Competitive Programming
//course code:2310
//course teacher name: Mirza Raquib
//date:16/6/25
//Problem name:(O) Fibonacci
#include<bits/stdc++.h>
using namespace std;
int main()
{

long long index;
long long a[51];
a[1]=0;
a[2]=1;
for(int i=3;i<=50;i++)
{
    a[i]=a[i-1]+a[i-2];
}
cin>>index;
cout<<a[index]<<endl;
}