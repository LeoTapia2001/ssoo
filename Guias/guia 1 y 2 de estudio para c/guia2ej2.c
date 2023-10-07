#include <stdio.h>
#include <string.h>

struct Producto {
    int codigo;
    char descripcion[100];
    float precio;
};

int main() {
    struct Producto producto1, producto2;

    printf("Ingrese el código del primer producto: ");
    scanf("%d", &producto1.codigo);
    printf("Ingrese la descripción del primer producto: ");
    scanf(" %[^\n]s", producto1.descripcion);
    printf("Ingrese el precio del primer producto: ");
    scanf("%f", &producto1.precio);

    printf("Ingrese el código del segundo producto: ");
    scanf("%d", &producto2.codigo);
    printf("Ingrese la descripción del segundo producto: ");
    scanf(" %[^\n]s", producto2.descripcion);
    printf("Ingrese el precio del segundo producto: ");
    scanf("%f", &producto2.precio);

    if (producto1.precio > producto2.precio) {
        printf("El producto con mayor precio es: %s\n", producto1.descripcion);
    } else if (producto2.precio > producto1.precio) {
        printf("El producto con mayor precio es: %s\n", producto2.descripcion);
    } else {
        printf("Ambos productos tienen el mismo precio.\n");
    }

    return 0;
}
