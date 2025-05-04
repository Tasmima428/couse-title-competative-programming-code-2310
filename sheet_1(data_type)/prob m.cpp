#include<bits/stdc++.h >
using namespace std;
int main()

{

char r;
cin >> r;
if(r >= 97 && r <= 122)
{

    cout << "ALPHA" <<endl;
    cout << "IS SMALL"  <<endl;
}
else if(r >= 65 && r <= 90)
{
    cout << "ALPHA" <<endl;
    cout << "IS CAPITAL" <<endl;
}
else{
    cout << "IS DIGIT" <<endl;
}
}
