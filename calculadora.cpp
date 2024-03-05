#include <stdio.h>

// Função para realizar a adição
double adicao(double a, double b) {
    return a + b;
}

// Função para realizar a subtração
double subtracao(double a, double b) {
    return a - b;
}

// Função para realizar a multiplicação
double multiplicacao(double a, double b) {
    return a * b;
}

// Função para realizar a divisão
double divisao(double a, double b) {
    // Verifica se o divisor (b) é diferente de zero para evitar divisão por zero
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisão por zero!\n");
        return 0; // Retorna 0 em caso de divisão por zero
    }
}

int main() {
    double num1, num2, resultado;
    char operacao;

    // Solicita ao usuário que insira a operação desejada e os números
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    // Realiza a operação com base na escolha do usuário
    switch (operacao) {
        case '+':
            resultado = adicao(num1, num2);
            break;
        case '-':
            resultado = subtracao(num1, num2);
            break;
        case '*':
            resultado = multiplicacao(num1, num2);
            break;
        case '/':
            resultado = divisao(num1, num2);
            break;
        default:
            printf("Operacao invalida!\n");
            return 1; // Retorna código de erro em caso de operação inválida
    }

    // Imprime o resultado
    printf("Resultado: %lf\n", resultado);

    return 0;
}
