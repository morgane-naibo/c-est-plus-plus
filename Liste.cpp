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
//#define MAP

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Trajet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Liste::AfficherListe() const
{
Maillon* parcours=this->head;
while (parcours!=nullptr){ 
    parcours->AfficherMaillon();
    parcours=(parcours)->GetMaillonSuivant();
}
}

void Liste::Insertion(Maillon* nouveau) 
{
Maillon* current = this->head;
while((*current).GetMaillonSuivant() != nullptr){
    current= (*current).GetMaillonSuivant();
}
current->ChangerPointeur(nouveau);
}

Maillon* Liste::GetHead() const{
    return head;
}

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

 //----- Fin de ~Liste


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

