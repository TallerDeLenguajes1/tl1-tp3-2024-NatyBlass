#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

int main()
{

    char buff[50];
    char **v = malloc(sizeof(char*) * MAX);
    int longitud;

    for (int i = 0; i < MAX; i++)
    {
        puts("Ingrese un Nombre: ");
        gets(buff);
        longitud = strlen(buff) + 1;
        v[i] = malloc(sizeof(char) * longitud);
        strcpy(v[i], buff);
    }
    
    for (int i = 0; i < MAX; i++)
    {
        printf("Nombre %d: ", i+1);
        puts(v[i]);
    }
    
    for (int i = 0; i < MAX; i++)
    {
        free(v[i]);
    }
    free(v);

    return 0;
}



