#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* Para usar la función rand() */

#define N 5
#define M 7
int main()
{
    srand(time(NULL)); // Inicializa la semilla para números aleatorios
    int i, j;
    int mt[N][M];
    int *pmt = &mt[0][0];
    for (i = 0; i < N ; i++)
    {
        for (j = 0; j < M; j++)
        {
            *(pmt + i * M + j) = 1 + rand() % 100;
            printf("%d ", *(pmt + i * M + j));       
        }
        printf("\n");
    }
    return 0;
}
