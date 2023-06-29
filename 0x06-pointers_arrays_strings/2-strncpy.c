


char *_strncpy(char *dest, char *src, int n) {
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}

int main() {
    char dest[50];
    char src[] = "Hello, world!";
    _strncpy(dest, src, 5);
    dest[5] = '\0'; // manually add null byte to end of string
    printf("%s\n", dest); // prints "Hello"
    return 0;
}
