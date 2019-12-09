#ifndef VOITURE_h_
#define VOITURE_h_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
typedef struct AJOUTER_VOITURE
{
int jour;
int mois;
int annee;
}ajv;
typedef struct AJOUTER
{
ajv jr;
char Prix[20];
char Marque[20];
char Modele[20];
char Couleur[20];
}ajout;
typedef struct date_de_reservation
{
int jour;
int mois;
int annee;
}date;

typedef struct reservation
{
date dt;
char marque[20];
char modele[20];
char couleur[20];
char nbj[20];

}reserve;
 
void ajouter_resvoit(reserve *r);
void Ajouter_voit(ajout *T);
void Afficher(GtkWidget *liste,ajout T);
void dell_user(char *Marque);
#endif
