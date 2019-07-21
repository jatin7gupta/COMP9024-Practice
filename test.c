#include <stdio.h>
#include <stdlib.h>
#include <mcheck.h>

void no_op(enum mcheck_status status) {}

int main()
{
    mcheck(&no_op);

    void* f = malloc(4);

    printf("%d (should be %d)\n", mprobe(f), MCHECK_OK);
    printf("%d (should be %d)\n", mprobe(f), MCHECK_OK);

    free(f);

    printf("%d (should be %d)\n", mprobe(f), MCHECK_FREE);
    printf("%d (should be %d)\n", mprobe(f), MCHECK_FREE);

    return 0;
}
