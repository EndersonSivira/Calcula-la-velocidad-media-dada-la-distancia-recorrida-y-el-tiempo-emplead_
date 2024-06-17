#include <stdio.h>

int main() {
    float distancia, tiempo, velocidad_media;

    printf("Ingrese la distancia recorrida (en metros): ");
    scanf("%f", &distancia);

    printf("Ingrese el tiempo empleado (en segundos): ");
    scanf("%f", &tiempo);

    velocidad_media = distancia / tiempo;

    printf("La velocidad media es: %.2f metros/segundo\n", velocidad_media);

    return 0;
}