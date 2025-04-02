#include <stdio.h>
#include <stdlib.h>

struct compu
{
    int velocidad;        // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio;             // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu;       // Tipo de procesador (apuntador a cadena de caracteres)
};


void listarPCs(struct compu pcs[], int cantidad);

void mostrarMasVieja(struct compu pcs[], int cantidad);

void mostrarMasVeloz(struct compu pcs[], int cantidad);


int main()
{
    struct compu computadoras;  
    
    
    return 0;
}

void listarPCs(struct compu pcs[], int cantidad){

}

void mostrarMasVieja(struct compu pcs[], int cantidad){

}

void mostrarMasVeloz(struct compu pcs[], int cantidad){

    
}