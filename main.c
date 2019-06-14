#include <stdio.h>
#include <stdlib.h>

// PROCEDURE DAN FUNGSI ADA DILUAR MAIN
// DICKY IBROHIM
//FUNGSI
int pengurangan (int a, int b)
{
    int hasil;
    hasil =a-b;
    return hasil;
}

int pertambahan (int a, int b)
{
    int hasil;
    hasil =a+b;
    return hasil;
}

int perkalian (int a, int b)
{
    int hasil;
    hasil =a*b;
    return hasil;
}
int pembagian (int a, int b)
{
    int hasil;
    hasil =a/b;
    return hasil;
}

// MAIN
int main(){
int inputa, inputb;
printf ("Input A= ");
scanf ("%d",&inputa);
printf ("Input B= ");
scanf ("%d",&inputb);

    printf("Hasil pengurangan %d - %d = %d\n", inputa, inputb, pengurangan(inputa,inputb));
    printf("Hasil Pertambahan %d + %d = %d\n", inputa, inputb,pertambahan(inputa,inputb));
    printf("Hasil Perkalian   %d * %d = %d\n", inputa, inputb,perkalian(inputa,inputb));
    printf("Hasil Pembagian   %d / %d = %d\n", inputa, inputb,pembagian(inputa,inputb));
    return 0;
}








/*
#include <stdio.h>
#include <stdlib.h>

// PROCEDURE DAN FUNGSI ADA DILUAR MAIN

//FUNGSI
int pengurangan (int a, int b)
{
    int hasil;
    hasil =a-b;
    return hasil;
}

// MAIN
int main()
{
    printf("Hasil pengurangan 5 - 2 = %d", pengurangan(5,2));
    return 0;
}

*/
