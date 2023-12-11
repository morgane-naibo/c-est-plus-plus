/*************************************************************************
                           TrajetCompose -  Cett classe permet d'instancier des 
			   trajets composés de plusieurs trajets simples. Elle 
			   utilise notre classe liste pour stocker les trajets 
			   intermédiares.
                             -------------------
    début                : $29/11/23$
    copyright            : Par $Eléonore/Martin/Morgane/Marc$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Ensemble> (fichier Ensemble.cpp) ------------

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
{
    printf("Trajet Composé :\r\n");
    trajetsInt->AfficherListe();
}

//-------------------------------------------- Constructeurs - destructeur

TrajetComposee:: TrajetComposee(char* ville1, char* ville2, Liste *trajets) :Trajet(ville1, ville2)
// Algorithme :
{
    #ifdef MAP
        cout << "Appel au constructeur de <TrajetComposee>" << endl;
    #endif
    trajetsInt = trajets;
} //----- Fin de Ensemble


TrajetComposee::~TrajetComposee ()
{
    #ifdef MAP
        cout << "Appel au destructeur de <TrajetComposee>" << endl;
    #endif
}; 
//----- Fin de ~Trajet


/*void TrajetComposee::Afficher() const
{
    #ifdef MAP
        cout << "Appel à la méthode de <TrajetComposee>" << endl;
    #endif 
    
    cout << "allant de" << this->depart << "à" << this->arrivee <<endl;

}*/

Liste *  TrajetComposee::getListInt(){
    return trajetsInt;
}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

