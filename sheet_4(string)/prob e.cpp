//course name: Competitive Programming
//course code:2310
//course teacher name: Mirza Raquib
//date:23/6/25
//Problem name:E - Count
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
  cin>>s;
  int sum=0;
  for(int i=0;i<s.size();i++)
  {
      sum += s[i]-'0';
  }
  cout<<sum<<endl;
}