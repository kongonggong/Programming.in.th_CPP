#include<bits/stdc++.h>
using namespace std;

int main()
{
    int score =0;
    vector<pair<int, int>> sc = {
        {80, 100}, {75,79}, {70, 74}, {65, 69}, {60, 64}, {55, 59}, {50, 54}, {0, 49}
    };
    string grade [8] = {"A","B+","B","C+","C","D+","D","F"};
    for(size_t i=0;i<3;i++ )
    {
        size_t tmp;
        cin >> tmp;
        score += tmp;
    }
    for(size_t i=0;i<sc.size();i++)
    {
        // cout << sc[i].first << " " << sc[i].second <<"\n";
        if(sc[i].first<=score && score<=sc[i].second)
        {
            cout << grade[i];
            return 0;
        }
    }
    
}