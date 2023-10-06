#include <stdio.h>
#define CAPACITY 50000 // Size of the HashTable.

unsigned long hash_function(char* str)
{
    unsigned long i = 0, j = 0;

    for (j = 0; str[j]; j++)
        i += str[j] * j;

    i = i /j;
    return i % CAPACITY;
}
int main(void)
{
    unsigned long A = hash_function("HI!");
    unsigned long S = hash_function("!IH");
    printf("A[%lu]  S[%lu]\n",A,S);
}