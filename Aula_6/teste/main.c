#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool ehTriangulo(float a, float b, float c){
    bool triangulo = a+b>c && a+c>b && b+c>a;
    return triangulo;
}


int verTriangulo(float a,float b, float c){
    if(!ehTriangulo(a,b,c)){
        return 0;
    }else{
        if(a==b && b==c){
            return 1;
        }else if(a==b || b==c || a==c){
            return 2;
        }else{
            return 3;
        }
    }
}

int main()
{
    int resultado;
    resultado=verTriangulo(3,3,3);
    printf("%i\n",resultado);
    return 0;
}
