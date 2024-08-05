#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<size_t> score = {0,0,0};
    vector<char> Adrian = { 'A', 'B', 'C'}  ,Bruno = {'B', 'A', 'B', 'C'} ,Goran = {'C', 'C', 'A', 'A', 'B', 'B'};
    size_t ms;
    string ans;
    cin >> ms >> ans;
    for(size_t i = 0; i < ans.length(); i++)
    {
        if(ans[i] == Adrian[i % 3]) score[0]++;
        if(ans[i] == Bruno[i % 4]) score[1]++;
        if(ans[i] == Goran[i % 6]) score[2]++;
    }
    size_t max_score = *max_element(score.begin(), score.end());
    cout << max_score << "\n";
    if(score[0] == max_score) cout << "Adrian\n";
    if(score[1] == max_score) cout << "Bruno\n";
    if(score[2] == max_score) cout << "Goran\n";
}