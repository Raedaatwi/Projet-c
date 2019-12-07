#ifndef AGENT_H_
#define AGENT_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>
typedef struct Date{
int jour;
int mois;
int annee;
}date;
typedef struct Agent{
char nom[20];
char prenom[20];
char cin[20];
char mail[50];
char tel[20];
char sexe[20];
date date_naissance;
date date_recrutement;
char mdp[20];
char tache[50];
}agent;
void Ajouter_agent(agent *x);
void Afficher_agent(GtkWidget *liste,agent x);
void dell_user(char *nom);




#endif
