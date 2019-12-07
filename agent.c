#include "agent.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
enum{
NOM,
PRENOM,
CIN,
MAIL,
TEL,
SEXE,
MDP,
TACHE,
DATE_NAISSANCE,
DATE_RECRUTEMENT,
COLUMNS
};
void Ajouter_agent(agent *x)
{
FILE *f;
f=fopen("agent.bin","ab");
if(f!=NULL)
{
fwrite(x,sizeof(agent),1,f);
fclose(f);
}
} 

void Afficher_agent(GtkWidget *liste,agent x)
{
  GtkCellRenderer *renderer;
  GtkTreeViewColumn *column;
  GtkTreeIter iter;
  GtkListStore *store;
       store=NULL;
  
           FILE*f;
     store=gtk_tree_view_get_model(GTK_TREE_VIEW(liste));
if(store==NULL)
{
          renderer = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes(" nom",renderer,"text",NOM, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
renderer = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes(" prenom",renderer,"text",PRENOM, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
renderer = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes(" cin",renderer,"text",CIN, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
renderer = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes(" mail",renderer,"text",MAIL, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
renderer = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes(" tel",renderer,"text",TEL, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
renderer = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes(" sexe",renderer,"text",SEXE, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
renderer = gtk_cell_renderer_text_new();
     
          column = gtk_tree_view_column_new_with_attributes(" mdp",renderer,"text",MDP, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
renderer = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes(" tache",renderer,"text",TACHE, NULL);
          

gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes("date de naissance",renderer,"text",DATE_NAISSANCE, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes(" date de recrutement",renderer,"text",DATE_RECRUTEMENT, NULL);
          gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

}
store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
      f= fopen("agent.bin","rb");

if(f!=NULL)
{     
                    while(!(feof(f)))
            {
fread(&x,sizeof(agent),1,f);
char r1[20];
char r2[20];
char r3[20];
char r4[20];
char r5[20];
char r6[20];
char dt_date_naissance[20]="";
char dt_date_recrutement[20]="";

sprintf(r1,"%d",x.date_naissance.jour);
strcat(dt_date_naissance,r1);
strcat(dt_date_naissance,"/");

sprintf(r2,"%d",x.date_naissance.mois);
strcat(dt_date_naissance,r2);
strcat(dt_date_naissance,"/");

sprintf(r3,"%d",x.date_naissance.annee);
strcat(dt_date_naissance,r3);

sprintf(r4,"%d",x.date_recrutement.jour);
strcat(dt_date_recrutement,r4);
strcat(dt_date_recrutement,"/");
sprintf(r5,"%d",x.date_recrutement.mois);
strcat(dt_date_recrutement,r5);
strcat(dt_date_recrutement,"/");
sprintf(r6,"%d",x.date_recrutement.annee);
strcat(dt_date_recrutement,r6);


     gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter, NOM, x.nom, PRENOM, x.prenom, CIN, x.cin,MAIL,x.mail,TEL,x.tel, MDP, x.mdp,TACHE,x.tache,DATE_NAISSANCE,dt_date_naissance,DATE_RECRUTEMENT,dt_date_recrutement, -1); 
            }
              fclose(f);
       gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));
       g_object_unref (store);
  }     
}



/*********Supp User***************/
void dell_user(char *nom)
{
agent x;
FILE *old;
FILE *new=NULL;
/*****create a temporary file *****/
new=fopen("agent_test.bin","wb");
fclose(new);
/******copy data from old to new *******/
old=fopen("agent.bin","rb");
new=fopen("agent_test.bin","ab");
/**************************/
int i=0;
while(!(feof(old)))
	{i++;
	fread(&x,1,sizeof(agent),old);
	}
fclose(old);
old=fopen("agent.bin","rb");
/******************************/
int j=0;
while(j<i-1)
	{j++;
	fread(&x,1,sizeof(agent),old);
	
	if(strcmp(x.nom,nom))
		{	
		fwrite(&x,sizeof(agent),1,new);
		}
	}
fclose(new);
fclose(old);
remove("agent.bin");//nfas5ou il fichier li9dim
rename("agent_test.bin","agent.bin");//enronomiw il fichier ejdid b esm li9dim bech ye5ou blastou
/*****Na3mlo Actualiser lil liste **************/

}












