#ifndef VOL_H_
#define VOL_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>
typedef struct date_vol
{
int jour;
int mois;
int annee;
}date;

typedef struct
{ 
date aller;
date retour;
char depart[20];
char arrivee[20];
int duree;
char classe[20];
char prix[20];
char test[1024];
}vol;

void ajouter (vol *v); 
void afficher (GtkWidget *liste,vol v);
void dell_user(char *depart);
#endif
