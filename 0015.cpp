#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr(3);
  cin >> arr[0] >> arr[1] >> arr[2];
  if(arr[2] - arr[1] > arr[1]-arr[0])cout << (arr[2] - arr[1]) -1;
  else cout << (arr[1]-arr[0])-1;
}