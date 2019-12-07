/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkWidget *label1;
  GtkWidget *nom;
  GtkWidget *prenom;
  GtkWidget *cin;
  GtkWidget *mail;
  GtkWidget *tel;
  GtkWidget *mdp2;
  GtkWidget *mdp;
  GtkWidget *label2;
  GtkWidget *label3;
  GtkWidget *label4;
  GtkWidget *label5;
  GtkWidget *label6;
  GtkObject *jrn_adj;
  GtkWidget *jrn;
  GtkObject *msn_adj;
  GtkWidget *msn;
  GtkObject *ann_adj;
  GtkWidget *ann;
  GtkObject *jrr_adj;
  GtkWidget *jrr;
  GtkObject *msr_adj;
  GtkWidget *msr;
  GtkObject *anr_adj;
  GtkWidget *anr;
  GtkWidget *label9;
  GtkWidget *label8;
  GtkWidget *label7;
  GtkWidget *label15;
  GtkWidget *label16;
  GtkWidget *label14;
  GtkWidget *label13;
  GtkWidget *label10;
  GtkWidget *label18;
  GtkWidget *label11;
  GtkWidget *label12;
  GtkWidget *ajouter;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label20;
  GtkWidget *quitter;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label19;
  GtkWidget *tache;
  GtkWidget *label24;
  GtkWidget *sexe;
  GtkWidget *afficher;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label21;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  label1 = gtk_label_new (_("Ajout Agents"));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 144, 8);
  gtk_widget_set_size_request (label1, 104, 24);

  nom = gtk_entry_new ();
  gtk_widget_show (nom);
  gtk_fixed_put (GTK_FIXED (fixed1), nom, 136, 40);
  gtk_widget_set_size_request (nom, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (nom), 8226);

  prenom = gtk_entry_new ();
  gtk_widget_show (prenom);
  gtk_fixed_put (GTK_FIXED (fixed1), prenom, 136, 80);
  gtk_widget_set_size_request (prenom, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (prenom), 8226);

  cin = gtk_entry_new ();
  gtk_widget_show (cin);
  gtk_fixed_put (GTK_FIXED (fixed1), cin, 136, 120);
  gtk_widget_set_size_request (cin, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (cin), 8226);

  mail = gtk_entry_new ();
  gtk_widget_show (mail);
  gtk_fixed_put (GTK_FIXED (fixed1), mail, 136, 160);
  gtk_widget_set_size_request (mail, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (mail), 8226);

  tel = gtk_entry_new ();
  gtk_widget_show (tel);
  gtk_fixed_put (GTK_FIXED (fixed1), tel, 136, 200);
  gtk_widget_set_size_request (tel, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (tel), 8226);

  mdp2 = gtk_entry_new ();
  gtk_widget_show (mdp2);
  gtk_fixed_put (GTK_FIXED (fixed1), mdp2, 160, 504);
  gtk_widget_set_size_request (mdp2, 160, 27);
  gtk_entry_set_visibility (GTK_ENTRY (mdp2), FALSE);

  mdp = gtk_entry_new ();
  gtk_widget_show (mdp);
  gtk_fixed_put (GTK_FIXED (fixed1), mdp, 160, 456);
  gtk_widget_set_size_request (mdp, 160, 27);
  gtk_entry_set_visibility (GTK_ENTRY (mdp), FALSE);

  label2 = gtk_label_new (_("Nom"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed1), label2, 32, 40);
  gtk_widget_set_size_request (label2, 80, 17);

  label3 = gtk_label_new (_("Prenom"));
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed1), label3, 32, 80);
  gtk_widget_set_size_request (label3, 80, 17);

  label4 = gtk_label_new (_("CIN"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed1), label4, 32, 120);
  gtk_widget_set_size_request (label4, 80, 17);

  label5 = gtk_label_new (_("E-mail"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed1), label5, 32, 168);
  gtk_widget_set_size_request (label5, 80, 16);

  label6 = gtk_label_new (_("Telephone"));
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed1), label6, 48, 208);
  gtk_widget_set_size_request (label6, 70, 17);

  jrn_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  jrn = gtk_spin_button_new (GTK_ADJUSTMENT (jrn_adj), 1, 0);
  gtk_widget_show (jrn);
  gtk_fixed_put (GTK_FIXED (fixed1), jrn, 160, 320);
  gtk_widget_set_size_request (jrn, 60, 27);

  msn_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  msn = gtk_spin_button_new (GTK_ADJUSTMENT (msn_adj), 1, 0);
  gtk_widget_show (msn);
  gtk_fixed_put (GTK_FIXED (fixed1), msn, 240, 320);
  gtk_widget_set_size_request (msn, 60, 27);

  ann_adj = gtk_adjustment_new (1971, 1970, 2000, 1, 10, 10);
  ann = gtk_spin_button_new (GTK_ADJUSTMENT (ann_adj), 1, 0);
  gtk_widget_show (ann);
  gtk_fixed_put (GTK_FIXED (fixed1), ann, 328, 320);
  gtk_widget_set_size_request (ann, 60, 27);

  jrr_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  jrr = gtk_spin_button_new (GTK_ADJUSTMENT (jrr_adj), 1, 0);
  gtk_widget_show (jrr);
  gtk_fixed_put (GTK_FIXED (fixed1), jrr, 152, 392);
  gtk_widget_set_size_request (jrr, 60, 27);

  msr_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  msr = gtk_spin_button_new (GTK_ADJUSTMENT (msr_adj), 1, 0);
  gtk_widget_show (msr);
  gtk_fixed_put (GTK_FIXED (fixed1), msr, 240, 392);
  gtk_widget_set_size_request (msr, 60, 27);

  anr_adj = gtk_adjustment_new (1, 2019, 2030, 1, 10, 10);
  anr = gtk_spin_button_new (GTK_ADJUSTMENT (anr_adj), 1, 0);
  gtk_widget_show (anr);
  gtk_fixed_put (GTK_FIXED (fixed1), anr, 328, 392);
  gtk_widget_set_size_request (anr, 60, 27);

  label9 = gtk_label_new (_("Date de \nnaissance"));
  gtk_widget_show (label9);
  gtk_fixed_put (GTK_FIXED (fixed1), label9, 40, 312);
  gtk_widget_set_size_request (label9, 90, 40);

  label8 = gtk_label_new (_("Confirmation\n mot de passe"));
  gtk_widget_show (label8);
  gtk_fixed_put (GTK_FIXED (fixed1), label8, 32, 496);
  gtk_widget_set_size_request (label8, 95, 40);

  label7 = gtk_label_new (_("Mot de passe"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed1), label7, 32, 456);
  gtk_widget_set_size_request (label7, 90, 17);

  label15 = gtk_label_new (_("mois"));
  gtk_widget_show (label15);
  gtk_fixed_put (GTK_FIXED (fixed1), label15, 240, 368);
  gtk_widget_set_size_request (label15, 49, 17);

  label16 = gtk_label_new (_("annee"));
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed1), label16, 328, 368);
  gtk_widget_set_size_request (label16, 49, 17);

  label14 = gtk_label_new (_("jour"));
  gtk_widget_show (label14);
  gtk_fixed_put (GTK_FIXED (fixed1), label14, 152, 368);
  gtk_widget_set_size_request (label14, 49, 17);

  label13 = gtk_label_new (_("Date de \nrecrutement"));
  gtk_widget_show (label13);
  gtk_fixed_put (GTK_FIXED (fixed1), label13, 40, 384);
  gtk_widget_set_size_request (label13, 90, 40);

  label10 = gtk_label_new (_("jour"));
  gtk_widget_show (label10);
  gtk_fixed_put (GTK_FIXED (fixed1), label10, 168, 296);
  gtk_widget_set_size_request (label10, 49, 17);

  label18 = gtk_label_new (_("Tache"));
  gtk_widget_show (label18);
  gtk_fixed_put (GTK_FIXED (fixed1), label18, 40, 560);
  gtk_widget_set_size_request (label18, 49, 17);

  label11 = gtk_label_new (_("mois"));
  gtk_widget_show (label11);
  gtk_fixed_put (GTK_FIXED (fixed1), label11, 240, 296);
  gtk_widget_set_size_request (label11, 49, 17);

  label12 = gtk_label_new (_("annee"));
  gtk_widget_show (label12);
  gtk_fixed_put (GTK_FIXED (fixed1), label12, 328, 296);
  gtk_widget_set_size_request (label12, 49, 17);

  ajouter = gtk_button_new ();
  gtk_widget_show (ajouter);
  gtk_fixed_put (GTK_FIXED (fixed1), ajouter, 104, 624);
  gtk_widget_set_size_request (ajouter, 80, 29);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (ajouter), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label20 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label20);
  gtk_box_pack_start (GTK_BOX (hbox2), label20, FALSE, FALSE, 0);

  quitter = gtk_button_new ();
  gtk_widget_show (quitter);
  gtk_fixed_put (GTK_FIXED (fixed1), quitter, 296, 624);
  gtk_widget_set_size_request (quitter, 83, 29);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (quitter), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label19 = gtk_label_new_with_mnemonic (_("Quitter"));
  gtk_widget_show (label19);
  gtk_box_pack_start (GTK_BOX (hbox1), label19, FALSE, FALSE, 0);

  tache = gtk_combo_box_new_text ();
  gtk_widget_show (tache);
  gtk_fixed_put (GTK_FIXED (fixed1), tache, 136, 552);
  gtk_widget_set_size_request (tache, 250, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (tache), _("Admin "));
  gtk_combo_box_append_text (GTK_COMBO_BOX (tache), _("Agent prestation"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (tache), _("Agent finance"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (tache), _("Agent reclamation"));

  label24 = gtk_label_new (_("sexe"));
  gtk_widget_show (label24);
  gtk_fixed_put (GTK_FIXED (fixed1), label24, 56, 256);
  gtk_widget_set_size_request (label24, 49, 17);

  sexe = gtk_combo_box_new_text ();
  gtk_widget_show (sexe);
  gtk_fixed_put (GTK_FIXED (fixed1), sexe, 144, 248);
  gtk_widget_set_size_request (sexe, 136, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (sexe), _("homme"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (sexe), _("femme"));

  afficher = gtk_button_new ();
  gtk_widget_show (afficher);
  gtk_fixed_put (GTK_FIXED (fixed1), afficher, 200, 656);
  gtk_widget_set_size_request (afficher, 80, 30);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (afficher), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-paste", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label21 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label21);
  gtk_box_pack_start (GTK_BOX (hbox3), label21, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) ajouter, "clicked",
                    G_CALLBACK (on_ajouter_clicked),
                    NULL);
  g_signal_connect ((gpointer) quitter, "clicked",
                    G_CALLBACK (on_quitter_clicked),
                    NULL);
  g_signal_connect ((gpointer) afficher, "clicked",
                    G_CALLBACK (on_afficher_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, label1, "label1");
  GLADE_HOOKUP_OBJECT (window1, nom, "nom");
  GLADE_HOOKUP_OBJECT (window1, prenom, "prenom");
  GLADE_HOOKUP_OBJECT (window1, cin, "cin");
  GLADE_HOOKUP_OBJECT (window1, mail, "mail");
  GLADE_HOOKUP_OBJECT (window1, tel, "tel");
  GLADE_HOOKUP_OBJECT (window1, mdp2, "mdp2");
  GLADE_HOOKUP_OBJECT (window1, mdp, "mdp");
  GLADE_HOOKUP_OBJECT (window1, label2, "label2");
  GLADE_HOOKUP_OBJECT (window1, label3, "label3");
  GLADE_HOOKUP_OBJECT (window1, label4, "label4");
  GLADE_HOOKUP_OBJECT (window1, label5, "label5");
  GLADE_HOOKUP_OBJECT (window1, label6, "label6");
  GLADE_HOOKUP_OBJECT (window1, jrn, "jrn");
  GLADE_HOOKUP_OBJECT (window1, msn, "msn");
  GLADE_HOOKUP_OBJECT (window1, ann, "ann");
  GLADE_HOOKUP_OBJECT (window1, jrr, "jrr");
  GLADE_HOOKUP_OBJECT (window1, msr, "msr");
  GLADE_HOOKUP_OBJECT (window1, anr, "anr");
  GLADE_HOOKUP_OBJECT (window1, label9, "label9");
  GLADE_HOOKUP_OBJECT (window1, label8, "label8");
  GLADE_HOOKUP_OBJECT (window1, label7, "label7");
  GLADE_HOOKUP_OBJECT (window1, label15, "label15");
  GLADE_HOOKUP_OBJECT (window1, label16, "label16");
  GLADE_HOOKUP_OBJECT (window1, label14, "label14");
  GLADE_HOOKUP_OBJECT (window1, label13, "label13");
  GLADE_HOOKUP_OBJECT (window1, label10, "label10");
  GLADE_HOOKUP_OBJECT (window1, label18, "label18");
  GLADE_HOOKUP_OBJECT (window1, label11, "label11");
  GLADE_HOOKUP_OBJECT (window1, label12, "label12");
  GLADE_HOOKUP_OBJECT (window1, ajouter, "ajouter");
  GLADE_HOOKUP_OBJECT (window1, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (window1, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (window1, image2, "image2");
  GLADE_HOOKUP_OBJECT (window1, label20, "label20");
  GLADE_HOOKUP_OBJECT (window1, quitter, "quitter");
  GLADE_HOOKUP_OBJECT (window1, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window1, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (window1, image1, "image1");
  GLADE_HOOKUP_OBJECT (window1, label19, "label19");
  GLADE_HOOKUP_OBJECT (window1, tache, "tache");
  GLADE_HOOKUP_OBJECT (window1, label24, "label24");
  GLADE_HOOKUP_OBJECT (window1, sexe, "sexe");
  GLADE_HOOKUP_OBJECT (window1, afficher, "afficher");
  GLADE_HOOKUP_OBJECT (window1, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (window1, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (window1, image3, "image3");
  GLADE_HOOKUP_OBJECT (window1, label21, "label21");

  return window1;
}

GtkWidget*
create_afficher_agent (void)
{
  GtkWidget *afficher_agent;
  GtkWidget *fixed2;
  GtkWidget *label22;
  GtkWidget *retour;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label23;
  GtkWidget *scrolledwindow1;
  GtkWidget *treeviewagent;
  GtkWidget *supprimer;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label25;

  afficher_agent = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (afficher_agent), _("afficher_agent"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (afficher_agent), fixed2);

  label22 = gtk_label_new (_("liste des agents"));
  gtk_widget_show (label22);
  gtk_fixed_put (GTK_FIXED (fixed2), label22, 136, 16);
  gtk_widget_set_size_request (label22, 200, 19);

  retour = gtk_button_new ();
  gtk_widget_show (retour);
  gtk_fixed_put (GTK_FIXED (fixed2), retour, 352, 288);
  gtk_widget_set_size_request (retour, 77, 30);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (retour), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label23 = gtk_label_new_with_mnemonic (_("Retour"));
  gtk_widget_show (label23);
  gtk_box_pack_start (GTK_BOX (hbox4), label23, FALSE, FALSE, 0);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow1);
  gtk_fixed_put (GTK_FIXED (fixed2), scrolledwindow1, 50, 50);
  gtk_widget_set_size_request (scrolledwindow1, 450, 200);

  treeviewagent = gtk_tree_view_new ();
  gtk_widget_show (treeviewagent);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), treeviewagent);
  gtk_widget_set_size_request (treeviewagent, 300, 200);

  supprimer = gtk_button_new ();
  gtk_widget_show (supprimer);
  gtk_fixed_put (GTK_FIXED (fixed2), supprimer, 192, 288);
  gtk_widget_set_size_request (supprimer, 97, 30);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (supprimer), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label25 = gtk_label_new_with_mnemonic (_("supprimer"));
  gtk_widget_show (label25);
  gtk_box_pack_start (GTK_BOX (hbox5), label25, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) retour, "clicked",
                    G_CALLBACK (on_retour_clicked),
                    NULL);
  g_signal_connect ((gpointer) treeviewagent, "row_activated",
                    G_CALLBACK (on_treeviewagent_row_activated),
                    NULL);
  g_signal_connect ((gpointer) supprimer, "clicked",
                    G_CALLBACK (on_supprimer_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (afficher_agent, afficher_agent, "afficher_agent");
  GLADE_HOOKUP_OBJECT (afficher_agent, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (afficher_agent, label22, "label22");
  GLADE_HOOKUP_OBJECT (afficher_agent, retour, "retour");
  GLADE_HOOKUP_OBJECT (afficher_agent, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (afficher_agent, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (afficher_agent, image4, "image4");
  GLADE_HOOKUP_OBJECT (afficher_agent, label23, "label23");
  GLADE_HOOKUP_OBJECT (afficher_agent, scrolledwindow1, "scrolledwindow1");
  GLADE_HOOKUP_OBJECT (afficher_agent, treeviewagent, "treeviewagent");
  GLADE_HOOKUP_OBJECT (afficher_agent, supprimer, "supprimer");
  GLADE_HOOKUP_OBJECT (afficher_agent, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (afficher_agent, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (afficher_agent, image5, "image5");
  GLADE_HOOKUP_OBJECT (afficher_agent, label25, "label25");

  return afficher_agent;
}

