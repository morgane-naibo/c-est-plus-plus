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


void Catalogue::AfficherCatalogue() const
{
    list->AfficherListe();
}

bool Catalogue::TrouverTrajet(char* ville1, char* ville2)
{
    Maillon * current = (*list).GetHead();
    Trajet * currentT = ((*current).GetTrajet());
    while((*current).GetMaillonSuivant() != nullptr && (strcmp((*currentT).GetDepart(),ville1)!=0 || strcmp((*currentT).GetArrivee(),ville2)!=0))
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

bool Catalogue::ChercherTrajet(char* ville1, char* ville2,int index){
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

// type Ensemble::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//-------------------------------------------- Constructeurs - destructeur

Catalogue::Catalogue (Liste * catList) 
// Algorithme :
{
    #ifdef MAP
        cout << "Appel au constructeur de Catalogue" << endl;
    #endif
    list = catList;

} //----- Fin de Ensemble


Catalogue::~Catalogue ( )
{
    #ifdef MAP
        cout << "Appel au destructeur de Catalogue" << endl;
    #endif
} 
//----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

