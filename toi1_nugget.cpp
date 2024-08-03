#include<bits/stdc++.h>
using namespace std;
bool nug[110];

void nugget(size_t n,size_t st)
{
    if(st<=n)
    {
        nug[st] =1;
        nugget(n,st+6);
        nugget(n,st+9);
        nugget(n,st+20);
    }
}
int main()
{
    size_t n;
    cin >> n;
    nugget(n,0);
    if(n<6) {cout << "no";return 0;}
    for(size_t i=1;i<=n;i++) if(nug[i]) cout << i<<"\n";
}