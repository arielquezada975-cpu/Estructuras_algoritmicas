#include <stdio.h>
#include "calificaciones.h"

void maxMinEstudiante(float *cal, int n)
{
    printf("\n--- MAX Y MIN POR ESTUDIANTE ---\n");
    for (int i = 0; i < n; i++)
    {
        float max = *(cal + i * ASIGNATURAS);
        float min = *(cal + i * ASIGNATURAS);
        for (int j = 1; j < ASIGNATURAS; j++)
        {
            if (*(cal + i * ASIGNATURAS + j) > max) max = *(cal + i * ASIGNATURAS + j);
            if (*(cal + i * ASIGNATURAS + j) < min) min = *(cal + i * ASIGNATURAS + j);
        }
        printf("Estudiante %d -> Max: %.2f | Min: %.2f\n", i + 1, max, min);
    }
}

void maxMinAsignatura(float *cal, int n)
{
    printf("\n--- MAX Y MIN POR ASIGNATURA ---\n");
    for (int j = 0; j < ASIGNATURAS; j++)
    {
        float max = *(cal + j);
        float min = *(cal + j);
        for (int i = 1; i < n; i++)
        {
            if (*(cal + i * ASIGNATURAS + j) > max) max = *(cal + i * ASIGNATURAS + j);
            if (*(cal + i * ASIGNATURAS + j) < min) min = *(cal + i * ASIGNATURAS + j);
        }
        printf("Asignatura %d -> Max: %.2f | Min: %.2f\n", j + 1, max, min);
    }
}