#include "voiture.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
enum
{
MARQUE,
MODELE,
COULEUR,
PRIX,
COLUMNS
};

void ajouter_resvoit(reserve *r)
{FILE *f;
f=fopen("voiturereser.bin","rb");
if(f!=NULL)
{
fwrite(r,sizeof(reserve),1,f);
fclose(f);
}
}
void Ajouter_voit(ajout *T)
{FILE *f;
f=fopen("voiture.bin","ab");
if(f!=NULL)
{
fwrite(T,sizeof(ajout),1,f);
fclose(f);
}
}
void Afficher (GtkWidget *liste,ajout T)

{

GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
char Marque[20];
char Modele[20];
char Couleur[20];
int prix[20];
store=NULL;
FILE *f;
store=gtk_tree_view_get_model(GTK_TREE_VIEW(liste));
if (store==NULL)
{
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Marque", renderer,"text",MARQUE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

renderer=gtk_cell_renderer_text_new();
column= gtk_tree_view_column_new_with_attributes(" Modele", renderer,"text",MODELE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

renderer=gtk_cell_renderer_text_new();
column= gtk_tree_view_column_new_with_attributes(" Couleur", renderer,"text",COULEUR,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);
renderer=gtk_cell_renderer_text_new();
column= gtk_tree_view_column_new_with_attributes(" Prix", renderer,"text",PRIX,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);
}
store= gtk_list_store_new (COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f=fopen("voiture.bin","rb"); 
if(f!=NULL) 
{while(fread(&T,sizeof(ajout),1,f)==1)
{


gtk_list_store_append(store, &iter);
gtk_list_store_set(store,&iter,MARQUE,T.Marque,MODELE,T.Modele,COULEUR,T.Couleur,PRIX,T.Prix,-1);
}
}
fclose(f);

gtk_tree_view_set_model(GTK_TREE_VIEW (liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}
/*
typedef struct AJOUTER
{
ajv jr;
int Prix;
char Marque[20];
char Modele[20];
char Couleur[20];
}ajout;

}reserve;
*/

/*void modifier(char marque,char modele,char couleur,char prix)
{
FILE *f,*f1;
char var[50];char var1[50];char var2;char var3[50];
f=fopen("voiture","ab");
f1=fopen("","a+");
while(fscanf(f,sizeof())=1)
	{
if (strcmp(var3,prix)==0)

else
fprintf(f1,);
	}
fclose(f1);
fclose(f);
rename("src/tampo.txt","src/admin.txt");	
}*/
void dell_user(char *marque)
{
ajout T;
FILE *old;
FILE *new=NULL;

new=fopen("voiture_test.bin","wb");

fclose(new);
old=fopen("voiture.bin","rb");
new=fopen("voiture_test.bin","ab");

int i=0;
while(!(feof(old)))
{i++;
fread(&T,1,sizeof(ajout),old);}
fclose(old);
old=fopen("voiture.bin","rb");
int j=0;
while(j<i-1)
{
j++;
fread(&T,1,sizeof(ajout),old);
g_print("pseudo:%s \n",T.Marque);
if(strcmp(T.Marque,marque))
{
fwrite(&T,sizeof(ajout),1,new);
}
}
fclose(new);
fclose(old);
remove("voiture.bin");
rename("voiture_test.bin","voiture.bin");
}

