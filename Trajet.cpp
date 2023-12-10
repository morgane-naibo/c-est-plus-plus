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
#include "Trajet.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
#define MAP
// type Ensemble::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
    char* Trajet::GetDepart() const
    {
        return(this->depart);
    }

    char* Trajet::GetArrivee() const
    {
         return(this->arrivee);
    }

//-------------------------------------------- Constructeurs - destructeur

Trajet::Trajet (char* ville1, char* ville2)
// Algorithme :
{
    #ifdef MAP
        cout << "Appel au constructeur de Trajet" << endl;
    #endif

    this->depart = new char[strlen(ville1)+1];
    this->arrivee = new char[strlen(ville2)+1];

    strcpy(this->depart, ville1);
    strcpy(this->arrivee, ville2);

} //----- Fin de Ensemble


Trajet::~Trajet ( )
{
    #ifdef MAP
        cout << "Appel au destructeur de Trajet" << endl;
    #endif

    delete [] this->depart;
    delete [] this->arrivee;
} 
//----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

