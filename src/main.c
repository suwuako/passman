#include <stdio.h>

int main(void) {
    char *master_password;
    printf("Enter master password\n");

    scanf("&c", master_password);
    printf("master password %s", master_password);

    return 0;
}