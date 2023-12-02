/*************************************************************************
                           Trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Liste> (fichier Ensemble.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Liste.h"

//------------------------------------------------------------- Constantes
#define MAP

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Trajet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//-------------------------------------------- Constructeurs - destructeur


Liste::Liste (Maillon* first)
// Algorithme :
//
{
this->head = first;

#ifdef MAP
    cout << "Appel au constructeur de <Liste>" << endl;
#endif
} //----- Fin de Liste


Liste::~Liste ( )
// Algorithme :
//
{

#ifdef MAP
    cout << "Appel au destructeur de <Liste>" << endl;
#endif
}

void Liste:: AfficherListe() const
{
Maillon* parcours=this->head;
while (parcours!=nullptr){ 
    parcours->AfficherMaillon();
    parcours=(parcours)->GetMaillonSuivant();
}
}

void Liste:: Insertion(Maillon* nouveau) 
{
if (nouveau!=nullptr){
    Maillon* tmp = this->head;
    this->head = nouveau;
    nouveau->ChangerPointeur(tmp);
}

}
 //----- Fin de ~Liste


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

