#include <stdio.h>
#include <stdlib.h>


int main() {
    char cpf[12];
    int i, j, soma, digito1, digito2;
    
    printf("Digite o CPF (somente numeros): ");
    scanf("%s", cpf);
    
    }
    
    // Verifica se o CPF possui somente números
    for (i = 0; i < 11; i++) {
        if (!isdigit(cpf[i])) {
            printf("CPF invalido! O CPF deve conter somente numeros.\n");
            exit(1);
        }

    }
    
    if ((soma % 11) < 2) {
        digito1 = 0;
    } else {
        digito1 = 11 - (soma % 11);
    }
    
    // Calcula o segundo dígito verificador
    soma = 0;
    for (i = 0, j = 11; i < 10; i++, j--) {
        soma += (cpf
