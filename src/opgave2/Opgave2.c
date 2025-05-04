#include <stdio.h>

int main()
{
  double afstand, koersel, fradrag;

  // Indlæs gyldig afstand fra brugeren
  do
  {
    printf("Indtast afstand fra hjem til arbejde i km: ");
    scanf("%lf", &afstand);

    if (afstand < 0)
    {
      printf("Ugyldig værdi: Afstanden kan ikke være negativ. Prøv igen.\n");
    }
  } while (afstand < 0);

  // Udregn den samlede kørselsafstand per dag (ud og hjem)
  koersel = afstand * 2;
  fradrag = 0.0;

  if (koersel <= 24)
  {
    fradrag = 0.0;
  }
  else if (koersel <= 120)
  {
    fradrag = (koersel - 24) * 2.16;
  }
  else
  {
    fradrag = (96 * 2.16) + (koersel - 120) * 1.08;
  }

  // Udskriv resultat med to decimaler
  printf("Kørselsfradrag per dag: %.2f kr\n", fradrag);

  return 0;
}