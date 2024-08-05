#include<bits/stdc++.h>
using namespace std;
int main()
{
    size_t i=1,mx =0,idx;
    while(i<=5)
    {
        size_t in[4],sum=0;
        cin >> in[0] >> in[1] >> in[2] >> in[3];
        sum = in[0] + in[1] + in[2] + in[3];
        if(sum>mx) {mx=sum; idx = i;}
        i++;
    }
    cout << idx << " " << mx;
}