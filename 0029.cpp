#include<bits/stdc++.h>
using namespace std;
/*
* Hint it can jump in 2D (x,y) axis; so we can jump in the triangle
*/
int main()
{
    size_t x,y;
    cin >> x >> y;
    if(x > y)  cout << 2;
    else if(y%x ==0) cout << y/x;
    else cout << y/x +1;
}