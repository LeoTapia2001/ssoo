#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float promedioPonderado;

    printf("Ingrese la Nota 1: ");
    scanf("%f", &nota1);
    
    printf("Ingrese la Nota 2: ");
    scanf("%f", &nota2);

    printf("Ingrese la Nota 3: ");
    scanf("%f", &nota3);

    promedioPonderado = (nota1 * 0.4) + (nota2 * 0.3) + (nota3 * 0.3);

    if (promedioPonderado >= 4.95) {
        printf("El estudiante se exime de la asignatura.\n");
    } else if (promedioPonderado >= 3.95 && promedioPonderado < 4.95) {
        printf("El estudiante va a examen.\n");
    } else {
        printf("El estudiante ha reprobado la asignatura.\n");
    }

    return 0;
}
