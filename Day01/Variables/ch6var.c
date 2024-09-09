#include <stdio.h>

int main(){

double a , b ;


printf("Donnez les valeurs d' a et b est : \n" );
printf("La valeur d'a : ");
scanf("%lf", &a);

printf("La valeur d'b : ");
scanf("%lf", &b);



printf("La somme de ces valeurs est %.2f\n", a + b);
printf("La difference de ces valeurs est %.2f\n", a - b );
printf("Le produit de ces valeurs est %.2f\n", a * b);

  if (b != 0) {
        printf("le quotient de la divison est  %.2f\n", a / b);
    } else {
        printf("Erreur : Division par zéro.\n");
    }

}
