#include <iostream>
#include <random>

using namespace std;
int nbS = -1, nbR= -1;
char userAns;
int const MIN = 1;
int const MAX = 100;

int main()
{


//first loop
do
 {
        //random numbers
        random_device rd;
        default_random_engine eng(rd());
        uniform_int_distribution<int> distr(MIN, MAX);

        nbR =distr(eng);

        int xtry=0;
        cout << "Devine le nombre entre 1 et 100" <<endl;
        cin >> nbS;
//Boucle tant que nbS ne soit égale à nbR
       while (nbS != nbR)
   {
           //si  nbs est plus petit que nbr indiquer que c'est plus
    if (nbS < nbR)
    {
        cout << "C'est plus!" <<endl;
        xtry++; }

        //Sinon si nbs est plus grand que nbr indiquer que c'est moins
    else if (nbS > nbR)
    {
        cout << "C'est moins!" <<endl;
        xtry++; }

    cin >> nbS;

   }
       //Fin du programme demande si rejouer. si oui recommence first loop
       cout << "Bravo tu as trouve en " << xtry << " coup(s)!" <<endl;
       cout << "voulez-vous rejouer ? (oui : y / non : n)" <<endl;
       cin >> userAns;
    }while (userAns != 'n');
    cout << "au revoir" <<endl;
    return 0;

 }



