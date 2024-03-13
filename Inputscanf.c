#include <stdio.h>
#include<string.h>
int main() {

    char name[25]; //bits
    int age;

    printf("whats your name?\n");
    //scanf("%s", &name); //esse so serve para um nome, ele nao le espaço
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("how old are you?\n");
    scanf("%d", &age);

    printf("hello %s, how are you?\n", name);
    printf("you are %d years old", age);

    return 0;
}
