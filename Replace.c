#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *old, *new;

    old = fopen("old_death.ogg", "rb");
    new = fopen("ouch.ogg", "wb");

    if (old == NULL)
    {
        printf("Files Are Missing!\n");
        return 1;
    }

    printf("Processing...\n");

    int c;
    while ((c = fgetc(old)) != EOF)
        fputc(c, new);

    fclose(old);
    fclose(new);

    printf("COMPLETE!\n");
    return 0;
}