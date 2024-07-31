#include<bits/stdc++.h>
using namespace std;
int main()
{
    size_t n;
    cin >> n;
    size_t tmp;
    for(size_t i=0;i<n;i++)
    {
        cin >> tmp;
        long double ans = pow(2.L,tmp);
        string sans = to_string(ans);
        string rounded = sans.substr(0, sans.find("."));
        cout  << rounded <<"\n";
    }
}