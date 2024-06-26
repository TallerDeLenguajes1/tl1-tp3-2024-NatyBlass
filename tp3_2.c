#include <stdio.h>
#include <stdlib.h>

int main()
{

    int simProd[5][12];
    int sum = 0;
    float prom;
    int max = -1;
    int min = 50001;
    int auxIMax, auxJMax, auxIMin, auxJMin;

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            simProd[i][j] = 10000 + rand() % 40001;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Anio: %d", i + 1);

        for (int j = 0; j < 12; j++)
        {
            printf("Mes: %d\n", j + 1);
            printf("Produccion: %d\n", simProd[i][j]);
        }
        printf("-------------------------------\n");
    }

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 12; j++)
        {
            sum = sum + simProd[i][j];
        }
        prom = sum / 12;
        printf("Anio: %d\n", i + 1);
        printf("Promedio Anual: %.2f\n", prom);
        printf("-------------------------------\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (simProd[i][j] >= max)
            {
                auxIMax = i;
                auxJMax = j;
                max = simProd[i][j];
            }

            if (simProd[i][j] <= min)
            {
                auxIMin = i;
                auxJMin = j;
                min = simProd[i][j];
            }
        }
    }

    printf("El Valor Maximo es del Anio: %d y mes: %d\n", auxIMax+1, auxJMax+1);
    printf("El Valor es: %d\n", max);
    printf("---------------------------------------------------\n");

    printf("El Valor Minimo es del Anio: %d y mes: %d\n", auxIMin+1, auxJMin+1);
    printf("El Valor es: %d\n", min);
    printf("---------------------------------------------------\n");
    printf("---------------------------------------------------\n");

    return 0;
}
