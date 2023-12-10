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
using namespace std;
#include <iostream>
#include <cstring>


//------------------------------------------------------ Include personnel
#include "TrajetComposee.h"
#include "Trajet.h"



//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
//#define MAP
void TrajetComposee::Afficher() const
{
    printf("Trajet Composé :\r\n");
    trajetsInt->AfficherListe();
}


// type Ensemble::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//-------------------------------------------- Constructeurs - destructeur

TrajetComposee:: TrajetComposee(char* ville1, char* ville2, Liste *trajets) :Trajet(ville1, ville2)
// Algorithme :
{
    #ifdef MAP
        cout << "Appel au constructeur de <TrajetComposee>" << endl;
    #endif
    trajetsInt = trajets;
} //----- Fin de Ensemble


TrajetComposee::~TrajetComposee ()
{
    #ifdef MAP
        cout << "Appel au destructeur de <TrajetComposee>" << endl;
    #endif
}; 
//----- Fin de ~Trajet


/*void TrajetComposee::Afficher() const
{
    #ifdef MAP
        cout << "Appel à la méthode de <TrajetComposee>" << endl;
    #endif 
    
    cout << "allant de" << this->depart << "à" << this->arrivee <<endl;

}*/

Liste *  TrajetComposee::getListInt(){
    return trajetsInt;
}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

