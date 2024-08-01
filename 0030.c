#include <stdio.h>
#include <string.h>

int main() {
    char num[1000001]; 
    scanf("%s", num); 
    int m3=0,m11=0;
    for(size_t i=0;i<strlen(num);i++)
    {
        int tmp = num[i] -'0';
         m3 += tmp;
        if( (strlen(num) - (i+1) ) % 2 == 0) m11 += tmp;
        else m11 -= tmp;
    }
    if(m11%11<0) printf("%d %d",m3%3,11+(m11%11));
    else printf("%d %d",m3%3,m11%11);
}