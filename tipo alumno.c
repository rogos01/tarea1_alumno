struct alumno{
    char nombre[100];
    char no_cuenta[10];
    float promedio;
    int semestre;
};

struct escuela{
    struct alumno *alumnos;
    char nombre[100];
};



