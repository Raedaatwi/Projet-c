#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "agent.h"

agent x;
void
on_ajouter_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
agent x;
GtkWidget *nom=lookup_widget(GTK_WIDGET(button),"nom");
GtkWidget *prenom=lookup_widget(GTK_WIDGET(button),"prenom");
GtkWidget *cin=lookup_widget(GTK_WIDGET(button),"cin");
GtkWidget *mail=lookup_widget(GTK_WIDGET(button),"mail");
GtkWidget *tel=lookup_widget(GTK_WIDGET(button),"tel");
GtkWidget *jrn=lookup_widget(GTK_WIDGET(button),"jrn");
GtkWidget *msn=lookup_widget(GTK_WIDGET(button),"msn");
GtkWidget *ann=lookup_widget(GTK_WIDGET(button),"ann");
GtkWidget *jrr=lookup_widget(GTK_WIDGET(button),"jrr");
GtkWidget *msr=lookup_widget(GTK_WIDGET(button),"msr");
GtkWidget *anr=lookup_widget(GTK_WIDGET(button),"anr");
GtkWidget *mdp=lookup_widget(GTK_WIDGET(button),"mdp");
GtkWidget *mdp2=lookup_widget(GTK_WIDGET(button),"mdp2");
GtkWidget *tache=lookup_widget(GTK_WIDGET(button),"tache");
GtkWidget *sexe=lookup_widget(GTK_WIDGET(button),"sexe");


strcpy(x.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
strcpy(x.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));

strcpy(x.cin,gtk_entry_get_text(GTK_ENTRY(cin)));
strcpy(x.mail,gtk_entry_get_text(GTK_ENTRY(mail)));
strcpy(x.tel,gtk_entry_get_text(GTK_ENTRY(tel)));

strcpy(x.sexe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(sexe)));
x.date_naissance.jour= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jrn));
x.date_naissance.mois= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(msn));
x.date_naissance.annee= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ann));
x.date_recrutement.jour= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jrr));
x.date_recrutement.mois= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(msr));
x.date_recrutement.annee= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(anr));
strcpy(x.mdp,gtk_entry_get_text(GTK_ENTRY(mdp)));

strcpy(x.tache,gtk_combo_box_get_active_text(GTK_COMBO_BOX(tache)));
Ajouter_agent(&x);


}


void
on_quitter_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_main_quit() ; 
}


void
on_afficher_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{agent x;
GtkWidget *window1;
GtkWidget *afficher_agent;
GtkWidget *treeviewagent;
  window1=lookup_widget(GTK_WIDGET(button),("window1"));
  gtk_widget_destroy(window1);
  afficher_agent=lookup_widget(GTK_WIDGET(button),("afficher_agent"));
  afficher_agent=create_afficher_agent();
  gtk_widget_show(afficher_agent);
treeviewagent=lookup_widget(afficher_agent,"treeviewagent");
Afficher_agent(treeviewagent,x);


}


void
on_retour_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window1, *afficher_agent;
gtk_widget_destroy(window1);
window1=create_window1();
gtk_widget_show(window1);
}


void
on_treeviewagent_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{gchar *str_data;
GtkListStore *list_store;
list_store=gtk_tree_view_get_model(treeview);
GtkTreeIter   iter;
  if (gtk_tree_model_get_iter(GTK_TREE_MODEL(list_store), &iter, path))
  {
  gtk_tree_model_get(GTK_TREE_MODEL(list_store),&iter, 0, &str_data, -1);
  }
strcpy(x.nom,str_data);

}


void
on_supprimer_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
//GtkWidget *label=lookup_widget(GTK_WIDGET(button),"label16");
//gtk_label_set_text(GTK_LABEL(label),v.test);
dell_user((char *)x.nom);
/*****Na3mlo Actualiser lil liste **************/
GtkWidget *afficher_agent=lookup_widget(GTK_WIDGET(button),"afficher_agent");
GtkWidget *treeviewagent;

treeviewagent=lookup_widget(afficher_agent,"treeviewagent");
Afficher_agent(treeviewagent,x);
gtk_widget_show(treeviewagent);
}

