#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626
int main()
{
    double r,nor,tax;
    cin >> r;
    nor = 2*(pow(r,2));
    tax = PI *pow(r,2); 
    printf("%.6f\n%.6f",tax , nor);
}