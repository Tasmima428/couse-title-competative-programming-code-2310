//course name: Competitive Programming
//course code:2310
//course teacher name: Mirza Raquib
//date:23/6/25
//Problem name:B - Let's use Getline
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s,t;
   getline(cin,s);
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='\\')
       {
           break;
       }
       else
        cout<<s[i];
   }

}
