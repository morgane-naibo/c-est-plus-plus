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
    // 
    // Contrat :
    // Aucun
    
    Maillon* GetMaillonSuivant ();
    // Mode d'emploi :
    //
    // Contrat :
    //

    Trajet* GetTrajet() const;
    // Mode d'emploi :
    //
    // Contrat :
    //

//-------------------------------------------- Constructeurs - destructeur


    Maillon (Trajet * T1, Maillon * pointeur =nullptr);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Maillon ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
Trajet * T;
Maillon * pointeurSuivant;
};

//-------------------------------- Autres définitions dépendantes de <Xxx>

#endif // XXX_H

