#include <stdio.h>
#include "calificaciones.h"

int main() {
    int n;
    printf("=== SISTEMA DE GESTIÓN DE CALIFICACIONES ===\n");
    printf("Ingrese el numero de estudiantes: ");
    scanf("%d", &n);

    float calificaciones[n][ASIGNATURAS];

    // Ingreso y validación
    ingresarCalificaciones(&calificaciones[0][0], n);
    
    // Cálculos y reportes
    promedioEstudiante(&calificaciones[0][0], n);
    promedioAsignatura(&calificaciones[0][0], n);
    maxMinEstudiante(&calificaciones[0][0], n);
    maxMinAsignatura(&calificaciones[0][0], n);
    aprobadosReprobados(&calificaciones[0][0], n);

    printf("\n✅ Proceso finalizado.\n");
    return 0;
}
