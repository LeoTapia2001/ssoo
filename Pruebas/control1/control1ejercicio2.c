#include <stdio.h>


int main (){
    int cateto1=0,cateto2=0,perimetro=0,area=0,hipotenusa=0;

    printf("ingrese el valor del cateto 1: ");
        scanf("%d",&cateto1);
    printf("ingrese el valor del cateto 2: ");
        scanf("%d",&cateto2);

    hipotenusa = (cateto1 * cateto1) + (cateto2 * cateto2);
    printf("la hipotenusa vale: %d",hipotenusa);

    area = (cateto1 * cateto2)/2;
    printf("el area vale: %d",area);

    perimetro = hipotenusa + cateto1 + cateto2;
    printf("el perimetro vale: %d",perimetro);


    return 0;
}
