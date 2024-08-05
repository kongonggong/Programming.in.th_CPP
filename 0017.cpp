#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    size_t w,d;
    for(size_t i=0;i<4;i++) // log(n)
    {
        size_t tmp; 
        cin >> tmp;
        pq.push(tmp);
    }
    
    for(size_t i=0;i<4;i++) //(n)
    {
        if(i==1) w =pq.top(); 
        if(i==3) d =pq.top(); 
        pq.pop();
    }
    cout << w*d;
    // time comp est O(nlogn)
}