#include <stdio.h>

int main() {
    int age;

    printf("enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("you are now singed up");
    }
        else if(age == 0){
            printf("you were just born");
        }
        else if(age < 0){
            printf("you haven't been born yet");
        }
        else{
            printf("you are too young to sing up");
        }

    return 0;
} 
