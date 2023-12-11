/*************************************************************************
                           Trajet -  C'est une classe abstraite. Elle est mère 
			   des classes TrajetSimple et TrajetCompose. Elle permet
			   le partage d'attributs et de méthodes.
                             -------------------
    début                : $29/11/2023$
    copyright            : (C) $2023$ Par $Eleonore/Martin/Morgane/Marc$
    e-mail               : eleonore.dugast@insa-lyon.fr
*************************************************************************/

//---------- Réalisation de la classe <Traket> (fichier Traket.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
char* Trajet::GetDepart() const
// Algorithme : Renvoie le nom de la ville de départ du trajet.
{
     return(this->depart);
} 
//----- Fin de GetDepart

char* Trajet::GetArrivee() const
// Algorithme : Renvoie le nom de la ville d'arrivée du trajet.
{
     return(this->arrivee);
} 
//----- Fin de GetArrivee

//-------------------------------------------- Constructeurs - destructeur

Trajet::Trajet (char* ville1, char* ville2)
{
    #ifdef MAP
        cout << "Appel au constructeur de Trajet" << endl;
    #endif

    this->depart = new char[strlen(ville1)+1];
    this->arrivee = new char[strlen(ville2)+1];

    strcpy(this->depart, ville1);
    strcpy(this->arrivee, ville2);

} //----- Fin du constructeur


Trajet::~Trajet ( )
{
    #ifdef MAP
        cout << "Appel au destructeur de Trajet" << endl;
    #endif

    delete [] this->depart;
    delete [] this->arrivee;
} 
//----- Fin de du destructeur

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

