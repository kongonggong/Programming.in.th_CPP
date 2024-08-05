#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int ,bool> mp;
    size_t co = 0;
    for(size_t i=0;i<10;i++)
    {
        size_t in;
        cin >> in;
        if(mp.count(in%42)) continue;
        else {mp[in%42] = 1;co++;}
    }
    cout << co;
}