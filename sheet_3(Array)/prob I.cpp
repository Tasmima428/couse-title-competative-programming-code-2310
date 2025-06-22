//course name: Competitive Programming
//course code:2310
//course teacher name: Mirza Raquib
//date:16/6/25
//Problem name:I. Smallest Pair

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
cin>>t;
while(t--)
    {
     long long n;
     cin>>n;
     long long a[n+1];

for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  long long sum=10000000;
  for(long long i=1;i<=n-1;i++)
  {
      for(long long j=i+1;j<=n;j++)
      {
          long long ans=a[i]+a[j]+j-i;
          if(ans<sum)
            sum=ans;
     }
  }
  cout<<sum<<endl;
    }
}
