
//course name: Competitive Programming
//course code:2310
//course teacher name: Mirza Raquib
//date:24/3/25
//Problem name:C-Next Alphabet
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    char c;
    cin>>c;
    if(c=='z') 
        cout<<'a'<<endl;
    else
        cout<<char(c+1)<<endl;
}