#include <stdio.h>

int cube(int *ptr)
{
    return (*ptr) * (*ptr) * (*ptr);
}

void cubearray(int sizec, int sizec2, int array[sizec][sizec2])

{
    printf("\nCubes of elements :-\n\n");

    for (int i = 0; i < sizec; i++)
    {
        for (int j = 0; j < sizec2; j++)
        {
            printf("%d ", cube(&array[i][j]));
        }
        printf("\n");
    }
}
int main()
{

    int sizec1, sizec2;
    printf("enter array rows:- ");
    scanf("%d", &sizec1);

    printf("enter array columns:- ");
    scanf("%d", &sizec2);

    int array[sizec1][sizec2];
    
    printf("\n");
    for (int i = 0; i < sizec1; i++)
    {
        for (int j = 0; j < sizec2; j++)
        {
            printf("enter array elements : a[%d] [%d] :-", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }

    printf("\n\n Matrix :- \n\n");
    for (int i = 0; i < sizec1; i++)
    {
        for (int j = 0; j < sizec2; j++)
        {

            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    cubearray(sizec1, sizec2, array);
    return 0;
}
