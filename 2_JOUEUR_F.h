void facile2()
	{
		int nombreMystere = 0, nombreEntre = 0;
		const int MAX1 = 100, MIN1 = 1;
        // insertion du nombre mystere a trouver par l'un des joueurs
         printf("joueur 1: entrer un nombre mystere compris entre 1 et 100\n");
        scanf("%d", &nombreMystere);
        system("cls");
        int compteur = 1;
        int a ,decompteur =9;
        while((nombreEntre != nombreMystere)&& compteur <= 10)
        {
            // On demande le nombre
            printf("joueur 2 : Quel est le nombre ? \n");
            scanf("%d", &nombreEntre);
            a = decompteur--;
            printf("il reste %d essaies\n",a);
            // On compare le nombre entré avec le nombre mystère
            if (nombreEntre < nombreMystere)
            printf("le  nombre %d est inferieur au nombre mystere\n\n", nombreEntre);
            else if (nombreEntre > nombreMystere)
            printf("le  nombre %d est superieur au nombre mystere\n\n", nombreEntre);
            else
            printf ("Bravo, vous avez trouve le nombre mystere  en %d coups!!!\n\n", compteur);
            compteur++;
        }
	}
