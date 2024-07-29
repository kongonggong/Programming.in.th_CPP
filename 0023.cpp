#include<bits/stdc++.h>
using namespace std;
int main()
{
    size_t d,m,mo[] = {0,31,59,90,120,151,181,212,243,273,304,334,365};// 31 28 31 30 31 30 31 31 30 31 30 31
    string da[] = {"Thursday", "Friday", "Saturday","Sunday","Monday", "Tuesday", "Wednesday"};
    cin >> d >> m;
    cout <<  da[((d-1)+mo[m-1])%7];
}
