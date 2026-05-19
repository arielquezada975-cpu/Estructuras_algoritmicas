<<<<<<< HEAD
    #ifndef CALIFICACIONES_H
=======
#ifndef CALIFICACIONES_H
>>>>>>> 7f87c1b689c44e5c0cdfceb6436d98ef9c0d759d
#define CALIFICACIONES_H

#define ASIGNATURAS 3

<<<<<<< HEAD
void ingresarCalificaciones(float *calificaciones, int n);
void promedioEstudiante(float *calificaciones, int n);
void promedioAsignatura(float *calificaciones, int n);
void maxMinEstudiante(float *calificaciones, int n);
void maxMinAsignatura(float *calificaciones, int n);
void aprobadosReprobados(float *calificaciones, int n);

#endif
=======
void ingresarCalificaciones(float calificaciones[][ASIGNATURAS], int n);
void promedioEstudiante(float calificaciones[][ASIGNATURAS], int n);
void promedioAsignatura(float calificaciones[][ASIGNATURAS], int n);
void maxMinEstudiante(float calificaciones[][ASIGNATURAS], int n);
void maxMinAsignatura(float calificaciones[][ASIGNATURAS], int n);
void aprobadosReprobados(float calificaciones[][ASIGNATURAS], int n);

#endif
>>>>>>> 7f87c1b689c44e5c0cdfceb6436d98ef9c0d759d
