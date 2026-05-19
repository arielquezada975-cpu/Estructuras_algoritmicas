#ifndef CALIFICACIONES_H
#define CALIFICACIONES_H

#define ASIGNATURAS 3

void ingresarCalificaciones(float calificaciones[][ASIGNATURAS], int n);
void promedioEstudiante(float calificaciones[][ASIGNATURAS], int n);
void promedioAsignatura(float calificaciones[][ASIGNATURAS], int n);
void maxMinEstudiante(float calificaciones[][ASIGNATURAS], int n);
void maxMinAsignatura(float calificaciones[][ASIGNATURAS], int n);
void aprobadosReprobados(float calificaciones[][ASIGNATURAS], int n);

#endif