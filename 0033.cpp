#include<bits/stdc++.h>
using namespace std;

int main()
{
   size_t n,mx=0;
   std::vector<size_t> v,ans;
   std::map<size_t, size_t> mp;
   cin >> n;
    for(size_t i=0;i<n;i++)
    {
        size_t in;
        cin >> in;
        if(mp[in] == 0) v.emplace_back(in);
        mp[in] += 1;
    }
    for(auto x:v)
    {
        if(mx == mp[x])
        {
            ans.emplace_back(x);
            continue;
        }
        if(mx < mp[x]) {
            // cout << x << " ";
            ans.clear();
            mx = mp[x];
            ans.emplace_back(x);
        }
    }
    sort(ans.begin(),ans.end());
    for(auto b:ans) cout << b << " ";
}