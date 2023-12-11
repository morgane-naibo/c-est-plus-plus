/*************************************************************************
                           TrajetSimple -  Cette classe permet d'instancier 
			   des trajets se faisant en une seule étape.
                             -------------------
    début                : $22/11/23$
    copyright            : par $Eleonore/Martin/Morgane/Marc$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TrajetSimple> (fichier TrajetSimple.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void TrajetSimple::Afficher() const
// Algorithme : affiche les détails du trajet simple, y compris les noms 
//des villes de départ et d'arrivée ainsi que le moyen de transport.
{
    #ifdef MAP
        cout << "Appel à la méthode de <TrajetSimple>" << endl;
    #endif 
    
    cout << "De " << this->depart << " à " << this->arrivee << " en "<< moyTransport <<endl;

}
//----- Fin de Afficher


//-------------------------------------------- Constructeurs - destructeur

TrajetSimple:: TrajetSimple(char* ville1, char* ville2, char* moyTrans) :Trajet(ville1, ville2)
{
    #ifdef MAP
        cout << "Appel au constructeur de <TrajetSimple>" << endl;
    #endif

    this->moyTransport = new char[strlen(moyTrans)+1];
    strcpy(moyTransport, moyTrans);
} 
//----- Fin de TrajetSimple


TrajetSimple::~TrajetSimple ()
{
    #ifdef MAP
        cout << "Appel au destructeur de <TrajetSimple>" << endl;
    #endif

    delete [] this->moyTransport;
}; 
//----- Fin de ~Trajet

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

