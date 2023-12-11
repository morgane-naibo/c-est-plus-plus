/*************************************************************************
                           Maillon  -  
                           La classe Maillon représente les maillons de 
                           la liste chainée.
                             -------------------
    début                : $29/11/23$
    copyright            : Par $Eleonore/Martin/Morgane/Marc$
*************************************************************************/

//---------- Réalisation de la classe <Maillon> (fichier Maillon.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Maillon.h"
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques


void Maillon::AfficherMaillon() const
// Algorithme : Cette méthode utilise la méthode Afficher() de l'objet Trajet 
// contenu dans le maillon pour afficher les détails du trajet.
{
    T->Afficher();
}
//----- Fin de AfficherMaillon

void Maillon::ChangerPointeur(Maillon * pointeur)
// Algorithme : Cette méthode permet de changer le pointeur suivant du maillon.
{
    pointeurSuivant = pointeur;
}
//----- Fin de ChangerMaillon

Maillon* Maillon::GetMaillonSuivant()
// Algorithme : Renvoie le pointeur vers le maillon suivant.
{
    return pointeurSuivant;
}
//----- Fin de GetMaillonSuivant

Trajet * Maillon::GetTrajet() const
// Algorithme : Renvoie le pointeur vers l'objet Trajet contenu dans le maillon.
{
    return T;
}
//----- Fin de GetTrajet

//-------------------------------------------- Constructeurs - destructeur

Maillon::Maillon (Trajet * T1, Maillon * pointeur )
{
#ifdef MAP
    cout << "Appel au constructeur de <Maillon>" << endl;
#endif
  
T = T1;
pointeurSuivant = pointeur;
} 


Maillon::~Maillon ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Maillon>" << endl;
#endif
} 

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

