#include <stdio.h>
#include <string.h>
#include "employe.h"

int main() {
    char login[30];
    char motdepasse[30];
    int result;

    afficherCadre("DONNER VOTRE IDENTIFIANT !");
    scanf("%s", login);

    afficherCadre("DONNER VOTRE MOT DE PASSE");
    scanf("%s", motdepasse);

    result = oumayma(login, motdepasse);

    if (result == 1) {
        afficherCadre("Connexion reussie en tant qu'EMPLOYE !");
    }
    else if (result == 2) {
        afficherCadre("Connexion reussie en tant qu'ADMIN !");
        gestionDesEmployee();
    }
    else {
        afficherCadre("ID OU MOT DE PASSE INCORRECT !");
    }

    return 0;
}

