/*************************************************************************
                           TrajetCompose -  Cett classe permet d'instancier des 
			   trajets composés de plusieurs trajets simples. Elle 
			   utilise notre classe liste pour stocker les trajets 
			   intermédiares.
                             -------------------
    début                : $29/11/23$
    copyright            : Par $Eléonore/Martin/Morgane/Marc$
    e-mail               : $eleonore.dugast@insa-lyon.fr$
*************************************************************************/

//---------- Réalisation de la classe <TrajetComposee> (fichier TrajetComposee.cpp) ---

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>


//------------------------------------------------------ Include personnel
#include "TrajetComposee.h"
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void TrajetComposee::Afficher() const
// Algorithme : Affiche les détails du trajet composé en appelant la méthode 
//AfficherListe() de la liste de trajets internes.
{
    printf("Trajet Composé :\r\n");
    trajetsInt->AfficherListe();
} 
//----- Fin de Afficher


//-------------------------------------------- Constructeurs - destructeur

TrajetComposee:: TrajetComposee(char* ville1, char* ville2, Liste *trajets) :Trajet(ville1, ville2)
{
    #ifdef MAP
        cout << "Appel au constructeur de <TrajetComposee>" << endl;
    #endif
    trajetsInt = trajets;
} //----- Fin de TrajetComposee (Destructeur)


TrajetComposee::~TrajetComposee ()
{
    #ifdef MAP
        cout << "Appel au destructeur de <TrajetComposee>" << endl;
    #endif
}; 
//----- Fin de ~Trajet (Destructeur)


/*void TrajetComposee::Afficher() const
{
    #ifdef MAP
        cout << "Appel à la méthode Afficher de <TrajetComposee>" << endl;
    #endif 
    
    cout << "allant de" << this->depart << "à" << this->arrivee <<endl;

}*/

Liste *  TrajetComposee::getListInt()
// Algorithme : Renvoie un pointeur vers la liste de trajets internes.
{
    return trajetsInt;
}
//----- Fin de getListInt


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

