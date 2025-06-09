#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // Declaração e inicialização de variáveis
    int idade = 20; // Idade, será sobrescrita pela entrada do usuário.
    float valorDoPgto = 14.42; // Valor do pagamento, será sobrescrito pela entrada do usuário.
    double velParticula = 2.92817029837; // Velocidade da partícula, será impressa com seu valor inicial.
    char tipoHabMotor = 'A'; // Tipo de habilitação, será sobrescrito pela entrada do usuário.

    // --- Instruções para entrada de dados ---

    // Solicita e lê a idade
    printf("Informe a idade: ");
    // %d é o especificador de formato para inteiros.
    // &idade passa o endereço de memória da variável 'idade' para scanf.
    scanf("%d", &idade);

    // Solicita e lê o valor do pagamento
    printf("Informe o valor do pagamento: ");
    // %f é o especificador de formato para floats.
    // &valorDoPgto passa o endereço de memória da variável 'valorDoPgto'.
    scanf("%f", &valorDoPgto);

    // Solicita e lê o tipo de habilitação
    printf("Informe o tipo de habilitação (ex: A, B, C): ");
    // Um espaço antes de %c em scanf(" %c", ...) é uma prática comum para
    // consumir qualquer caractere de espaço em branco pendente no buffer de entrada,
    // como o caractere 'Enter' deixado por um 'scanf' anterior.
    // Isso evita que 'scanf("%c", ...)' leia imediatamente o 'Enter' como a entrada do caractere.
    // &tipoHabMotor passa o endereço de memória da variável 'tipoHabMotor'.
    scanf(" %c", &tipoHabMotor);

    // --- Exibição dos dados informados ---

    // Imprime todos os dados informados e o valor inicial da velocidade da partícula.
    // %d para int, %f para float, %lf para double, %c para char.
    // \n no final adiciona uma quebra de linha para a próxima saída.
    printf("Dados Informados: Idade: %d, Pagamento: %f, Particula: %lf, Habilitacao: %c\n",
           idade, valorDoPgto, velParticula, tipoHabMotor);

    return 0; // Indica que o programa foi executado com sucesso.
}