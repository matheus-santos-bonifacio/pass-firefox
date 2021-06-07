#ifndef PASS_FIREFOX_H
#define PASS_FIREFOX_H

#include <gtkmm/window.h>
#include <gtkmm/application.h>
#include <gtkmm/fixed.h>
#include <gtkmm/box.h>
#include <gtkmm/alignment.h>
#include <gtkmm/entry.h>
#include <gtkmm/label.h>
#include <gtkmm/button.h>
#include <gtkmm/frame.h>
#include <gtkmm/linkbutton.h>
#include <gtkmm/messagedialog.h>
#include <iostream>
#include "tools-pass-firefox/tools-pass-firefox.hpp"

class PassFirefox : public Gtk::Window
{
  Gtk::Fixed m_fixed;
  Gtk::Box m_box_1, m_box_2, m_box_3, m_box_4;
  Gtk::Alignment m_alignment_1, m_alignment_2;
  Gtk::Entry m_entry_1, m_entry_2, m_entry_3;
  Gtk::Label m_label_1, m_label_2, m_label_3, m_label_4, m_label_5, m_label_6;
  Gtk::Button m_button_1, m_button_2;
  Gtk::Frame m_frame_1, m_frame_2;
  Gtk::LinkButton m_link_button;

  public:
    PassFirefox();

    void set_hierarchy();
    void draw_widgets();

  protected:
    void on_button_exporter();
    void on_button_importer();
};

#endif
