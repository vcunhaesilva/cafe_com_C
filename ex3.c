#include <stdio.h>
//Faça um programa em C para ler o ano de nascimento do usuário, calcular e informar a idade do mesmo.
    int main()
    {
        int ano,idade;
        
        printf("nascimento:");
        scanf("%d",&ano);
        idade=2016-ano;
        printf("%d",idade);
        return 0;
    }