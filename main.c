#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "PREPROCUSSEUR.h"
int main()
{
    printf("******************JEU DE PLUS OU MOINS*********************\n\n");

    //déclaration des variables
    int continuerpartie = 1,retourMenu= 1,nombreMystere = 0, nombreEntre = 0; //initialisation de la  variable
    int menu , joueur , niveau;
    while (retourMenu)// choix pour continuer la partie
    {
        //affichage du menu principal
	    printf("MENU\n");
	    printf("1- Jouer\n");
	    printf("2- Regle du jeu\n");
	    printf("3- Plus grand score\n");
	    printf("0- Quitter\n");
	    scanf("%d", &menu);// récupération de la saisie de l'utilisateur
        switch(menu)// choix de menu et de sous-menu
	    {
	    	case 1://JOUER
            {
                while (continuerpartie)// choix pour continuer la partie
                {
                    printf("1 Joueur\n");
                    printf("2 Joueur\n");
                    scanf("%d", &joueur);

                    switch(joueur)//choix du nombre de joueurs et de niveau(sous-menu)
                    {
                        case 1:// 1 joueur
                        {
                            //les niveau de difficultés
                            printf("Niveau 1 facile: 1-100\n");
                            printf("Niveau 2 moyen: 1-1000\n");
                            printf("Niveau 3 dificile: 1-10000\n");
                            scanf("%d", &niveau);
                            if (niveau == 1)//condition sur chaque niveau
                            {
                                facile1() ;
                                printf("voulez vous continuer? tapez 1 pour oui et 0 pour non\n");
                                scanf ("%d", &continuerpartie);
                                system("cls");
                            }
                            else if (niveau == 2)
                            {
                                moyen1();
                                printf("voulez vous continuer? tapez 1 pour oui et 0 pour non\n");
                                scanf ("%d", &continuerpartie);
                                system("cls");//efface la console
                            }
                            else
                            {
                                difficile1();
                                printf("voulez vous continuer? tapez 1 pour oui et 0 pour non\n");
                                scanf ("%d", &continuerpartie);
                                system("cls");//efface la console
                            }

                            if (continuerpartie) printf ("vous avez choisi de continuerla partie\n");
                            else printf("vous avez choisi d'arreter la partie.");
                            system("cls");//efface la console
                        }break;
                        case 2:// 2 joueur
                        {
                            printf("Niveau 1: 1-100\n");
                            printf("Niveau 2: 1-1000\n");
                            printf("Niveau 3: 1-10000\n");
                            scanf("%d", &niveau);
                            if (niveau == 1)
                            {
                                facile2();
                                printf("voulez vous continuer? tapez 1 pour oui et 0 pour non\n");//demande si l'utilasteur veux continuer
                                scanf ("%d", &continuerpartie);//recupreation de la saisi
                                system("cls");//efface la console
                            }
                            else if (niveau == 2)
                            {
                                moyen2();
                                printf("voulez vous continuer? tapez 1 pour oui et 0 pour non\n");
                                scanf ("%d", &continuerpartie);
                                system("cls");//efface la console
                            }
                            else
                            {
                                difficile2();
                                printf("voulez vous continuer? tapez 1 pour oui et 0 pour non\n");
                                scanf ("%d", &continuerpartie);
                                system("cls");//efface la console
                            }
                                if (continuerpartie) printf ("vous avez choisi de continuerla partie\n");
                                else
                                {
                                    printf("vous avez choisi d'arreter la partie.\n");
                                    system("cls");//efface la console
                                }
                        }break;
                    }
                }
                printf("voulez vous revenir au menu ? tapez 1 pour oui et 0 pour non\n");
                scanf ("%d", &retourMenu);
                system("cls");//efface la console
            }break;
            case 2:
            {
                printf("Le but du jeu est de vous faire deviner un nombre compris dans un intervalle\n correspondant au niveau de difficulte du jeu. Le jeu a trois niveaux de difficulte:\n Facile: 1 - 100\n Moyen: 1 - 1000\n Difficile: 1 - 10000\n L'ordinateur tire au sort un nombre compris dans l’intervalle. L'ordinateur compare le nombre que vous avez entrer\n  avec le nombre  mystere qu'il a tire au sort et vous dit si le nombre mystere est\n superieur ou inferieur a celui que vous avez entrez. Dans ce cas, le joueur devra entrer un autre\n nombre jusqu’a ce qu'il trouve le nombre mystere . Le but du jeu, bien sur, est de trouver le nombre mystere en un minimum de coups.\n");
        		printf("voulez vous revenir au menu ? tapez  1 pour retourner et 0 pour non\n");
                scanf ("%d", &retourMenu);
                system("cls");//efface la console
            }break;
            case 3:
            {
                printf("sauvegarde du plus grand score\n");
                printf("voulez vous revenir au menu ? tapez 1 pour oui et 0 pour non\n");
                scanf ("%d", &retourMenu);
                system("cls");//efface la console
            }break;
            case 0:
            {
                printf("voulez vous revenir au menu ? tapez 1 pour oui et 0 pour non\n");
                scanf ("%d", &retourMenu);
            }break;
            default:
                printf("Menu invalide\n");
                printf("voulez vous revenir au menu ? tapez 1 pour oui et 0 pour non\n");
                scanf ("%d", &retourMenu);
               // system("cls");//efface la console
        }
        if (retourMenu)
        {
            printf ("vous avez choisi de retourner au menu principal\n");
            system("cls");//efface la conso
        }
        else printf("aurevoir");
    }
    return 0;
}
