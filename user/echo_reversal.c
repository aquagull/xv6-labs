#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    for (int i = argc - 1; i > 0; i--)
    {
        for (int j = strlen(argv[i]) - 1; j >= 0; j--)
            printf("%c", argv[i][j]);
        printf(" ");
    }
    printf("\n");
    exit(0);
}
