/*************************************************************************
                           Trajet -  C'est une classe abstraite. Elle est mère 
			   des classes TrajetSimple et TrajetCompose. Elle permet
			   le partage d'attributs et de méthodes.
                             -------------------
    début                : $22/11/23$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Ensemble> (fichier Ensemble.h) ----------------
#if ! defined ( TRAJET_H )
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Ensemble>
//
//
//------------------------------------------------------------------------

class Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    virtual void Afficher() const = 0;
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // C'est une méthode virtuelle.Elle rend la classe abstraite.
    char* GetDepart() const;
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // Aucun
    char* GetArrivee() const;
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // Aucun



//------------------------------------------------- Surcharge d'opérateurs
   Trajet & operator = ( const Trajet & unTrajet );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur

   Trajet (char* ville1, char* ville2);

    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Trajet ( ); 
    // Mode d'emploi :
    //
    // Contrat :
    //
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées


//----------------------------------------------------- Attributs protégés
char* depart;
char* arrivee;
};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // Trajet

