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
#include "Catalogue.h"
#include "Liste.h"
#include "Trajet.h"
#include "Maillon.h"
//------------------------------------------------------ Include personnel


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
#define MAP


void AfficherCatalogue() const
{
    list.AfficherListe();
}

bool TrouverTrajet(char* ville1, char* ville2)
{
    while(list.GetPointeurSuivant != nullptr && list.GetTrajet(GetDepart()) != ville1 && list.GetTrajet(GetArrivee()) != ville2)
    {
        list.MaillonSuivant();
    }

    if (list.GetPointeurSuivant == nullptr && list.GetTrajet(GetDepart()) != ville1 && list.GetTrajet(GetArrivee()) != ville2)
    {
        cout << "Le trajet n'existe pas dans catalogue"<<endl;
        return false;
    }
    else
    {
        cout <<"le trajet existe: ";
        (list.GetTrajet).Afficher();
        return true;
    }
}

 void AjouterTrajet(Maillon * nouveau)
 {
    
 }

// type Ensemble::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//-------------------------------------------- Constructeurs - destructeur

Catalogue::Catalogue (Liste catList) 
// Algorithme :
{
    #ifdef MAP
        cout << "Appel au constructeur de <Ensemble>" << endl;
    #endif
    list = catList;

} //----- Fin de Ensemble


Catalogue::~Catalogue ( )
{
    #ifdef MAP
        cout << "Appel au destructeur de <Ensemble>" << endl;
    #endif
} 
//----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

