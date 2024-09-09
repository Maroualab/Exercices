#include <stdio.h>

int main(){

int C;

printf("donne la temperature en Celsius pour afficher l'etat de l'eau : ");
scanf("%d",&C);

if(C >= 100){
    printf("l'eau est gaz");
}else if(C >= 0 && C < 100){
    printf("l'eau est liquide");
}else{
    printf("l'eau est solide");
}

return 0;

}
