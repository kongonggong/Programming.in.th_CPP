#include<bits/stdc++.h>
using namespace std;
/*
 * Hint: The limit of a string is dependent on the device memory, whereas int or even long long unsigned 
 * have their limits declared by C++.
 */
int main()
{
    string a,b; // number A, B
    char ops; // "+" or "*"
    cin >> a >> ops >> b;
    if(b.length() >a.length()) swap(a,b); // I want A greater than B 
    if(ops == '+'){
        if(a.length() == b.length() ) cout << '2' << string(a.length()-1,'0'); // eg. 100 + 100, so I do '2' + '0' *  2 ;
        else cout << '1' << string( (a.length()-2) - (b.length()-1) ,'0') << '1' <<string(b.length()-1,'0'); // eg. 100000 + 10, so I do '1' +  '0' * 2   + '1' + '0';
    }
    else {
        cout << '1' << string(a.length()-1+b.length()-1,'0');//eg. 1000 * 100 you can see it as 1 + '000' + '00' == 100000;
    }
}