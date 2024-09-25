#include <iostream>
#include <stdio.h>
int main() {
   char nome;
    int eta;
    printf("inserire l' iniziale del nome");
    scanf("%s", &nome);
    printf("inserire l eta");
    scanf("%i", &eta);
    if (eta>=18)
        printf ("%s e' maggiorenne",&nome);
    else
        printf ("%s e' minorenne",&nome);
return 0;
}




