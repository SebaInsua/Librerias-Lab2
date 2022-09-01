#include <stdio.h>
#include <stdlib.h>
///4. Recorrer un arreglo comenzando desde la posición 0 y mostrar sus elementos en
///forma invertida (recursivo).
/// 5. Determinar en forma recursiva si un arreglo es capicúa.
/// 6. Sumar en forma recursiva los elementos de un arreglo de enteros y retornar el total de la suma.

int main()
{
    int array[] = {4,3,2,4};
    int validos = 4;
    //mostrar_array_inv(array, validos, 0);

    int respuesta;
    respuesta = capicua(array, validos, 0);

    if (respuesta == 1)
    {
        printf("No es capicua\n");
    }else
    {
        printf("Es capicua\n");
    }


    ///P UNTO 6
    int suma = retornar_total_arreglo(array, validos, 0);

    printf("LA suma da:%d\n", suma);

    return 0;
}

/// PUNTO 4
void mostrar_array_inv (int array[], int validos, int pos)
{
    if (pos < validos)
    {
        mostrar_array_inv(array, validos, pos + 1);
        printf("Array invertido: %d\n", array[pos]);
    }
}


/// PUNTO 5
int capicua (int array[], int validos, int i)
{
    int rta = 0;
    if (validos < i)
    {
        if (array[i] == array[validos])
        {
            rta = capicua(array, validos -1, i + 1);
        }
        else
        {
            rta = 0;
        }
    }else
    {
        rta = 1;
    }
        return rta;
}

/// PUNTO 6

int retornar_total_arreglo (int array[], int validos, int pos)
{
    int suma = 0;

    if (pos < validos)
    {
        suma = suma + array[pos];
        suma += retornar_total_arreglo(array, validos, pos +1);
    }
return suma;
}
