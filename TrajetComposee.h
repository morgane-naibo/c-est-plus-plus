/*************************************************************************
                           TrajetCompose -  Cett classe permet d'instancier des 
			   trajets composés de plusieurs trajets simples. Elle 
			   utilise notre classe liste pour stocker les trajets 
			   intermédiares.
                             -------------------
    début                : $29/11/23$
    copyright            : Par $Eléonore/Martin/Morgane/Marc$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TrajetCompose> (fichier Ensemble.h) ----------------
#if ! defined ( TRAJETCOMPOSEE_H )
#define TRAJETCOMPOSEE_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
#include "Liste.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Ensemble>
//
//
//------------------------------------------------------------------------

class TrajetComposee : public Trajet
{
//----------------------------------------------------------------- PUBLIC


public:
//----------------------------------------------------- Méthodes publiques
    
    virtual void Afficher() const;
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // Aucun

 

    Liste *  getListInt();
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // Aucun



//-------------------------------------------- Constructeurs - destructeur

  TrajetComposee (char* , char*, Liste *);
    // Mode d'emploi :
    // Entrée : 1er paramètre = départ ; 2e paramètre = arrivee ; 3eme paramètre = liste des trajets intermédiaires
    // Contrat :
    //

    virtual ~TrajetComposee( ); 
    // Mode d'emploi :
    // 
    // Contrat :
    // 
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
Liste* trajetsInt; // Liste des trajets intermédiaires
};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // Trajet