#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#include <glib/gprintf.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "voiture.h"

#include "string.h"
ajout z;
void
on_ok_clicked (GtkButton *button,gpointer  user_data)
{
reserve r;
GtkWidget *input1;
GtkWidget *jr=lookup_widget(GTK_WIDGET(button),"jr");
GtkWidget *ms=lookup_widget(GTK_WIDGET(button),"ms");
GtkWidget *an=lookup_widget(GTK_WIDGET(button),"an");
GtkWidget *marque=lookup_widget(GTK_WIDGET(button),"marque");
GtkWidget *modele=lookup_widget(GTK_WIDGET(button),"modele");
GtkWidget *couleur=lookup_widget(GTK_WIDGET(button),"couleur");
input1=lookup_widget(GTK_WIDGET(button),"nbj");
strcpy(r.nbj,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(r.marque,gtk_combo_box_get_active_text(GTK_COMBO_BOX(marque)));
strcpy(r.modele,gtk_combo_box_get_active_text(GTK_COMBO_BOX(modele)));
strcpy(r.couleur,gtk_combo_box_get_active_text(GTK_COMBO_BOX(couleur)));

r.dt.jour=(int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jr));
r.dt.mois=(int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ms));
r.dt.annee=(int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(an));
ajouter_resvoit(&r);
}

void
on_afficher_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Ajouter_voiture;
GtkWidget *Fenetre;
GtkWidget *treeview1;
g_print("\npointeur sayé");
Ajouter_voiture=lookup_widget(GTK_WIDGET(button),"Ajouter_voiture");

Fenetre=lookup_widget(GTK_WIDGET(button),"Fenetre");
Fenetre=create_Fenetre();
gtk_widget_show(Fenetre);
g_print("\nAffichage sayé");
treeview1=lookup_widget(Fenetre,"treeview1");
g_print("\nEntring Affichier\n");
gtk_widget_destroy(Ajouter_voiture);
Afficher(treeview1,z);
}


void
on_quitter_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}





void
on_Ok_clicked                          (GtkButton  *button,gpointer   user_data)
{
ajout T;
GtkWidget *marque,*modele,*couleur,*prix;
GtkWidget *Ajouter_voiture;

//GtkWidget *jor,*mos,*An;
//jor=lookup_widget(GTK_WIDGET(button),"spinbutton1");
//mos=lookup_widget(GTK_WIDGET(button),"spinbutton2");
//An=lookup_widget(GTK_WIDGET(button),"spinbutton3");
Ajouter_voiture=lookup_widget(GTK_WIDGET(button),"Ajouter_voiture");
//Ajouter_voiture=create_Ajouter_voiture();
//gtk_widget_show(Ajouter_voiture);
marque=lookup_widget(GTK_WIDGET(button),"marque");
modele=lookup_widget(GTK_WIDGET(button),"modele");
couleur=lookup_widget(GTK_WIDGET(button),"couleur");
prix=lookup_widget(GTK_WIDGET(button),"prix");
strcpy(T.Marque,gtk_entry_get_text(GTK_ENTRY(marque)));
strcpy(T.Modele,gtk_entry_get_text(GTK_ENTRY(modele)));
strcpy(T.Couleur,gtk_entry_get_text(GTK_ENTRY(couleur)));
strcpy(T.Prix,gtk_entry_get_text(GTK_ENTRY(prix)));
//T.jr.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jor));
//T.jr.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mos));
//T.jr.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(An));
if((strcmp((gtk_entry_get_text(GTK_ENTRY(marque))),"")==0)||(strcmp((gtk_entry_get_text(GTK_ENTRY(modele))),"")==0)||(strcmp((gtk_entry_get_text(GTK_ENTRY(couleur))),"")==0)||(strcmp((gtk_entry_get_text(GTK_ENTRY(prix))),"")==0))
{
g_print("non");
GtkWidget *dialog2;
dialog2=create_dialog2() ;
gtk_widget_show(dialog2) ;
}
else{
strcpy(z.Marque,gtk_entry_get_text(GTK_ENTRY(marque)));
strcpy(z.Modele,gtk_entry_get_text(GTK_ENTRY(modele)));

strcpy(z.Couleur,gtk_entry_get_text(GTK_ENTRY(couleur)));
strcpy(z.Prix,gtk_entry_get_text(GTK_ENTRY(prix)));


GtkWidget *dialog1;
dialog1=create_dialog1() ;
gtk_widget_show(dialog1) ;
}
Ajouter_voit(&T);

}


void
on_Retour_clicked                      (GtkButton      *button,
                                        gpointer         user_data)
{GtkWidget *Ajouter_voiture, *Fenetre;
Fenetre=lookup_widget(GTK_WIDGET(button),"Fenetre");
gtk_widget_destroy(Fenetre);
Ajouter_voiture=create_Ajouter_voiture();
gtk_widget_show(Ajouter_voiture);
}


void
on_button_modifier_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
//GtkWidget *label=lookup_widget(GTK_WIDGET(button),"label16");
//gtk_label_set_text(GTK_LABEL(label),v.test);
dell_user((char *)z.Marque);
/*****Na3mlo Actualiser lil liste **************/
GtkWidget *Fenetre=lookup_widget(GTK_WIDGET(button),"Fenetre");

GtkWidget *Ajouter_voiture;
Ajouter_voiture=lookup_widget(GTK_WIDGET(button),("Ajouter_voiture"));

gtk_widget_destroy(Fenetre);
Ajouter_voiture=create_Ajouter_voiture();
gtk_widget_show(Ajouter_voiture);
GtkWidget *marque=lookup_widget(Ajouter_voiture,"marque");
GtkWidget *modele=lookup_widget(Ajouter_voiture,"modele");
GtkWidget *couleur=lookup_widget(Ajouter_voiture,"couleur");
GtkWidget *prix=lookup_widget(Ajouter_voiture,"prix");

gtk_entry_set_text(GTK_LABEL(marque),z.Marque);
gtk_entry_set_text(GTK_LABEL(modele),z.Modele);
gtk_entry_set_text(GTK_LABEL(couleur),z.Couleur);
gtk_entry_set_text(GTK_LABEL(prix),z.Prix);
}


void
on_button_supprimer_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

//GtkWidget *label=lookup_widget(GTK_WIDGET(button),"label16");
//gtk_label_set_text(GTK_LABEL(label),v.test);
dell_user((char *)z.Marque);
/*****Na3mlo Actualiser lil liste **************/
GtkWidget *Fenetre=lookup_widget(GTK_WIDGET(button),"Fenetre");
GtkWidget *treeview1;

treeview1=lookup_widget(GTK_WIDGET(Fenetre),"treeview1");

Afficher(treeview1,z);
gtk_widget_show(treeview1);
}




void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
gchar *str_data;
GtkListStore *list_store;
list_store=gtk_tree_view_get_model(treeview);
GtkTreeIter   iter;
  if (gtk_tree_model_get_iter(GTK_TREE_MODEL(list_store), &iter, path))
  {
  gtk_tree_model_get(GTK_TREE_MODEL(list_store),&iter, 0, &str_data, -1);
  }
strcpy(z.Marque,str_data);
}


void
on_closebutton1_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *dialog1=lookup_widget(GTK_WIDGET(button),("dialog1"));

gtk_widget_destroy(dialog1);
}


void
on_closebutton2_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *dialog2=lookup_widget(GTK_WIDGET(button),("dialog2"));

gtk_widget_destroy(dialog2);
}

