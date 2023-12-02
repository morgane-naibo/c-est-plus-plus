
#include <iostream>
#include <cstring>
#include "Trajet.h"
#include "TrajetSimple.h"
#include "Maillon.h"


int main()
    {
        char * ville1= "L";
        char * ville2 = "T";
        char * moyTransport= "V";
        TrajetSimple t(ville1, ville2, moyTransport);

        t.Afficher();
        Trajet* ptr;
        ptr= &t;
        Maillon* ptr1= nullptr;
        Maillon m(ptr, ptr1);
        m.AfficherMaillon();

    return 0;
    }