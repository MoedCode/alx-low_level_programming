#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;

	for (; 1; i++)
    {
    long long int  *any;

        any =  malloc(999999999 * sizeof(long long int));
        printf("Pointer for %i is %p\n",i,any);
        // free(any);

    }
}
