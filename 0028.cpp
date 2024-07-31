#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<pair<size_t,size_t>, string>> N(4); // Point, GD, Name
    size_t  T[4][4];
    for(size_t i=0;i<4;i++) cin >> N[i].second;
    for(size_t i=0;i<4;i++) cin >> T[0][i] >> T[1][i] >> T[2][i] >> T[3][i];
    for(size_t i=0;i<4;i++)
    {
        for(size_t j=i+1;j<4;j++)
        {
            if(T[i][j%4] > T[j%4][i])
            {
                N[j%4].first.first  += 3;
                N[j%4].first.second += T[i][j%4] - T[j%4][i];
            }
            else if(T[i][j%4] < T[j%4][i])
            {
                N[i].first.first  += 3;
                N[i].first.second += T[j%4][i] - T[i][j%4];
            }
            else
            {
                N[j%4].first.first  += 1;
                N[i].first.first  += 1;
            }
        }
    }
    sort(N.begin(),N.end(),greater<pair<pair<size_t,size_t>, string>>());
    for(auto x:N) cout << x.second <<" "<< x.first.first << "\n";
}