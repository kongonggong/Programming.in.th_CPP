#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<size_t> d(3);
    size_t c=0;
    cin >> d[0] >> d[1] >> d[2];
    while(1)
    {
        if(d[0]==1 && d[1] ==1 && d[2] ==1) break;
        *max_element(d.begin(), d.end()) /= 2;
        c++;
    }
    cout << c;
}