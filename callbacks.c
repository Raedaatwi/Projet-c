#ifdef HAVE_CONFIG_H
#  include <config.h>

#endif

#include <gtk/gtk.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "vol.h"
vol a;
void
on_appliquer_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
vol v;
GtkWidget *dd=lookup_widget(GTK_WIDGET(button),"dd");
GtkWidget *aa=lookup_widget(GTK_WIDGET(button),"aa");
GtkWidget *jr=lookup_widget(GTK_WIDGET(button),"jr");
GtkWidget *ms=lookup_widget(GTK_WIDGET(button),"ms");
GtkWidget *an=lookup_widget(GTK_WIDGET(button),"an");
GtkWidget *jr1=lookup_widget(GTK_WIDGET(button),"jr1");
GtkWidget *ms1=lookup_widget(GTK_WIDGET(button),"ms1");
GtkWidget *an1=lookup_widget(GTK_WIDGET(button),"an1");
GtkWidget *d=lookup_widget(GTK_WIDGET(button),"d");
GtkWidget *classe=lookup_widget(GTK_WIDGET(button),"classe");
GtkWidget *prix=lookup_widget(GTK_WIDGET(button),"prix");
strcpy(v.depart,gtk_entry_get_text(GTK_ENTRY(dd)));
strcpy(v.arrivee,gtk_entry_get_text(GTK_ENTRY(aa)));
v.aller.jour= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jr));
v.aller.mois= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ms));
v.aller.annee= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(an));

v.retour.jour= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jr1));
v.retour.mois= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ms1));
v.retour.annee= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(an1));
v.duree= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(d));
strcpy(v.prix,gtk_entry_get_text(GTK_ENTRY(prix)));

strcpy(v.classe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(classe)));

ajouter(&v);
}


void
on_quitter_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}

void
on_ajout_clicked                       (GtkButton       *button,
                                        gpointer         user_data)
{

}
void
on_afficher_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
vol v;
GtkWidget *window2=lookup_widget(GTK_WIDGET(button),"window2");
GtkWidget *window3=lookup_widget(GTK_WIDGET(button),"window3");

GtkWidget *affich;
gtk_widget_destroy(window2);
window3=create_window3();
gtk_widget_show(window3);

affich=lookup_widget(window3,"affich");
afficher (affich,v);

}


void
on_retour_aj_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window2=lookup_widget(GTK_WIDGET(button),"window2");
GtkWidget *window3=lookup_widget(GTK_WIDGET(button),"window3");
gtk_widget_destroy(window3);
window2=create_window2();
gtk_widget_show(window2);

}


void
on_affich_row_activated                (GtkTreeView     *treeview,
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
strcpy(a.depart,str_data);
}


void
on_supp_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
//GtkWidget *label=lookup_widget(GTK_WIDGET(button),"label16");
//gtk_label_set_text(GTK_LABEL(label),v.test);
dell_user((char *)a.depart);
/*****Na3mlo Actualiser lil liste **************/
GtkWidget *window3=lookup_widget(GTK_WIDGET(button),"window3");
GtkWidget *affich;

affich=lookup_widget(window3,"affich");

afficher(affich,a);
gtk_widget_show(affich);
}

