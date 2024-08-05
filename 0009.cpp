#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> mp; int arr[3]; string a;
    cin >> arr[0] >> arr[1] >> arr[2] >> a;
    sort(arr,arr+3);
    mp['A'] = arr[0]; mp['B'] = arr[1]; mp['C'] = arr[2];
    for(int i=0;i<3;i++) cout << mp[a[i]] << " "; 
}