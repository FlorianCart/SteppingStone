#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "steppingstone.h"

int main(int ac, char *argv[])
{
    char enonceX[] = "1, 2,3,4,5,6";
    char enonceY[] = "10, 19, 20, 45, 67";
    char offre[] = "25, 17, 20, 45, 70";
    char demandeur[] = "35, 27, 50, 34, 15";
    char** x;
    char** y;

    printf("X=[%s]\n\n", enonceX);

    x = str_split(enonceX, ',');
    y = str_split(enonceY, ',');

    if (x)
    {
        int i;
        for (i = 0; *(x + i); i++)
        {
            printf("X=[%s]\n", *(x + i));
            free(*(x + i));
        }
        printf("\n");
        free(x);
    }

    return 0;
}
