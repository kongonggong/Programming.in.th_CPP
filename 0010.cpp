#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool pos[3] = {1,0,0};
    string in;
    cin >> in;
    for(size_t i=0;i<in.length();i++)
    {
        if(in[i] == 'A') swap(pos[0],pos[1]);
        if(in[i] == 'B') swap(pos[1],pos[2]);
        if(in[i] == 'C') swap(pos[0],pos[2]);
    }
    for(size_t i=0;i<3;i++) if(pos[i] == 1 ) cout << i+1;
}
