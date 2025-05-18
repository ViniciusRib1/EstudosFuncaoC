#include <stdio.h>

void funcao1() {
    printf("Ola, eu sou a funcao numero 1\n");
}

void funcao2() {
    printf("Ola, eu sou a funcao numero 2\n");
}

void funcao3() {
    printf("Ola, eu sou a funcao numero 3\n");
}

int main() {
    int n1;
    printf("Funcao sem retorno\n");
    printf("Coloque uma das funcoes: \n");
    printf("1 - funcao 1\n");
    printf("2 - funcao 2\n");
    printf("3 - funcao 3\n");
    scanf("%d", &n1);

    switch (n1)
    {
    case 1:
        funcao1();
        break;
    case 2:
        funcao2();
        break;
    case 3:
        funcao3();
        break;
    
    default:
        printf("Coloque um numero correto\n");
        main();
        break;
    }
}