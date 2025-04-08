#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* Para usar la función rand() */
#include <string.h>

struct compu
{
    int velocidad;        // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio;             // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu;       // Tipo de procesador (apuntador a cadena de caracteres)
};

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

void listarPCs(struct compu pcs[], int cantidad);

void mostrarMasVieja(struct compu pcs[], int cantidad);

void mostrarMasVeloz(struct compu pcs[], int cantidad);

int main()
{
    srand(time(NULL)); // Inicializa la semilla para números aleatorios
    struct compu pcs[5];
    int cantidad = 5; // Cantidad de computadoras a ingresar
    for (int i = 0; i < cantidad; i++)
    {
        pcs[i].velocidad = 1 + rand() % 3;        // Velocidad entre 1 y 3 GHz
        pcs[i].anio = 2015 + rand() % 10;         // Año entre 2015 y 2024
        pcs[i].cantidad_nucleos = 1 + rand() % 8; // Núcleos entre 1 y 8
        pcs[i].tipo_cpu = tipos[rand() % 6];
    }
    listarPCs(pcs, cantidad);
    mostrarMasVieja(pcs, cantidad);
    mostrarMasVeloz(pcs, cantidad);
    printf("\n\n");
    return 0;
}

// Funcion para listar las PCs
void listarPCs(struct compu pcs[], int cantidad)
{
    printf("Listado de PCs:\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("PC %d: Velocidad: %d GHz, Año: %d, Núcleos: %d, Tipo CPU: %s\n",
               i + 1, pcs[i].velocidad, pcs[i].anio, pcs[i].cantidad_nucleos, pcs[i].tipo_cpu);
    }
    printf("\n");
}

// Función para mostrar la PC más vieja
void mostrarMasVieja(struct compu pcs[], int cantidad)
{
    int pcMasVieja = pcs[0].anio;
    int indiceMasVieja = 0;
    for (int i = 1; i < cantidad; i++)
    {
        if (pcs[i].anio < pcMasVieja)
        {
            pcMasVieja = pcs[i].anio;
            indiceMasVieja = i;
        }
    }
    printf("La PC más vieja es la PC %d: Velocidad: %d GHz, Año: %d, Núcleos: %d, Tipo CPU: %s\n",
           indiceMasVieja + 1, pcs[indiceMasVieja].velocidad, pcs[indiceMasVieja].anio,
           pcs[indiceMasVieja].cantidad_nucleos, pcs[indiceMasVieja].tipo_cpu);
}

// Función para mostrar la PC más veloz
void mostrarMasVeloz(struct compu pcs[], int cantidad)
{
    int pcMasVeloz = pcs[0].velocidad;
    int indiceMasVeloz = 0;
    for (int i = 1; i < cantidad; i++)
    {
        if (pcs[i].velocidad > pcMasVeloz)
        {
            pcMasVeloz = pcs[i].velocidad;
            indiceMasVeloz = i;
        }
    }
    printf("La PC más veloz es la PC %d: Velocidad: %d GHz, Año: %d, Núcleos: %d, Tipo CPU: %s\n",
           indiceMasVeloz + 1, pcs[indiceMasVeloz].velocidad, pcs[indiceMasVeloz].anio,
           pcs[indiceMasVeloz].cantidad_nucleos, pcs[indiceMasVeloz].tipo_cpu);
}