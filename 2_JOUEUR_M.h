void moyen2()
	{
		int nombreMystere = 0, nombreEntre = 0;
		const int MAX2 = 1000, MIN2 = 1;
        // insertion du nombre mystere a trouver par l'un des joueurs
        printf("joueur 1: entrer un nombre mystere compris entre 1 et 1000\n");
        scanf("%d", &nombreMystere);
        system("cls");
        int compteur = 1;
        int a ,decompteur =14;
        while((nombreEntre != nombreMystere)&& compteur <= 15)
        {
            // On demande le nombre
            printf("joueur 2 : Quel est le nombre ? \n");
            scanf("%d", &nombreEntre);
            a = decompteur--;
            printf("il reste %d essaies\n",a);
            // On compare le nombre entr� avec le nombre myst�re
            if (nombreEntre < nombreMystere)
            printf("le  nombre %d est inferieur au nombre mystere\n\n", nombreEntre);
            else if (nombreEntre > nombreMystere)
            printf("le  nombre %d est superieur au nombre mystere\n\n", nombreEntre);
            else
            printf ("Bravo, vous avez trouve le nombre mystere  en %d coups!!!\n\n", compteur);
            compteur++;
		}
	}
