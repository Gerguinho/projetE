#include <stdio.h>
#include <stdlib.h>
#include "suite.h"

int main()
{
    int nombre;  //valeur a entrer par l'utilisateur
    int compte;
    menu_accueil();
    printf("faites votre choix\n");
    scanf("%d",&compte);
    gerer_compte(compte);
    //arreter le programme après la saisie de la valeur 
   

    return 0;
}