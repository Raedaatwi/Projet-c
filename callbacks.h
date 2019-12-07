#include <gtk/gtk.h>


void
on_ajouter_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_quitter_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_afficher_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_retour_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeviewagent_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_supprimer_clicked                   (GtkButton       *button,
                                        gpointer         user_data);
