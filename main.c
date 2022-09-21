#include <stdio.h>
#include <stdlib.h>

int main()
{
    double Num1; // Variable Input Pertama
    double Num2; // Variable Input Kedua
    int Choice; // Variable untuk user memilih kalkulasinya

    // Mengambil Input pertama
    printf("Input your First Number: \n");
    scanf("%lf", &Num1);

    // Mengambil Input Kedua
    printf("Input your Second Number: \n");
    scanf("%lf", &Num2);

    // User, memilih untuk melakukan kalkulasinya
    printf("What Do You Want to Calculate: \nChoose the Options:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n Masukan Nilai = ");
    scanf("%d", &Choice);

    // Operasi Aritmathicnya
    if (Choice == 1){
        printf("Hasilnya adalah = %lf", Num1 + Num2); // Pertambahan
        }else if (Choice == 2){
        printf("Hasilnya adalah = %lf", Num1 - Num2); // Pengurangan
        }else if (Choice == 3){
        printf("Hasilnya adalah = %lf", Num1 * Num2); // Perkalian
        }else if (Choice == 4){
        printf("Hasilnya adalah = %lf", Num1 / Num2); // Pembagian
        }else printf(" Invalid", &Choice);

        return 0;
}
