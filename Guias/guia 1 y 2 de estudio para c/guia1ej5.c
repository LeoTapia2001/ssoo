#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    float promedioSimple;

    printf("Ingrese la Nota 1: ");
    scanf("%f", &nota1);
    
    printf("Ingrese la Nota 2: ");
    scanf("%f", &nota2);

    printf("Ingrese la Nota 3: ");
    scanf("%f", &nota3);

    printf("Ingrese la Nota 4: ");
    scanf("%f", &nota4);

    promedioSimple = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("El promedio simple es: %.2f\n", promedioSimple);

    return 0;
}
