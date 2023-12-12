using namespace std;
#include <iostream>
#include <cstring>
#include "Trajet.h"
#include "TrajetSimple.h"
#include "Maillon.h"
#include "Liste.h"
#include "TrajetComposee.h"
#include "Catalogue.h"

void error(void)
{
    printf("input error\r\n");
    exit(0);
}

int main()
{
    bool premier = true;
    Liste *trajets = nullptr;   
    Catalogue *catalogue = nullptr;

    char lecture[100];
    // if (fscanf(stdin,"%99s",lecture)!=1)
    // error();

    

    while (strcmp(lecture, "bye") != 0)
    {

        printf("menu\r\n");
        printf("Pour ajouter un trajet simple, tapez 'TS'\r\n");
        printf("Pour ajouter un trajet composé, tapez 'TC'\r\n");
        printf("Pour chercher un trajet dans le catalogue, tapez 'Chercher'\r\n");
        printf("Pour afficher l'état actuel du catalogue, tapez 'Print'\r\n");
        printf("Pour quitter, tapez 'bye'\r\n");
        memset(lecture, 0, strlen(lecture));
        if (fscanf(stdin, "%99s", lecture) != 1)
            error();

        // INSERTION DE TRAJETS SIMPLES
        if (strcmp(lecture, "TS") == 0)
        {
            char *ville1;
            char *ville2;
            char *mdt;
            printf("Ville de départ?\r\n");
            if (fscanf(stdin, "%99s", lecture) != 1)
                error();
            ville1 = strdup(lecture);
            printf("Ville d'arrivée?\r\n");
            if (fscanf(stdin, "%99s", lecture) != 1)
                error();
            ville2 = strdup(lecture);
            printf("Moyen de transport?\r\n");
            if (fscanf(stdin, "%99s", lecture) != 1)
                error();
            mdt = strdup(lecture);
            TrajetSimple *trajS = new TrajetSimple(ville1, ville2, mdt);
            Maillon *mts = new Maillon(trajS, nullptr);
            if (premier == true)
            {
                trajets = new Liste(mts);
                catalogue = new Catalogue(trajets);
                premier = false;
            }
            else
            {
                trajets->Insertion(mts);
            }
        }
        // INSERTION DE TRAJETS COMPOSES
        else if (strcmp(lecture, "TC") == 0)
        {
            int nbtrajets;
            char *villedep;
            char *villearr;
            printf("Nombre de trajets ? (ex : A->B->C : nombre de trajets = 2)\r\n");
            scanf("%d", &nbtrajets);
            printf("Préparez vous à rentrer chaque sous trajet individuellement : sur l'exemple précendent, rentrez A et B, puis B et C avec les moyens de transport associés.\r\n");
            // Pour le premier trajet simple du trajet composé
            char *ville1;
            char *ville2;
            char *mdt;
            printf("Ville de départ?\r\n");
            if (fscanf(stdin, "%99s", lecture) != 1)
                error();
            ville1 = strdup(lecture);
            printf("Ville d'arrivée?\r\n");
            if (fscanf(stdin, "%99s", lecture) != 1)
                error();
            ville2 = strdup(lecture);
            printf("Moyen de transport?\r\n");
            if (fscanf(stdin, "%99s", lecture) != 1)
                error();
            mdt = strdup(lecture);
            villedep = ville1;
            TrajetSimple* trajS= new TrajetSimple(ville1, ville2, mdt);
            Maillon *mti= new Maillon(trajS, nullptr);
            Liste *tc=new Liste(mti);

            // Pour tous les trajets simples intermédiaires
            for (int i = 0; i < nbtrajets - 2; i++)
            {
                char *ville1i;
                char *ville2i;
                char *mdti;
                printf("Ville de départ?\r\n");
                if (fscanf(stdin, "%99s", lecture) != 1)
                    error();
                ville1i = strdup(lecture);
                printf("Ville d'arrivée?\r\n");
                if (fscanf(stdin, "%99s", lecture) != 1)
                    error();
                ville2i = strdup(lecture);
                printf("Moyen de transport?\r\n");
                if (fscanf(stdin, "%99s", lecture) != 1)
                    error();
                mdti = strdup(lecture);
                TrajetSimple* trajS=new TrajetSimple(ville1i, ville2i, mdti);
                Maillon *mtii=new Maillon(trajS, nullptr);
                tc->Insertion(mtii);
            }

            // Pour le dernier trajet simple du trajet composé
            char *ville1a;
            char *ville2a;
            char *mdta;
            printf("Ville de départ?\r\n");
            if (fscanf(stdin, "%99s", lecture) != 1)
                error();
            ville1a = strdup(lecture);
            printf("Ville d'arrivée?\r\n");
            if (fscanf(stdin, "%99s", lecture) != 1)
                error();
            ville2a = strdup(lecture);
            printf("Moyen de transport?\r\n");
            if (fscanf(stdin, "%99s", lecture) != 1)
                error();
            mdta = strdup(lecture);
            villearr = ville2a;
            TrajetSimple* trajSa=new TrajetSimple(ville1a, ville2a, mdta);
            Maillon* mtia=new Maillon(trajSa, nullptr);
            tc->Insertion(mtia);
            TrajetComposee* trajC = new TrajetComposee(villedep, villearr, tc);
            Maillon* mtc= new Maillon(trajC, nullptr);
            if (premier == true)
            {
                trajets = new Liste(mtc);
                catalogue = new Catalogue(trajets);
                premier = false;
            }
            else
            {
                trajets->Insertion(mtc);
            }
        }
        else if (strcmp(lecture, "Chercher") == 0)
        {
            char *ville1;
            char *ville2;
            printf("Ville de départ?\r\n");
            if (fscanf(stdin, "%99s", lecture) != 1)
                error();
            ville1 = strdup(lecture);
            printf("Ville d'arrivée?\r\n");
            if (fscanf(stdin, "%99s", lecture) != 1)
                error();
            ville2 = strdup(lecture);
            if (catalogue != nullptr)
            {
                bool test = catalogue->TrouverTrajet(ville1, ville2);
                if (test == false){
                    int indexvisites[100];
                    for (int j =0; j< 100;j++){
                        indexvisites[j]=0;
                    }
                    catalogue->ChercherTrajet(ville1,ville2,indexvisites);
                }
        	}
       	}
        else if (strcmp(lecture, "Print") == 0) {
            if (catalogue != nullptr) {
                catalogue->AfficherCatalogue();
            } else {
                printf("Le catalogue est vide\r\n");
            }
        }

    }
    return 0;
}
