#include<bits/stdc++.h>
using namespace std;
int main()
{
    float N,M,L,K,C,sum =0.0,tmp;
    cin >> N >> M >> L >> K >> C;
    for(size_t i=0;i<N*M;i++) 
    {
        cin >> tmp;
        sum += tmp;
    }
    printf("%.0f",ceil( ((sum+(L*K*C)) / C) ));
}