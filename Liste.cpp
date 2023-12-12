/*************************************************************************
                           Liste  -  
                           Cette classe represente une liste chainée de 
                           maillon de type Maillon
                             -------------------
    début                : $29/11/2023$
    copyright            : (C) $2023$ Par $Eleonore/Martin/Morgane/Marc$
    e-mail               : eleonore.dugast@insa-lyon.fr
*************************************************************************/

//---------- Réalisation de la classe <Liste> (fichier Liste.cpp) -----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Liste.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques



void Liste::AfficherListe() const
// Algorithme : Affiche les éléments de la liste
{
Maillon* parcours=this->head;
while (parcours!=nullptr){ 
    parcours->AfficherMaillon();
    parcours=(parcours)->GetMaillonSuivant();
}
}
//----- Fin de AfficherListe

void Liste::Insertion(Maillon* nouveau) 
// Algorithme : Insère un nouveau maillon à la fin de la liste.
{
Maillon* current = this->head;
while((*current).GetMaillonSuivant() != nullptr){
    current= (*current).GetMaillonSuivant();
}
current->ChangerPointeur(nouveau);
} //----- Fin de Insertion


Maillon* Liste::GetHead() const
// Algorithme : Renvoie le pointeur vers le premier maillon de la liste.
{
    return head;
} //----- Fin de Liste

//-------------------------------------------- Constructeurs - destructeur


Liste::Liste (Maillon* first)
{
#ifdef MAP
    cout << "Appel au constructeur de <Liste>" << endl;
#endif
this->head = first;
} //----- Fin du constructeur


Liste::~Liste ()
{

#ifdef MAP
    cout << "Appel au destructeur de <Liste>" << endl;
#endif
}
//----- Fin de ~Liste


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

