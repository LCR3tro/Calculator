#include <stdio.h>
#include <windows.h> // Correção de erro de acentuação

void adição(long long int n1, long long int n2) {
    printf("O resultado da adição é %lld \n", n1 + n2);
}
void subtração(long long int n1, long long int n2) {
    printf("O resultado da subtração é %lld \n", n1 - n2);
}
void multiplicação(long long int n1, long long int n2) {
    printf("O resultado da multiplicação é %lld \n", n1 * n2);
}
void divisão(long long int n1, long long int n2) {
    if (n2 != 0) {
        printf("O resultado da divisão é %lld \n", n1 / n2);
    } else {
        printf("Erro: divisão por zero!\n");
    }
}
int main(){
SetConsoleOutputCP(65001); //// Correção de erro de acentuação
long long int n1, n2;
 char operador;

  printf("Digite o primeiro número: ");
    scanf("%lld", &n1);
    
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); 
    
    printf("Digite o segundo número: ");
    scanf("%lld", &n2);


switch (operador) {
        case '+':
            adição(n1, n2);
            break;
        case '-':
             subtração(n1, n2);
            break;
        case '*':
           multiplicação(n1, n2);
            break;
        case '/':
           divisão(n1, n2);
            break;
        default:
            printf("Operador inválido!\n");
            break;
    }



















    return 0;
}