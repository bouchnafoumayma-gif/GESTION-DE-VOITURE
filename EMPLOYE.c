#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employe.h"

int verifierConnexion(const char* login_saisie, const char* motDePasse) {
    int id;
    char nom[30], prenom[30], mdp[30], tache[30];

    FILE *fE = fopen("EMPLOYE.txt", "r");
    if (fE == NULL) {
        printf("Erreur d'ouverture du fichier\n");
        exit(1);
    }

    while (fscanf(fE, "%d %s %s %s %s", &id, nom, prenom, mdp, tache) == 5) {
        if (atoi(login_saisie) == id && strcmp(mdp, motDePasse) == 0) {
            fclose(fE);
            return 1;
        }
    }




    fclose(fE);
    return 0; // Aucun identifiant correspondant
}

int main() {
    char login[10];
    char motdepasse[30];

    printf("********************* Connecte en tant qu employe *****************************\n");
    printf("VOTRE IDENTIFIANT : ");
    scanf("%s", login);  // On lit l'ID comme chaîne pour le passer à la fonction

    printf("VOTRE MOT DE PASSE : ");
    scanf("%s", motdepasse);

    // Vérification de connexion
    if (verifierConnexion(login, motdepasse)) {
        printf("? Connexion reussie !\n");
    } else {
        printf("? ID ou mot de passe incorrect.\n");
    }

    return 0;
}
