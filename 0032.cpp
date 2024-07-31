#include<bits/stdc++.h>
using namespace std;

int main()
{
    size_t n,zero =0;
    std::vector<size_t> v;
    cin >> n;
    for(size_t i=0;i<n;i++)
    {
        size_t tmp;
        cin >> tmp;
        if(tmp != 0)v.emplace_back(tmp);
        else if(tmp == 0) zero++;
    }
    sort(v.begin(),v.end());
    for(auto x :v)
    {
        if(zero>0) {
            cout << x;
            for(size_t i=0;i<zero;i++) cout <<0;
            zero=0;
        }
        else cout << x;
    }
}