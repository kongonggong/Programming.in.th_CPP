#include<bits/stdc++.h>
using namespace std;
bool chk[1010];
size_t eratorteneous (size_t a, size_t b,size_t st,size_t i)
{
    if(chk[st]) return eratorteneous(a,b,st+1,i);
    size_t tmpS = st, mul = 1,tmpI = i;
    while(tmpS <= a)
    {
        tmpS = st * mul;
        if(tmpS > a) break;
        if(chk[tmpS])
        {
            mul++;
            continue;
        }
        chk[tmpS] = 1;
        mul++;
        tmpI++;
        if(tmpI == b) return tmpS;
    }
    return eratorteneous(a,b,st+1,tmpI);
}

int main()
{
    size_t a,b;
    cin >> a >> b; // a = limit b= sequence
    size_t result = eratorteneous(a, b, 2, 0);
    cout << result;
}