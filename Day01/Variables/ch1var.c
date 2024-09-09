#include <stdio.h>
#include <string.h>

int main(){

int age;
char nom[50];
char prenom[50];
char sexe[50];
char adresse_email[50];

printf("enter your age : ");
scanf("%d",&age);
printf("enter your first name : ");
scanf("%s",&prenom);
printf("enter your last name : ");
scanf("%s",&nom);
printf("enter your sexe : ");
scanf("%s",&sexe);
printf("enter your email adress : ");
scanf("%s",&adresse_email);

printf("your personal information is :\nyour age is : %d\nyour name is : %s %s \nyour sexe is : %s\nyour email adress is : %s",age,nom,prenom,sexe,adresse_email);

return 0;
}
