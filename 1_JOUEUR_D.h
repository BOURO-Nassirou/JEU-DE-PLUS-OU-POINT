 void difficile1()
  {
    int nombreMystere = 0, nombreEntre = 0;
    const int MAX3 = 10000, MIN3 = 1;
    // G�n�ration du nombre al�atoire
    srand(time(NULL));
    nombreMystere = (rand() % (MAX3 - MIN3 + 1)) + MIN3;
    int compteur = 1;
    int a ,decompteur =19;
    while((nombreEntre != nombreMystere)&& compteur <= 20)
    {
      // On demande le nombre au joueur
      printf("Quel est le nombre ? ");
      scanf("%d", &nombreEntre);
      a = decompteur--;
      printf("il reste %d essaies\n",a);
      // On compare le nombre entr� avec le nombre myst�re
      if (nombreEntre < nombreMystere)
      printf("le  nombre %d est inferieur au nombre mystere\n\n", nombreEntre);
      else if (nombreEntre > nombreMystere)
      printf("le  nombre %d est superieure au nombre mystere\n\n", nombreEntre);
      else
      printf ("Bravo, vous avez trouve le nombre mystere  en %d coups!!!\n\n", compteur);
      compteur++;
    }
  }
