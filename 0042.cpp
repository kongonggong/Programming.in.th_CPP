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
        cout << fixed << setprecision(0) <<pow(2.L,tmp) << "\n"; // 2.L make the answer to double
    }
}