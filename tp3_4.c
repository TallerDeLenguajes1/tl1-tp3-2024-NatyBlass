#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *TiposProductos[]={"Galletas","Snack","Cigarrillos","Caramelos","Bebidas"};

struct{
    int ProductoID; //Numerado en ciclo iterativo
    int Cantidad; // entre 1 y 10
    char *TipoProducto; // Algún valor del arreglo TiposProductos
    float PrecioUnitario; // entre 10 - 100
} typedef Producto;

struct{
    int ClienteID; // Numerado en el ciclo iterativo
    char *NombreCliente; // Ingresado por usuario
    int CantidadProductosAPedir; // (aleatorio entre 1 y 5)
    Producto *Productos; //El tamaño de este arreglo depende de la variable “CantidadProductosAPedir”
} typedef Cliente;

void cargarDatos(Cliente *Cliente, int cant);
void liberarMemoria(Cliente *Clientes, int cant);

int main()
{
    srand(time(NULL));

    int cantClientes = 5, clientes;
    Cliente *datosClientes;

    printf("=====================================\n");
    printf("Ingrese la cantidad de Clientes: \n");
    scanf("%d", &clientes);
    printf("=====================================\n");
    if (clientes <= cantClientes)
    {
        datosClientes = malloc(sizeof(Cliente *) * clientes);

        cargarDatos(datosClientes, cantClientes);
        liberarMemoria(datosClientes, cantClientes);

    }
    else
    {
        printf("El maximo de clientes es 5\n");
    }
    

    return 0;
}

void cargarDatos(Cliente *Clientes, int cant)
{
    char nombre[50];
    int longitud, cantProd;

    for (int i = 0; i < cant; i++)
    {
        Clientes[i].ClienteID = i + 1;

        printf("================INGRESO DE DATOS DEL CLIENTE================\n");
        printf("Numero de Cliente: %d\n ", Clientes[i].ClienteID);
        printf("Nombre del Cliente: ");
        fflush(stdin);
        gets(nombre);
        longitud = strlen(nombre) + 1;
        Clientes[i].NombreCliente = malloc(sizeof(char *) * longitud);
        strcpy(Clientes[i].NombreCliente, nombre);
        cantProd = 1 + rand() % 5;
        Clientes[i].CantidadProductosAPedir = cantProd;
        Clientes[i].Productos = malloc(sizeof(Producto *) * cantProd);
        printf("Cantidad de Productos que pide: %d\n", cantProd);

        for (int j = 0; j < cantProd; j++)
        {
            Clientes[i].Productos[j].ProductoID = j + 1;
            Clientes[i].Productos[j].Cantidad = 1 + rand () % 10;
            Clientes[i].Productos[j].TipoProducto = TiposProductos[rand() % 5];
            Clientes[i].Productos[j].PrecioUnitario = 10 + rand() % 91;
        
            printf("=====================================\n");
            printf("PRODUCTO N° %d\n", Clientes[i].Productos[j].ProductoID);
            printf("Tipo de Producto: %s\n", Clientes[i].Productos[j].TipoProducto);
            printf("Cantidad: %d\n", Clientes[i].Productos[j].Cantidad);
            printf("Precio Unitario: %.2f\n", Clientes[i].Productos[j].PrecioUnitario);
            printf("=====================================\n");
        }
        
    }
    
}

void liberarMemoria(Cliente *Clientes, int cant)
{
    for (int i = 0; i < cant; i++) 
    {
        free(Clientes[i].NombreCliente);
        free(Clientes[i].Productos);
    }
    free(Clientes);
}