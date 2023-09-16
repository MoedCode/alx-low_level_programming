// license_check.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check_license(const char* username, const char* serial) {
    int username_length = strlen(username);
    int serial_sum = 0;
    for (int i = 0; i < username_length; ++i) {
        serial_sum += username[i];
    }
    return serial_sum == atoi(serial);
}

int main(int argc, char *argv[]) {
    if (argc != 3)
    {
        printf("Usage: %s <username> <serial>\n", argv[0]);
        return 1;
    }
    if (check_license(argv[1], argv[2]))
    {
        printf("License valid!\n");
    }
    else
    {
        printf("License invalid!\n");
    }
    return 0;
}