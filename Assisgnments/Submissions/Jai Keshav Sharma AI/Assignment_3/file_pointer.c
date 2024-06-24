#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "w+");
    fprintf(fptr, "Hello World\n");

    // using rewind()
    rewind(fptr);

    // reading from file
    char buf[50];
    fscanf(fptr, "%[^\n]s", buf);

    printf("%s", buf);

    return 0;
}