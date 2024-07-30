#include<bits/stdc++.h>
using namespace std;
/*
 * Hint: The limit of a string is dependent on the device memory, whereas int or even long long unsignedby the  
 * have their limits declared by C++.
 * so we need to check by the last number whether is prime-odd or not 
 */
int main()
{
    size_t n;
    cin >> n;
    for(size_t i=0;i<n;i++){
        string tmp;
        cin >> tmp;
        if(tmp == "2") {cout << 'T'<<"\n";continue;}
        else if(tmp.back() == '3'||tmp.back() =='5'||tmp.back() =='7'||tmp.back() =='1'||tmp.back() =='9') {cout<< 'T'<<"\n";}
        else {cout << 'F' << "\n";}
    }
}