#include<bits/stdc++.h>
using namespace std;

int main()
{
    size_t n;
    cin >>n;
    int mn = INT_MAX,mx = INT_MIN;
    for(int i=0,in;i<n;i++)
    {
        cin >> in;
        if(mn>in) mn =in;
        if(in>mx) mx = in;
    }
    cout << mn << " " << mx;
}