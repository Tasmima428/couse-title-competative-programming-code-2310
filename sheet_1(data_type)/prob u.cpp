#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin>>n;
   int u = (int) n;
   if(n-u>0)
   {
    cout<<"float "<<u<<" "<<n-u<<endl;
   }
   else
   {
    cout<<"int "<<u<<endl;
   }
}