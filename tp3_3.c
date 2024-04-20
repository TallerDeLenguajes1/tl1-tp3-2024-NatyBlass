#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    char buff[50];
    char **v; //malloc(sizeof(char*) * MAX);
    int longitud, cant;

    printf("Cantidad de nombres que desea ingresar:\n");
    scanf("%d", &cant);
    v = malloc(sizeof(char*) * cant);

    for (int i = 0; i < cant ; i++)
    {
        printf("Ingrese un Nombre:\n");
        scanf("%s",&buff);
        longitud = strlen(buff) + 1;
        v[i] = malloc(sizeof(char) * longitud);
        strcpy(v[i], buff);
    }
    
    for (int i = 0; i < cant; i++)
    {
        printf("Nombre %d: ", i+1);
        puts(v[i]);
    }
    
    for (int i = 0; i < cant; i++)
    {
        free(v[i]);
    }
    free(v);

    return 0;
}



