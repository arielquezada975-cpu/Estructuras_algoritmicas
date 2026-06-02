#include <stdio.h>

#define ASIGNATURAS 3

void ingresarCalificaciones(float *cal, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEstudiante %d:\n", i + 1);
        for (int j = 0; j < ASIGNATURAS; j++)
        {
            do {
                printf("  Asignatura %d: ", j + 1);
                scanf("%f", (cal + i * ASIGNATURAS + j));
                if (*(cal + i * ASIGNATURAS + j) < 0 || *(cal + i * ASIGNATURAS + j) > 10)
                    printf("  Error: debe estar entre 0 y 10\n");
            } while (*(cal + i * ASIGNATURAS + j) < 0 || *(cal + i * ASIGNATURAS + j) > 10);
        }
    }
}

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

void promedioAsignatura(float *cal, int n)
{
    printf("\n--- PROMEDIO POR ASIGNATURA ---\n");
    for (int j = 0; j < ASIGNATURAS; j++)
    {
        float suma = 0;
        for (int i = 0; i < n; i++)
            suma += *(cal + i * ASIGNATURAS + j);
        printf("Asignatura %d -> Promedio: %.2f\n", j + 1, suma / n);
    }
}

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

void aprobadosReprobados(float *cal, int n)
{
    printf("\n--- APROBADOS Y REPROBADOS POR ASIGNATURA ---\n");
    for (int j = 0; j < ASIGNATURAS; j++)
    {
        int aprobados = 0, reprobados = 0;
        for (int i = 0; i < n; i++)
        {
            if (*(cal + i * ASIGNATURAS + j) >= 6) aprobados++;
            else reprobados++;
        }
        printf("Asignatura %d -> Aprobados: %d | Reprobados: %d\n",
               j + 1, aprobados, reprobados);
    }
}

int main()
{
    int n;
    printf("=== SISTEMA DE GESTION DE CALIFICACIONES ===\n");
    printf("Ingrese el numero de estudiantes: ");
    scanf("%d", &n);

    float calificaciones[n][ASIGNATURAS];

    ingresarCalificaciones(&calificaciones[0][0], n);
    promedioEstudiante(&calificaciones[0][0], n);
    promedioAsignatura(&calificaciones[0][0], n);
    maxMinEstudiante(&calificaciones[0][0], n);
    maxMinAsignatura(&calificaciones[0][0], n);
    aprobadosReprobados(&calificaciones[0][0], n);

    printf("\nProceso finalizado.\n");
    return 0;
}