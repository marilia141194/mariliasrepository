#include <stdbool.h>
#include <stdio.h>

// Definição da função is_prime fora da main
bool is_prime(int num) {
    if (num <= 1) return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;

    // Solicita ao usuário que digite um número
    printf("Digite um numero: ");
    scanf("%d", &num);

    // Chama a função is_prime e exibe o resultado
    if (is_prime(num)) {
        printf("%d e primo.\n", num);
    } else {
        printf("%d nao e primo.\n", num);
    }

    return 0;
}
