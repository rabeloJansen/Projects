#include <stdio.h>
int main() {
    char name[10] = "name";
    char lastname[20] = "lastname";
    int age = 0;
    float height = 0.0;

    printf("Questionário Pessoal:\n");
    printf("Digite seu nome: ");
        scanf("%s", name);
    printf("Digite seu sobrenome: ");
        scanf("%s", lastname);
    printf("Digite sua idade: ");
        scanf("%d", &age);
    printf("Digite sua altura (em metros): ");
        scanf("%f", &height);
    printf("\n--- %s, confira seus dados: ---\n", name);
    printf("Seu nome completo é: %s %s, sua idade é: %d anos e a sua altura é: %.2f metros.\n", name, lastname, age, height);
    
    return 0;
}