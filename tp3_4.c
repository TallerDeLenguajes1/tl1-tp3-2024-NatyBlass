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


