#include <stdio.h>
#include <stdlib.h>

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


int main()
{

    int cantClientes = 5, clientes;
    Cliente *datosClientes;

    printf("Ingrese la cantidad de Clientes: \n");
    scanf("%d", clientes);
    
    if (clientes <= cantClientes)
    {
        datosClientes = malloc(sizeof(Cliente *) * clientes);


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
    int longitud;

    for (int i = 0; i < cant; i++)
    {
        Clientes->ClienteID = i + 1;

        printf("================INGRESO DE DATOS DEL CLIENTE================");
        printf("Numero de Cliente: %d\n ", Clientes->ClienteID);
        printf("Nombre del Cliente: ");
        gets(nombre);
        longitud = strlen(nombre) + 1;
        Clientes->NombreCliente = malloc(sizeof(char * ) * longitud);
        strcpy(Clientes->NombreCliente, nombre);

    }
    




}

