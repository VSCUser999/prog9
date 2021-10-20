#include <stdio.h>

int main (void){
    int n, k, i = 0,j=0, m;
    scanf("%d", &n);
    
    while(n != 0){

        k = n % 10;
        m = n / 10;
		
        i++;
        j = j + k;

        n = m;
    }
    printf("%d\n%d\n", i, j);
}