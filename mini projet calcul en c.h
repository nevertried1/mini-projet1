#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   float nombre1,nombre2,nombre;
   int choix;
   int n;
   float num1,num2;
   double base,exposant;
   do{
    printf("1.addition.\n");
    printf("2.soustraction.\n");
    printf("3.devision.\n");
    printf("4.multiplication.\n");
    printf("5.moyenne.\n");
    printf("6.valeur_absolue.\n");
    printf("7.exponentiation.\n");
    printf("8.racine_carree.\n");
    printf("9.quitter.\n");
    printf("entrez votre choix : ");
    scanf("%d",&choix);
   switch(choix){
   case 1:
    printf("combien de nombre tu vas additionner ?");
    scanf("%d",&n);
    float somme = 0;
    for(int i = 0;i<n;i++){
        float nombre;
    printf("entrer le nombre :\n");
    scanf("%f",&nombre);
    somme +=nombre;
    }
    printf("la somme est :%.2f",somme);
    break;
   case 2:
       printf("entrez le deux nombre :\n");
       scanf("%f %f",&num1,&num2);
       printf("les resultats de cette soustraction est :%.2f\n",num1-num2);
        break;
    case 3:
    printf("entrez deux nombres : ");
    scanf("%f %f",num1,num2);
    if (num2!=0){
        printf("le resultat de la division est :%.2f\n",num1/num2);
    }else{
        printf("erreur: il ne peut pas deviser par zero.\n");
    }
    break;
    case 4:
    printf("combien des nombres tu vas multiplier ?");
    scanf("%d",&n);
    float produit = 1;
    for (int i = 0;i<n;i++){
        float nombre;
        printf("entrez le nombre %d :", i + 1);
        scanf("%f",&nombre);
        produit *=nombre;
    }
    printf("le produit est :%.2f",produit);
    break;
    case 5:
   printf("combien des nombres tu vas utiliser pour le moyenne ?");
   scanf("%d",&nombre);
   somme = 0;
   for (int i = 0;i<n;i++){
    float nombre;
    printf("entrez le nombre :%.2f",i+1);
    scanf("%f",&nombre);
    somme +=nombre;
   }
   printf("le moyenne est :%.2f\n",somme/n);
    break;
    case 6:
    printf("entrez un nombre :");
    scanf("%f",&nombre);
    float valeur_absolue = fabs(nombre);
    printf("la valeur absolue de %.2f est : %.2f\n",nombre,valeur_absolue);
    break;
    case 7:
    printf("entrez le base :");
    scanf("%lf",&base);
    printf("entrez l'exposant :");
    scanf("%lf",&exposant);
    double resulat = pow(base,exposant);
    printf("%.2lf^%d = %.2lf\n",base,exposant,resulat);
    break;
    case 8:
    printf("entrez nombre positif :");
    scanf("%lf",&nombre);
    if(nombre<0){
        printf("Erreur: impossi de calculer la racine carree d'un nombre negatif : ");
    }else  {
        double racine_carree = sqrt(nombre);
        printf("la racine carree de %.2lf est : %.2lf\n",nombre,racine_carree);
    }
    break;
    case 9:
    printf("finish !\n");
    break;
    default:
    printf("choix invalide.\n");
   }
}while(choix!=9);
    return 0;
}  
