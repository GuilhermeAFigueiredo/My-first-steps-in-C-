#include <stdio.h>

int main() {

//Variável =
        //Espaço alocado na memória para armazenar um valor.
        //Referimo-nos ao nome de uma variável para acessar o valor armazenado. 
        //Essa variável agora se comporta como se fosse o valor que ela contém. 
        //NO ENTANTO, precisamos declarar qual tipo de dado estamos armazenando.

/*int x; //declaração de um inteiro.
x = 123; //definição.
int y = 321; //declaração + definição.*/

int age = 18; //int = numero inteiro.
float gpa = 2.05; //float = número com vírgula. //gpa = coisa de americano safado.
char grade = 'c'; //char = caractere único.
char name[] = "Guilherme"; //char x[] = array de caracteres.
printf("hello %s\n", name);
printf("you are %d years old\n", age);
printf("yours gpa is %f\n", gpa);
printf("your char is %c\n", grade);

    return 0;
}