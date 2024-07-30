#include<bits/stdc++.h>
using namespace std;

int main()
{
    size_t n;
    vector<pair<int,int>> v;
    cin >> n;
    for(size_t i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        v.emplace_back(x,y);
    }
    float mx = 0;
    for(size_t i=0;i<n;i++)
        for(size_t j =i+1;j<n;j++)
            for(size_t k=j+1;k<n;k++)
            {
                float ans = (abs( ( (v[i].first * v[j].second ) + (v[j].first * v[k].second) + (v[k].first * v[i].second) ) - ( (v[i].second * v[j].first) + (v[j].second * v[k].first) + (v[k].second * v[i].first) ))) /2.000;
                mx = max(mx,ans);
            }
    printf("%.3f",mx);
}