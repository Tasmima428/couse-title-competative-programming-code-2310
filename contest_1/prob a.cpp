//course name: Competitive Programming
//course code:2310
//course teacher name: Mirza Raquib
//date:24/3/25
//Problem name:A-Winter Sale
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long double x,p;
    cin>>x>>p;
    long double t=((p*100)/(100-x));
    cout<<fixed<<setprecision(2)<<t<<endl;
}