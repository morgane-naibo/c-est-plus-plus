/*************************************************************************
                           Maillon  -  
                           La classe Maillon représente les maillons de 
                           la liste chainée. Un maillon est composé d'un
                           objet de type Trajet et d'un pointeur vers le
                           maillon suivant.
                             -------------------
    début                : $29/11/23$
    copyright            : Par $Eleonore/Martin/Morgane/Marc$
*************************************************************************/

//---------- Interface de la classe <Xxx> (fichier Xxx.h) ----------------
#if ! defined ( MAILLON_H )
#define MAILLON_H

#include "Trajet.h"

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

class Maillon
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void AfficherMaillon() const;
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // Aucun

    void ChangerPointeur(Maillon * pointeur);
    // Mode d'emploi :
    // Entrée: pointeur sera le pointeur qui sera mis vers le pointeur suivant.
    // pointeur.
    // Contrat :
    // Aucun
    
    Maillon* GetMaillonSuivant ();
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // Aucun

    Trajet* GetTrajet() const;
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // Aucun

//-------------------------------------------- Constructeurs - destructeur


    Maillon (Trajet * T1, Maillon * pointeur =nullptr);
    // Mode d'emploi :
    // Entrée : T1 est la donnée dans le maillon. pointeur représente le pointeur 
    // suivant de la liste chainé.  
    // Contrat :
    // ptr est null s'il n'y a pas de pointeur suivant.

    virtual ~Maillon ( );
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // Aucun

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
Trajet * T;
Maillon * pointeurSuivant;
};

//-------------------------------- Autres définitions dépendantes de <Xxx>

#endif // XXX_H

