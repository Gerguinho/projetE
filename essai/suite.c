#include<stdio.h>
#include"suite.h"
#include<conio.h>

 struct personne 
{
    char nom[50];
    char password[50];
    char password_verication[50];
    };
 char password[50];
 char password_verication[50];

void menu_accueil()
    {

        printf("\t \t \t \t \t \t MENU\n");
        printf("****************************************************\n");
        printf("1. vous connecter a votre compte\n ");
        printf("2. creer un nouveau compte\n");
        printf("3. Aide \n");
    } 

  void gerer_compte(int compte)
    {
        switch (compte)
        {
        case 1:
            vous_connecter_a_votre_compte();
            break;
        case 2:
            creer_un_nouveau_compte();
            break;
        case 3:
            Aide();
            break;
        default:
            menu_accueil();
            break;

        }
    }



    void vous_connecter_a_votre_compte()
    {
        struct personne user1 ;
        int i=0;
        int choix;
       

        printf("identification de  l'utilisateur\n");
        printf("-------------------------\n");
        printf("nom de l'utilisateur \n");
        fgets(user1.nom , 50 ,stdin);
        fgets(user1.nom , 50 ,stdin);
        printf("entrer votre mot de passe\n ");
        
        

        while (1)
        {
           password[i]=getch();
           if(password[i]=='\r'){
            break;
           }else
            if(password[i]=='\b')
            {
                if(i>0)
                {
                    i--;
                    printf("\b\b");
                 }
            }else{
            printf("*");
           }
           i++;
        }password[i]='\0';
        
        printf("\n Le mot de passe que vous avez saisi est %s ?\n",password);
        printf("1 pour oui \n 2 pour non\n");
        scanf("%d",& choix);
        if(choix ==1 ){
            printf("ok");
        }
         if(choix==2){
            printf("réessayer");
        }
        
    }
    void Aide(){

    }
    void creer_un_nouveau_compte(){
        struct personne user2;
        int i=0;
        int age;
        printf("nouveau utilisateur\n");
        printf("-------------------------------\n");
        printf("entrer votre nom d'utilisateur \n");
        fgets(user2.nom ,50 ,stdin);
        fgets(user2.nom ,50 ,stdin);
        printf("votre nom est %s",user2.nom);
        printf("entrer votre age ");
        scanf("%d",&age);
        printf("entrer un mot de passe\n");
        while (1)
        {
           password[i]=getch();
           if(password[i]=='\r'){
            break;
           }else
            if(password[i]=='\b')
            {
                if(i>0)
                {
                    i--;
                    printf("\b\b");
                 }
            }else{
            printf("*");
           }
           i++;
        }password[i]='\0';

        printf("\n verification du mot de passe\n ");
        while (1)
        {
           password_verication[i]=getch();
           if(password_verication[i]=='\r'){
            break;
           }else
            if(password_verication[i]=='\b')
            {
                if(i>0)
                {
                    i--;
                    printf("\b\b");
                 }
            }else{
            printf("*");
           }
           i++;
        }password_verication[i]='\0';
        if(password == password_verication){
            printf("bienvenu");
            if(password != password_verication){
            printf("vous avez comis(e) une erreur\n");
            }
        }

    }
    
  
    