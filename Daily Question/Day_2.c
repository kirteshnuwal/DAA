#include <stdio.h>

int main() {
    int password;

    while(1) {
        printf("Enter password: ");
        scanf("%d", &password);

        if(password == 1234)
            break;
    }

    printf("Login successful!");

    return 0;
}
