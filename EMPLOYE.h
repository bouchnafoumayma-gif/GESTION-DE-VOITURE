#ifndef EMPLOYE_H
#define EMPLOYE_H

typedef struct {
	char login[50];
	char motDePasse[50];
	
}Employe;

int verifierConnexion(const char* login, const char* motDePasse);

#endif
