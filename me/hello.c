#include <stdio.h>

int main() {
    char name[1000];

    printf("What's your name? ");
    fgets(name, sizeof(name), stdin);

    printf("Hello, %s", name);
    return 0;
}
