/** 
 *   ### Introducao a ponteiros
 * 
 * 
 *  - Tipos de dados basicos em C
 * 
 *  Char    = %c - caractere
 *  int     = %d - inteiro
 *  floar   = %f - real
 *  char[]  = %s - cadeia de caracteres (string)
 * 
 */

#include <stdio.h>

int main(void)
{

    int x; // Declarando varivael inteiro (Reservando um espaco na memoria, equivalente a um int)
    x = 10; // Atribuindo um valor para a varivael (Guardando o valora no espaco da memoria que foi reservado)

    int *ponteiro; // Criando um ponteiro do tipo Int
    int *ponteiro; // Criando um ponteiro do tipo Int ou int *ponteiro = &x
    ponteiro = &x; // Criando um apontamento de ponteiro para a variavel x

    //int y = 20;
    //*ponteiro = y; // Altera o valor da variavel x (devido ao ponteiro que apontou para a variavel x, sendo possivel a alteracao do valor)

    printf("\nValor armazenado na variavel x: %i\n", x); // Imprimindo o valor armazenado na variavel x
    printf("Ponteiro de memoria vareavel x: %i\n", &x); // Imprimindo o ponteiro da memoria da variavel x

    printf("\nImprimindo o valor do apontamento do *ponteiro: %i\n", *ponteiro); // Imprimindo o apontamento do ponteiro (Valor da variavel x)
    printf("Imprimindo o valor gravado na variavel *ponteiro: %i\n", ponteiro); // Imprimindo o valor que fica armazenado dentro da variavel ponteiro

    getchar();
    return 0;
}

