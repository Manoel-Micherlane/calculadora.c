#include <stdio.h>


float soma(float num1, float num2) {
    return num1 + num2;
}


float subtracao(float num1, float num2) {
    return num1 - num2;
}


float multiplicacao(float num1, float num2) {
    return num1 * num2;
}


float divisao(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
}

int main() {
    float num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

   
    printf("Soma: %.2f\n", soma(num1, num2));
    printf("Subtração: %.2f\n", subtracao(num1, num2));
    printf("Multiplicação: %.2f\n", multiplicacao(num1, num2));
    printf("Divisão: %.2f\n", divisao(num1, num2));

    return 0;
}
