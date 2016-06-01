#include <stdio.h>
//Faça um programa em C para somar os números inteiros de 1 a 100 e informar qual é a média.
    int main()
    {
        int a,soma;
        float media;
        
        for(a=1;a<101;a++)
        {
            soma=soma+a;
        }
        media=soma/a;
        printf("%.2f",media);
        
        return 0;
    }