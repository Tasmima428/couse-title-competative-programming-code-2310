//course name: Competitive Programming
//course code:2310
//course teacher name: Mirza Raquib
//date:23/6/25
//Problem name:D - Strings
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s,t;
  cin>>s>>t;
 cout<<s.size()<<" "<<t.size()<<endl<<s<<t<<endl;
 char c=s[0];
 s[0]=t[0];
 t[0]=c;
 cout<<s<<" "<<t<<endl;
}