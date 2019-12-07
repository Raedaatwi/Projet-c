#include <gtk/gtk.h>


void
on_button3_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button4_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_appliquer_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_quitter_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_ajout_clicked                       (GtkButton       *button,
                                        gpointer         user_data);

void
on_quitter_affi_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_afficher_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_retour_aj_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_affich_row_activated                (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_supp_clicked                        (GtkButton       *button,
                                        gpointer         user_data);
