#include <stdio.h>

int main() { 
    char grade;                      //basicamente o Switch é uma forma mais otimizada de utilizar If, else if e Else.
    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);
    switch(grade) {
        case 'A':
            printf("perfect!\n");
        break;
        case 'B':
            printf("You did good!\n");
        break;
        case 'C':
            printf("You did okay!\n");
        break;
        case 'D':
            printf("At least it's not an F!\n");
        break;
        case 'F':
            printf("YOU FAILED\n");
        break;
            default:
                printf("Please enter only valid grades");
}
    return 0;
}
