#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef char name[20]; // this typedef will allow to use a "nickname" of name to create a char array with the size of 20

typedef struct
{
    char patientName[20];
    int patientAge;
    bool onPills;

} Schiz;



int main()
{

    name p0 = "Goblak";

    Schiz p1 = {"Kamikadze D", 34, false};


    printf("Patient zero name is: %s\n", p0);

    printf("Patient one name is: %s\n", p1.patientName);
    printf("Patient one age is: %i\n", p1.patientAge);
    printf("Patient one is on pills: %i\n", p1.onPills);
    return 0;
}