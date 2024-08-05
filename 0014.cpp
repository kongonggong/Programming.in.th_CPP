#include<bits/stdc++.h>
using namespace std;

size_t recurr (size_t a, size_t b)
{
    size_t c;
    c = a-(b*(a/b));
    // cout <<a << " " <<b << " "<< c << "\n";
    if(c==0) {return b;}
    else {return recurr(b,c);}
}

int main()
{
    size_t a,b;
    cin >> a >> b;
    if(b>a) swap(a,b);
    cout << recurr(a,b);
    // recurr(a,b);
}