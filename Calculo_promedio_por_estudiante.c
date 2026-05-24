#include <stdio.h>
#include "calificaciones.h"

void promedioEstudiante(float *cal, int n)
{
    printf("\n--- PROMEDIO POR ESTUDIANTE ---\n");
    for (int i = 0; i < n; i++)
    {
        float suma = 0;
        for (int j = 0; j < ASIGNATURAS; j++)
            suma += *(cal + i * ASIGNATURAS + j);
        printf("Estudiante %d -> Promedio: %.2f\n", i + 1, suma / ASIGNATURAS);
    }
}