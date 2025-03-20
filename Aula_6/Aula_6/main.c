#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <locale.h>>

void apresentacao2(int n){
    if(n>0){
        printf("Lacerda\n");
        apresentacao2(n-1);
    }
}
// --n muda o valor, n-1 n muda
void apresentacao(int n, int i){
    if(n<=i){
        apresentacao(n+1, i);
        printf("%i\n",n);
    }else{
        //apresentacao2(5);
    }
}

int main()
{
    setlocale(LC_ALL,"");
    apresentacao(500, 1000);
    return 0;
}
