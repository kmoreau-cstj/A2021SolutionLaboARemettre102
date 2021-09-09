//But:�crire un programme pour calculer le montant qu'un individu devra d�bourser pour son voyage dans une automobile lou�e.
//Auteur:Lo�c Brunet
//Date:2021-09-09

#include <iostream>

void main()
{
   // D�claration des constantes pour m�moriser des valeurs num�riques qui peuvent changer 
   // dans le temps mais pas lors de l'ex�cution du programme : � l'int�rieur du programme elles ont toujours la m�me valeur
   const double LOCATION = 45;
   const int NB_KM_GRATUIT = 250;
   const double CONSO = 7.6;
   const double COUT_KM_SUPPL = 0.05;
   const double COUT_LITRE_ESSENCE = 1.35;


   // D�claration des variables
   int NbKilometre;
   int Nbjour;
   double Coutlocation;
   int Kilometregratuit;
   double coutKilometreplus;
   double coutessence;
   double total;

   std::cout << "Veuillez entrer le nombre de kilom�tr: ";
   std::cin >> NbKilometre;

   std::cout << "Veuillez entrer le nombre de jour :";
   std::cin >> Nbjour;

   if (Nbjour > 0 && NbKilometre > 0)
   {


      // calculer le cout de la location de la voiture

      Coutlocation = LOCATION * Nbjour;

      // calculer kilometre supr�mentaire

      Kilometregratuit = NB_KM_GRATUIT * Nbjour;

      // si le nombre de kilometre parcouru est plus grand que le nombre kilometre gratuit on doit calculer le montant des kilometre en plus

      if (NbKilometre > Kilometregratuit)
      {
         coutKilometreplus = (NbKilometre - Kilometregratuit) * COUT_KM_SUPPL;

      }

      else
      {
         coutKilometreplus = 0;
      }
      // calcule le cout en essence

      coutessence = COUT_LITRE_ESSENCE * NbKilometre / 100 * CONSO;

      total = coutessence + coutKilometreplus + Coutlocation;

      std::cout << "le cout total du voyage :" << total;
   }
   else
   {
      std::cout << "erreur";
   }
   system("pause");
}
// plan de teste
// nombre de kilometre | nombre de jour | total
//  0                       0               0
//500                       3               3*45+500/100*7.6*1.35=186.3
//1000                      3               3*45+1000/100*7.6*1.35+250*0.05=250.1
//-1                        -1              0

