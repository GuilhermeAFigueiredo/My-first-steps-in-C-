#include <stdio.h>
#include <stdbool.h>

int main() {
    char a = 'C';                    //para caractere unico, se usa %c (c de caractere).
    char b[] = "Guilherme";          //para uma array de caracteres, se usa %s (s de string).

    float c = 3.141592;             // bytes (32 bits of precision) 67 digits %f
double d = 3.141592653589793;       // 8 bytes (64 bits of precision) 15 16 digits %lf
bool e = true;                    // 1 byte (true or false) %d

char f= 100;                      // 1 byte (-128 to +127) %d or c
unsigned char g = 255;            // 1 byte (0 to +255) %d or %c

short int h = 32767;              //2 bytes (-32,768 to +32,767) %d
unsigned short int i = 65535;     // 2 bytes (0 to +65,535) %d
//formatos especificos:
// %.1 decimal precision
// %1 minimum field width
// % left align
float item1 = 5.75;
float item2 = 10.00;
float item3 = 100.99;
printf("Item 1: $%.2f\n", item1);
printf("Item 2: $%.2f\n", item2);
printf("Item 3: $%.2f\n", item3);

//constante: valor fixo que nao pode ser alterado pelo programa durante sua execusao.
const float pi = 3.14159;
printf("%f", pi);
    return 0;
}
