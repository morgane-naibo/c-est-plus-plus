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
#include "Maillon.h"
#include "Trajet.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
#define MAP


void Maillon::AfficherMaillon() const
{
    #ifdef MAP
        cout << "Appel à la méthode de <TrajetSimple>" << endl;
    #endif 
    
    T->Afficher();

   
}
void Maillon::ChangerPointeur(Maillon* pointeur)
{
    pointeurSuivant = pointeur;
}
Maillon* Maillon::GetMaillon()
 {
    return(pointeurSuivant);
 }

// type Ensemble::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//-------------------------------------------- Constructeurs - destructeur

Maillon:: Maillon(Trajet* t1, Maillon* ptr=nullptr)
// Algorithme :
{
    #ifdef MAP
        cout << "Appel au constructeur de <Ensemble>" << endl;
    #endif
    T = t1;
    pointeurSuivant = ptr;
} 


Maillon::~Maillon ()
{
    #ifdef MAP
        cout << "Appel au destructeur de <Ensemble>" << endl;
    #endif
}; 
//----- Fin de ~Trajet

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

