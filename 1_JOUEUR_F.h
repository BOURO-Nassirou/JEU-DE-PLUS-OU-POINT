void facile1()
  {
    int nombreMystere = 0, nombreEntre = 0;
    const int MAX1 = 100, MIN1 = 1;
    // Génération du nombre aléatoire
    srand(time(NULL));
    nombreMystere = (rand() % (MAX1 - MIN1 + 1)) + MIN1;
    int compteur = 1;
    int a ,decompteur =9;
    while((nombreEntre != nombreMystere)&& compteur <= 10)
    {
      // On demande le nombre au joueur
      printf("Quel est le nombre ? ");
      scanf("%d", &nombreEntre);
      a = decompteur--;
      printf("il reste %d essaies\n",a);
      // On compare le nombre entré avec le nombre mystère
      if (nombreEntre < nombreMystere)
      printf("le  nombre %d est inferieur au nombre mystere\n\n", nombreEntre);
      else if (nombreEntre > nombreMystere)
      printf("le  nombre %d est superieure au nombre mystere\n\n", nombreEntre);
      else
      printf ("Bravo, vous avez trouve le nombre mystere  en %d coups!!!\n\n", compteur);
      compteur++;
    }
  }
