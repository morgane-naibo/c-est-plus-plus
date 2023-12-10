/*************************************************************************
                           Ensemble  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Ensemble> (fichier Ensemble.cpp) ------------

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
//#define MAP
// type Ensemble::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//-------------------------------------------- Constructeurs - destructeur

TrajetSimple:: TrajetSimple(char* ville1, char* ville2, char* moyTrans) :Trajet(ville1, ville2)
// Algorithme :
{
    #ifdef MAP
        cout << "Appel au constructeur de <Ensemble>" << endl;
    #endif

    this->moyTransport = new char[strlen(moyTrans)+1];
    strcpy(moyTransport, moyTrans);
} //----- Fin de Ensemble


TrajetSimple::~TrajetSimple ()
{
    #ifdef MAP
        cout << "Appel au destructeur de <Ensemble>" << endl;
    #endif

    delete [] this->moyTransport;
}; 
//----- Fin de ~Trajet


void TrajetSimple::Afficher() const
{
    #ifdef MAP
        cout << "Appel à la méthode de <TrajetSimple>" << endl;
    #endif 
    
    cout << "De " << this->depart << " à " << this->arrivee << " en "<< moyTransport <<endl;

}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

