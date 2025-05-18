#include <stdio.h>

int soma(int a, int b) {
    int resultadoSoma;
    resultadoSoma = a + b;
    printf("O valor da conta deu: %d", resultadoSoma);
}

int sub(int a, int b) {
    int resultadoSub;
    resultadoSub = a - b;
    printf("O valor da conta deu: %d", resultadoSub);
}

int multi(int a, int b) {
    int resultadoMulti;
    resultadoMulti = a * b;
    printf("O valor da conta deu: %d", resultadoMulti);
}

int divi(int a, int b) {
    int resultadoDiv;
    resultadoDiv = a / b;
    printf("O valor da conta deu: %d", resultadoDiv);
}

int main() {
    int a;
    int b;
    int escolha;
    printf("Coloque um numero: ");
    scanf("%d", &a);
    printf("Coloque o segundo numero \n");
    scanf("%d", &b);
    printf("Coloque oq deseja fazer: \n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Mutiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        return soma(a, b);
        break;

    case 2:
        return sub(a, b);
        break;

    case 3:
        return multi(a, b);
        break;

    case 4:
        return divi(a, b);
        break;
    
    default:
        printf("\n Coque um valor correto!\n");
        main();
        break;
    }
    return 0;
}