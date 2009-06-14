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
create_About (void)
{
  GtkWidget *About;
  const gchar *authors[] = {
    "Author: zerofrog(@gmail.com)",
    "Thanks to:",
    " linuzappz <linuzappz@hotmail.com>",
    "florin sasu <florinsasu@hotmail.com>",
    "and SSSPSXPad, TwinPad authors",
    NULL
  };
  /* TRANSLATORS: Replace this string with your names, one name per line. */
  gchar *translators = _("translator-credits");

  About = gtk_about_dialog_new ();
  gtk_about_dialog_set_version (GTK_ABOUT_DIALOG (About), VERSION);
  gtk_about_dialog_set_name (GTK_ABOUT_DIALOG (About), _("ZeroPAD"));
  gtk_about_dialog_set_authors (GTK_ABOUT_DIALOG (About), authors);
  gtk_about_dialog_set_translator_credits (GTK_ABOUT_DIALOG (About), translators);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (About, About, "About");

  return About;
}

GtkWidget*
create_Conf (void)
{
  GtkWidget *Conf;
  GtkWidget *dialog_vbox1;
  GtkWidget *vbox1;
  GtkWidget *frame1;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *PAD1;
  GSList *PAD1_group = NULL;
  GtkWidget *PAD2;
  GtkWidget *label2;
  GtkWidget *vbox2;
  GtkWidget *label5;
  GtkWidget *joydevicescombo;
  GtkWidget *fixed1;
  GtkWidget *eL2;
  GtkWidget *eL1;
  GtkWidget *eSelect;
  GtkWidget *eStart;
  GtkWidget *eUp;
  GtkWidget *eRight;
  GtkWidget *eLeft;
  GtkWidget *eDown;
  GtkWidget *eR2;
  GtkWidget *eR1;
  GtkWidget *eAnalog;
  GtkWidget *eSquare;
  GtkWidget *eTriangle;
  GtkWidget *eCircle;
  GtkWidget *eCross;
  GtkWidget *eR3;
  GtkWidget *eL3;
  GtkWidget *eRx;
  GtkWidget *eLx;
  GtkWidget *eRy;
  GtkWidget *eLy;
  GtkWidget *Select;
  GtkWidget *L1;
  GtkWidget *Left;
  GtkWidget *Down;
  GtkWidget *Analog;
  GtkWidget *R2;
  GtkWidget *Start;
  GtkWidget *R1;
  GtkWidget *Cross;
  GtkWidget *Triangle;
  GtkWidget *Circle;
  GtkWidget *Square;
  GtkWidget *L3;
  GtkWidget *Up;
  GtkWidget *L2;
  GtkWidget *Lx;
  GtkWidget *Ly;
  GtkWidget *Rx;
  GtkWidget *Ry;
  GtkWidget *Right;
  GtkWidget *label3;
  GtkWidget *R3;
  GtkWidget *checkbutton_reverselx;
  GtkWidget *checkbutton_reversely;
  GtkWidget *checkbutton_reverserx;
  GtkWidget *checkbutton_reversery;
  GtkWidget *forcefeedback;
  GtkWidget *dialog_action_area1;
  GtkWidget *cancelbutton1;
  GtkWidget *okbutton1;

  Conf = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (Conf), _("ZeroPAD Configuration Dialog"));
  gtk_window_set_type_hint (GTK_WINDOW (Conf), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox1 = GTK_DIALOG (Conf)->vbox;
  gtk_widget_show (dialog_vbox1);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), vbox1, TRUE, TRUE, 0);

  frame1 = gtk_frame_new (NULL);
  gtk_widget_show (frame1);
  gtk_box_pack_start (GTK_BOX (vbox1), frame1, FALSE, FALSE, 0);

  alignment1 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (frame1), alignment1);
  gtk_alignment_set_padding (GTK_ALIGNMENT (alignment1), 0, 0, 12, 0);

  hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  PAD1 = gtk_radio_button_new_with_mnemonic (NULL, _("PAD1"));
  gtk_widget_show (PAD1);
  gtk_box_pack_start (GTK_BOX (hbox1), PAD1, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (PAD1), PAD1_group);
  PAD1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (PAD1));
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (PAD1), TRUE);

  PAD2 = gtk_radio_button_new_with_mnemonic (NULL, _("PAD2"));
  gtk_widget_show (PAD2);
  gtk_box_pack_start (GTK_BOX (hbox1), PAD2, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (PAD2), PAD1_group);
  PAD1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (PAD2));

  label2 = gtk_label_new (_("<b>Choose PAD to modify</b>"));
  gtk_widget_show (label2);
  gtk_frame_set_label_widget (GTK_FRAME (frame1), label2);
  gtk_label_set_use_markup (GTK_LABEL (label2), TRUE);

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox2);
  gtk_box_pack_start (GTK_BOX (vbox1), vbox2, TRUE, TRUE, 0);

  label5 = gtk_label_new (_("Joystick to use for this PAD"));
  gtk_widget_show (label5);
  gtk_box_pack_start (GTK_BOX (vbox2), label5, FALSE, FALSE, 0);

  joydevicescombo = gtk_combo_box_entry_new_text ();
  gtk_widget_show (joydevicescombo);
  gtk_box_pack_start (GTK_BOX (vbox2), joydevicescombo, TRUE, TRUE, 0);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_box_pack_start (GTK_BOX (vbox1), fixed1, TRUE, TRUE, 0);

  eL2 = gtk_entry_new ();
  gtk_widget_show (eL2);
  gtk_fixed_put (GTK_FIXED (fixed1), eL2, 64, 40);
  gtk_widget_set_size_request (eL2, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eL2), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eL2), 8226);

  eL1 = gtk_entry_new ();
  gtk_widget_show (eL1);
  gtk_fixed_put (GTK_FIXED (fixed1), eL1, 64, 104);
  gtk_widget_set_size_request (eL1, 64, 24);
  gtk_entry_set_invisible_char (GTK_ENTRY (eL1), 8226);

  eSelect = gtk_entry_new ();
  gtk_widget_show (eSelect);
  gtk_fixed_put (GTK_FIXED (fixed1), eSelect, 168, 64);
  gtk_widget_set_size_request (eSelect, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eSelect), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eSelect), 8226);

  eStart = gtk_entry_new ();
  gtk_widget_show (eStart);
  gtk_fixed_put (GTK_FIXED (fixed1), eStart, 280, 64);
  gtk_widget_set_size_request (eStart, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eStart), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eStart), 8226);

  eUp = gtk_entry_new ();
  gtk_widget_show (eUp);
  gtk_fixed_put (GTK_FIXED (fixed1), eUp, 64, 168);
  gtk_widget_set_size_request (eUp, 64, 24);
  gtk_entry_set_invisible_char (GTK_ENTRY (eUp), 8226);

  eRight = gtk_entry_new ();
  gtk_widget_show (eRight);
  gtk_fixed_put (GTK_FIXED (fixed1), eRight, 128, 208);
  gtk_widget_set_size_request (eRight, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eRight), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eRight), 8226);

  eLeft = gtk_entry_new ();
  gtk_widget_show (eLeft);
  gtk_fixed_put (GTK_FIXED (fixed1), eLeft, 0, 208);
  gtk_widget_set_size_request (eLeft, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eLeft), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eLeft), 8226);

  eDown = gtk_entry_new ();
  gtk_widget_show (eDown);
  gtk_fixed_put (GTK_FIXED (fixed1), eDown, 64, 256);
  gtk_widget_set_size_request (eDown, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eDown), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eDown), 8226);

  eR2 = gtk_entry_new ();
  gtk_widget_show (eR2);
  gtk_fixed_put (GTK_FIXED (fixed1), eR2, 368, 32);
  gtk_widget_set_size_request (eR2, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eR2), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eR2), 8226);

  eR1 = gtk_entry_new ();
  gtk_widget_show (eR1);
  gtk_fixed_put (GTK_FIXED (fixed1), eR1, 368, 104);
  gtk_widget_set_size_request (eR1, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eR1), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eR1), 8226);

  eAnalog = gtk_entry_new ();
  gtk_widget_show (eAnalog);
  gtk_fixed_put (GTK_FIXED (fixed1), eAnalog, 224, 128);
  gtk_widget_set_size_request (eAnalog, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eAnalog), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eAnalog), 8226);

  eSquare = gtk_entry_new ();
  gtk_widget_show (eSquare);
  gtk_fixed_put (GTK_FIXED (fixed1), eSquare, 304, 208);
  gtk_widget_set_size_request (eSquare, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eSquare), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eSquare), 8226);

  eTriangle = gtk_entry_new ();
  gtk_widget_show (eTriangle);
  gtk_fixed_put (GTK_FIXED (fixed1), eTriangle, 368, 168);
  gtk_widget_set_size_request (eTriangle, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eTriangle), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eTriangle), 8226);

  eCircle = gtk_entry_new ();
  gtk_widget_show (eCircle);
  gtk_fixed_put (GTK_FIXED (fixed1), eCircle, 432, 208);
  gtk_widget_set_size_request (eCircle, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eCircle), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eCircle), 8226);

  eCross = gtk_entry_new ();
  gtk_widget_show (eCross);
  gtk_fixed_put (GTK_FIXED (fixed1), eCross, 368, 256);
  gtk_widget_set_size_request (eCross, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eCross), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eCross), 8226);

  eR3 = gtk_entry_new ();
  gtk_widget_show (eR3);
  gtk_fixed_put (GTK_FIXED (fixed1), eR3, 272, 272);
  gtk_widget_set_size_request (eR3, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eR3), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eR3), 8226);

  eL3 = gtk_entry_new ();
  gtk_widget_show (eL3);
  gtk_fixed_put (GTK_FIXED (fixed1), eL3, 176, 272);
  gtk_widget_set_size_request (eL3, 64, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eL3), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eL3), 8226);

  eRx = gtk_entry_new ();
  gtk_widget_show (eRx);
  gtk_fixed_put (GTK_FIXED (fixed1), eRx, 272, 352);
  gtk_widget_set_size_request (eRx, 80, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eRx), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eRx), 8226);

  eLx = gtk_entry_new ();
  gtk_widget_show (eLx);
  gtk_fixed_put (GTK_FIXED (fixed1), eLx, 160, 352);
  gtk_widget_set_size_request (eLx, 80, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eLx), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eLx), 8226);

  eRy = gtk_entry_new ();
  gtk_widget_show (eRy);
  gtk_fixed_put (GTK_FIXED (fixed1), eRy, 272, 416);
  gtk_widget_set_size_request (eRy, 80, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eRy), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eRy), 8226);

  eLy = gtk_entry_new ();
  gtk_widget_show (eLy);
  gtk_fixed_put (GTK_FIXED (fixed1), eLy, 160, 416);
  gtk_widget_set_size_request (eLy, 80, 24);
  gtk_editable_set_editable (GTK_EDITABLE (eLy), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (eLy), 8226);

  Select = gtk_button_new_with_mnemonic (_("Select"));
  gtk_widget_show (Select);
  gtk_fixed_put (GTK_FIXED (fixed1), Select, 168, 32);
  gtk_widget_set_size_request (Select, 64, 32);

  L1 = gtk_button_new_with_mnemonic (_("L1"));
  gtk_widget_show (L1);
  gtk_fixed_put (GTK_FIXED (fixed1), L1, 64, 72);
  gtk_widget_set_size_request (L1, 64, 32);

  Left = gtk_button_new_with_mnemonic (_("Left"));
  gtk_widget_show (Left);
  gtk_fixed_put (GTK_FIXED (fixed1), Left, 0, 176);
  gtk_widget_set_size_request (Left, 64, 32);

  Down = gtk_button_new_with_mnemonic (_("Down"));
  gtk_widget_show (Down);
  gtk_fixed_put (GTK_FIXED (fixed1), Down, 64, 224);
  gtk_widget_set_size_request (Down, 64, 32);

  Analog = gtk_button_new_with_mnemonic (_("Analog"));
  gtk_widget_show (Analog);
  gtk_fixed_put (GTK_FIXED (fixed1), Analog, 224, 96);
  gtk_widget_set_size_request (Analog, 64, 32);

  R2 = gtk_button_new_with_mnemonic (_("R2"));
  gtk_widget_show (R2);
  gtk_fixed_put (GTK_FIXED (fixed1), R2, 368, 0);
  gtk_widget_set_size_request (R2, 64, 32);

  Start = gtk_button_new_with_mnemonic (_("Start"));
  gtk_widget_show (Start);
  gtk_fixed_put (GTK_FIXED (fixed1), Start, 280, 32);
  gtk_widget_set_size_request (Start, 64, 32);

  R1 = gtk_button_new_with_mnemonic (_("R1"));
  gtk_widget_show (R1);
  gtk_fixed_put (GTK_FIXED (fixed1), R1, 368, 72);
  gtk_widget_set_size_request (R1, 64, 32);

  Cross = gtk_button_new_with_mnemonic (_("Cross"));
  gtk_widget_show (Cross);
  gtk_fixed_put (GTK_FIXED (fixed1), Cross, 368, 224);
  gtk_widget_set_size_request (Cross, 64, 32);

  Triangle = gtk_button_new_with_mnemonic (_("Triangle"));
  gtk_widget_show (Triangle);
  gtk_fixed_put (GTK_FIXED (fixed1), Triangle, 368, 136);
  gtk_widget_set_size_request (Triangle, 64, 32);

  Circle = gtk_button_new_with_mnemonic (_("Circle"));
  gtk_widget_show (Circle);
  gtk_fixed_put (GTK_FIXED (fixed1), Circle, 432, 176);
  gtk_widget_set_size_request (Circle, 64, 32);

  Square = gtk_button_new_with_mnemonic (_("Square"));
  gtk_widget_show (Square);
  gtk_fixed_put (GTK_FIXED (fixed1), Square, 304, 176);
  gtk_widget_set_size_request (Square, 64, 32);

  L3 = gtk_button_new_with_mnemonic (_("L3"));
  gtk_widget_show (L3);
  gtk_fixed_put (GTK_FIXED (fixed1), L3, 176, 240);
  gtk_widget_set_size_request (L3, 64, 32);

  Up = gtk_button_new_with_mnemonic (_("Up"));
  gtk_widget_show (Up);
  gtk_fixed_put (GTK_FIXED (fixed1), Up, 64, 136);
  gtk_widget_set_size_request (Up, 64, 32);

  L2 = gtk_button_new_with_mnemonic (_("L2"));
  gtk_widget_show (L2);
  gtk_fixed_put (GTK_FIXED (fixed1), L2, 64, 8);
  gtk_widget_set_size_request (L2, 64, 32);

  Lx = gtk_button_new_with_mnemonic (_("Lx"));
  gtk_widget_show (Lx);
  gtk_fixed_put (GTK_FIXED (fixed1), Lx, 160, 320);
  gtk_widget_set_size_request (Lx, 80, 32);

  Ly = gtk_button_new_with_mnemonic (_("Ly"));
  gtk_widget_show (Ly);
  gtk_fixed_put (GTK_FIXED (fixed1), Ly, 160, 384);
  gtk_widget_set_size_request (Ly, 80, 32);

  Rx = gtk_button_new_with_mnemonic (_("Rx"));
  gtk_widget_show (Rx);
  gtk_fixed_put (GTK_FIXED (fixed1), Rx, 272, 320);
  gtk_widget_set_size_request (Rx, 80, 32);

  Ry = gtk_button_new_with_mnemonic (_("Ry"));
  gtk_widget_show (Ry);
  gtk_fixed_put (GTK_FIXED (fixed1), Ry, 272, 384);
  gtk_widget_set_size_request (Ry, 80, 32);

  Right = gtk_button_new_with_mnemonic (_("Right"));
  gtk_widget_show (Right);
  gtk_fixed_put (GTK_FIXED (fixed1), Right, 128, 176);
  gtk_widget_set_size_request (Right, 64, 32);

  label3 = gtk_label_new (_("Analog Controls (move mouse or analog joystick to select)"));
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed1), label3, 48, 296);
  gtk_widget_set_size_request (label3, 408, 16);
  gtk_label_set_single_line_mode (GTK_LABEL (label3), TRUE);

  R3 = gtk_button_new_with_mnemonic (_("R3"));
  gtk_widget_show (R3);
  gtk_fixed_put (GTK_FIXED (fixed1), R3, 272, 240);
  gtk_widget_set_size_request (R3, 64, 32);

  checkbutton_reverselx = gtk_check_button_new_with_mnemonic (_("Reverse LX"));
  gtk_widget_show (checkbutton_reverselx);
  gtk_fixed_put (GTK_FIXED (fixed1), checkbutton_reverselx, 16, 328);
  gtk_widget_set_size_request (checkbutton_reverselx, 111, 22);

  checkbutton_reversely = gtk_check_button_new_with_mnemonic (_("Reverse LY"));
  gtk_widget_show (checkbutton_reversely);
  gtk_fixed_put (GTK_FIXED (fixed1), checkbutton_reversely, 16, 352);
  gtk_widget_set_size_request (checkbutton_reversely, 111, 22);

  checkbutton_reverserx = gtk_check_button_new_with_mnemonic (_("Reverse RX"));
  gtk_widget_show (checkbutton_reverserx);
  gtk_fixed_put (GTK_FIXED (fixed1), checkbutton_reverserx, 16, 376);
  gtk_widget_set_size_request (checkbutton_reverserx, 111, 22);

  checkbutton_reversery = gtk_check_button_new_with_mnemonic (_("Reverse RY"));
  gtk_widget_show (checkbutton_reversery);
  gtk_fixed_put (GTK_FIXED (fixed1), checkbutton_reversery, 16, 400);
  gtk_widget_set_size_request (checkbutton_reversery, 111, 22);

  forcefeedback = gtk_check_button_new_with_mnemonic (_("Enable Force\nFeedback"));
  gtk_widget_show (forcefeedback);
  gtk_fixed_put (GTK_FIXED (fixed1), forcefeedback, 384, 320);
  gtk_widget_set_size_request (forcefeedback, 112, 48);

  dialog_action_area1 = GTK_DIALOG (Conf)->action_area;
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area1), GTK_BUTTONBOX_END);

  cancelbutton1 = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_show (cancelbutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (Conf), cancelbutton1, GTK_RESPONSE_CANCEL);
  GTK_WIDGET_SET_FLAGS (cancelbutton1, GTK_CAN_DEFAULT);

  okbutton1 = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (okbutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (Conf), okbutton1, GTK_RESPONSE_OK);
  GTK_WIDGET_SET_FLAGS (okbutton1, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) PAD1, "clicked",
                    G_CALLBACK (OnConf_Pad1),
                    NULL);
  g_signal_connect ((gpointer) PAD2, "clicked",
                    G_CALLBACK (OnConf_Pad2),
                    NULL);
  g_signal_connect ((gpointer) joydevicescombo, "changed",
                    G_CALLBACK (on_joydevicescombo_changed),
                    NULL);
  g_signal_connect ((gpointer) Select, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) L1, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) Left, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) Down, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) Analog, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) R2, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) Start, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) R1, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) Cross, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) Triangle, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) Circle, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) Square, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) L3, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) Up, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) L2, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) Lx, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) Ly, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) Rx, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) Ry, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) Right, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) R3, "clicked",
                    G_CALLBACK (OnConf_Key),
                    NULL);
  g_signal_connect ((gpointer) checkbutton_reverselx, "toggled",
                    G_CALLBACK (on_checkbutton_reverselx_toggled),
                    NULL);
  g_signal_connect ((gpointer) checkbutton_reversely, "toggled",
                    G_CALLBACK (on_checkbutton_reversely_toggled),
                    NULL);
  g_signal_connect ((gpointer) checkbutton_reverserx, "toggled",
                    G_CALLBACK (on_checkbutton_reverserx_toggled),
                    NULL);
  g_signal_connect ((gpointer) checkbutton_reversery, "toggled",
                    G_CALLBACK (on_checkbutton_reversery_toggled),
                    NULL);
  g_signal_connect ((gpointer) forcefeedback, "toggled",
                    G_CALLBACK (on_forcefeedback_toggled),
                    NULL);
  g_signal_connect ((gpointer) cancelbutton1, "clicked",
                    G_CALLBACK (OnConf_Cancel),
                    NULL);
  g_signal_connect ((gpointer) okbutton1, "clicked",
                    G_CALLBACK (OnConf_Ok),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Conf, Conf, "Conf");
  GLADE_HOOKUP_OBJECT_NO_REF (Conf, dialog_vbox1, "dialog_vbox1");
  GLADE_HOOKUP_OBJECT (Conf, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (Conf, frame1, "frame1");
  GLADE_HOOKUP_OBJECT (Conf, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (Conf, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (Conf, PAD1, "PAD1");
  GLADE_HOOKUP_OBJECT (Conf, PAD2, "PAD2");
  GLADE_HOOKUP_OBJECT (Conf, label2, "label2");
  GLADE_HOOKUP_OBJECT (Conf, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (Conf, label5, "label5");
  GLADE_HOOKUP_OBJECT (Conf, joydevicescombo, "joydevicescombo");
  GLADE_HOOKUP_OBJECT (Conf, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (Conf, eL2, "eL2");
  GLADE_HOOKUP_OBJECT (Conf, eL1, "eL1");
  GLADE_HOOKUP_OBJECT (Conf, eSelect, "eSelect");
  GLADE_HOOKUP_OBJECT (Conf, eStart, "eStart");
  GLADE_HOOKUP_OBJECT (Conf, eUp, "eUp");
  GLADE_HOOKUP_OBJECT (Conf, eRight, "eRight");
  GLADE_HOOKUP_OBJECT (Conf, eLeft, "eLeft");
  GLADE_HOOKUP_OBJECT (Conf, eDown, "eDown");
  GLADE_HOOKUP_OBJECT (Conf, eR2, "eR2");
  GLADE_HOOKUP_OBJECT (Conf, eR1, "eR1");
  GLADE_HOOKUP_OBJECT (Conf, eAnalog, "eAnalog");
  GLADE_HOOKUP_OBJECT (Conf, eSquare, "eSquare");
  GLADE_HOOKUP_OBJECT (Conf, eTriangle, "eTriangle");
  GLADE_HOOKUP_OBJECT (Conf, eCircle, "eCircle");
  GLADE_HOOKUP_OBJECT (Conf, eCross, "eCross");
  GLADE_HOOKUP_OBJECT (Conf, eR3, "eR3");
  GLADE_HOOKUP_OBJECT (Conf, eL3, "eL3");
  GLADE_HOOKUP_OBJECT (Conf, eRx, "eRx");
  GLADE_HOOKUP_OBJECT (Conf, eLx, "eLx");
  GLADE_HOOKUP_OBJECT (Conf, eRy, "eRy");
  GLADE_HOOKUP_OBJECT (Conf, eLy, "eLy");
  GLADE_HOOKUP_OBJECT (Conf, Select, "Select");
  GLADE_HOOKUP_OBJECT (Conf, L1, "L1");
  GLADE_HOOKUP_OBJECT (Conf, Left, "Left");
  GLADE_HOOKUP_OBJECT (Conf, Down, "Down");
  GLADE_HOOKUP_OBJECT (Conf, Analog, "Analog");
  GLADE_HOOKUP_OBJECT (Conf, R2, "R2");
  GLADE_HOOKUP_OBJECT (Conf, Start, "Start");
  GLADE_HOOKUP_OBJECT (Conf, R1, "R1");
  GLADE_HOOKUP_OBJECT (Conf, Cross, "Cross");
  GLADE_HOOKUP_OBJECT (Conf, Triangle, "Triangle");
  GLADE_HOOKUP_OBJECT (Conf, Circle, "Circle");
  GLADE_HOOKUP_OBJECT (Conf, Square, "Square");
  GLADE_HOOKUP_OBJECT (Conf, L3, "L3");
  GLADE_HOOKUP_OBJECT (Conf, Up, "Up");
  GLADE_HOOKUP_OBJECT (Conf, L2, "L2");
  GLADE_HOOKUP_OBJECT (Conf, Lx, "Lx");
  GLADE_HOOKUP_OBJECT (Conf, Ly, "Ly");
  GLADE_HOOKUP_OBJECT (Conf, Rx, "Rx");
  GLADE_HOOKUP_OBJECT (Conf, Ry, "Ry");
  GLADE_HOOKUP_OBJECT (Conf, Right, "Right");
  GLADE_HOOKUP_OBJECT (Conf, label3, "label3");
  GLADE_HOOKUP_OBJECT (Conf, R3, "R3");
  GLADE_HOOKUP_OBJECT (Conf, checkbutton_reverselx, "checkbutton_reverselx");
  GLADE_HOOKUP_OBJECT (Conf, checkbutton_reversely, "checkbutton_reversely");
  GLADE_HOOKUP_OBJECT (Conf, checkbutton_reverserx, "checkbutton_reverserx");
  GLADE_HOOKUP_OBJECT (Conf, checkbutton_reversery, "checkbutton_reversery");
  GLADE_HOOKUP_OBJECT (Conf, forcefeedback, "forcefeedback");
  GLADE_HOOKUP_OBJECT_NO_REF (Conf, dialog_action_area1, "dialog_action_area1");
  GLADE_HOOKUP_OBJECT (Conf, cancelbutton1, "cancelbutton1");
  GLADE_HOOKUP_OBJECT (Conf, okbutton1, "okbutton1");

  return Conf;
}

