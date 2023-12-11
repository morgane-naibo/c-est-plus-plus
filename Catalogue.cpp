#include <stdio.h>
/*************************************************************************
                           Catalogue - 
			   Cette classe permet de stocker tous les trajets au travers 
			   d'une instance de la classe Liste. Elle n'a pas énormément
			   d'intérêt pour notre projet mais permettrait de rentrer plus 
			   d'informations que la liste de trajets si nous souhaitons 
			   améliorer notre projet.
                             -------------------
    début                : $29/11/23$
    copyright            : Par $Eleonore/Martin/Morgane/Marc$
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


void Catalogue::AfficherCatalogue() const
{
    list->AfficherListe();
}

bool Catalogue::TrouverTrajet(char* ville1, char* ville2)
// Algorithme : parcours la liste des trajets et renvoie s'il existe un trajet direct entre ville 1 et ville2.
{
    Maillon * current = (*list).GetHead();
    Trajet * currentT = ((*current).GetTrajet());
    while((*current).GetMaillonSuivant() != nullptr && (strcmp((*currentT).GetDepart(),ville1)!=0 || strcmp((*currentT).GetArrivee(),ville2)!=0))
    // boucle tant que le trajet direct n'a pas été trouvé
    {
        current= (*current).GetMaillonSuivant();
        currentT = ((*current).GetTrajet());
    }
    if (strcmp((*currentT).GetDepart(),ville1)==0 && strcmp((*currentT).GetArrivee(),ville2)==0)
    {
        cout <<"le trajet existe: ";
        (*currentT).Afficher();
        return true;
    }
    else
    {
        cout << "Un trajet direct (simple ou composé) n'existe pas dans le catalogue."<<endl;
        return false;
    }

}

bool Catalogue::ChercherTrajet(char* ville1, char* ville2,int index)
// Algorithme : methode de recherche récursive. On boucle tant qu'on n'a pas trouvé une suite de trajets permettant
// de partir de ville1 à ville2.
{
    Maillon * current = (*list).GetHead();
    Trajet * currentT = ((*current).GetTrajet());
    while(current != nullptr && index<100){
        if (strcmp((*currentT).GetDepart(),ville1)==0 && strcmp((*currentT).GetArrivee(),ville2)==0){
            cout << "Il est cependant possible d'aller du départ à l'arrivée en joignant plusieurs itinéraires du catalogue."<<endl;
            return true;
        }
        else if (strcmp((*currentT).GetDepart(),ville1)==0){
                if (ChercherTrajet((*currentT).GetArrivee(), ville2,index)) {
                    cout << (*currentT).GetArrivee()<<endl;
                    return true; 
                }
        }
        current= (*current).GetMaillonSuivant();
        currentT = ((*current).GetTrajet());
        index++;
    }
    return false;
}

 void Catalogue::AjouterTrajet(Maillon * nouveau)
 {
     list->Insertion(nouveau);
 }

//-------------------------------------------- Constructeurs - destructeur

Catalogue::Catalogue (Liste * catList) 
{
    #ifdef MAP
        cout << "Appel au constructeur de <Catalogue>" << endl;
    #endif
    list = catList;

}


Catalogue::~Catalogue ( )
{
    #ifdef MAP
        cout << "Appel au destructeur de <Catalogue>" << endl;
    #endif
} 
//----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

