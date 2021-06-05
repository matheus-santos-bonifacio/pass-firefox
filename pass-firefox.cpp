#include "pass-firefox.hpp"
#include "gtkmm/enums.h"

PassFirefox::PassFirefox() : m_box_1{Gtk::Orientation::ORIENTATION_VERTICAL},
                             m_box_2{Gtk::Orientation::ORIENTATION_VERTICAL},
                             m_box_3{Gtk::Orientation::ORIENTATION_VERTICAL},
                             m_box_4{Gtk::Orientation::ORIENTATION_VERTICAL}
{
  

  set_hierarchy();
  draw_widgets();
  show_all_children();
};

void PassFirefox::set_hierarchy() {
  // Window
  add( m_fixed  );

  // Fixed
  m_fixed.add( m_frame_1 );
  m_fixed.add( m_frame_2 );
  m_fixed.add( m_box_4 );
  m_fixed.move( m_frame_1, 6, 3 );
  m_fixed.move( m_frame_2, 6, 180 );
  m_fixed.move( m_box_4, 6, 300 );

  // Frame 1
  m_frame_1.add( m_box_1 );
  m_frame_1.set_label("Export passwords");

  // Box 1
  m_box_1.add( m_alignment_1 );
  m_box_1.add( m_label_1 );
  m_box_1.add( m_button_1 );

  // Alignment 1
  m_alignment_1.add( m_box_2 );

  // Box 2
  m_box_2.pack_start( m_entry_1, true, true );
  m_box_2.pack_start( m_entry_2, true, true );

  // Frame 2
  m_frame_2.add( m_alignment_2 );
  m_frame_2.set_label("Import passwords");

  // Alignment 2
  m_alignment_2.add( m_box_3 );

  // Box 3
  m_box_3.pack_start( m_label_2, true, true );
  m_box_3.pack_start( m_entry_3, true, true );
  m_box_3.pack_start( m_button_2, true, true );

  // Box 4
  m_box_4.pack_start( m_label_5, true, true );
  m_box_4.pack_start( m_label_6, true, true );
  m_box_4.pack_start( m_link_button, true, true );
}

void PassFirefox::draw_widgets() {
  // Window
  set_title("Export and import firefox passwords");
  set_default_size( 300, 400 );
  set_visible( true );
  set_can_focus( false );
  set_resizable( false );
  set_border_width( 6 );
  
  // Fixed
  m_fixed.set_size_request( 300, 400 );
  m_fixed.set_visible( true );
  m_fixed.set_can_focus( false );

  // Frame 1
  m_frame_1.set_size_request( 100, 62 );
  m_frame_1.set_visible( true );
  m_frame_1.set_can_focus( false );
  m_frame_1.set_margin_end( 8 );
  m_frame_1.set_shadow_type( Gtk::ShadowType::SHADOW_IN );
  m_frame_1.set_label_align( 0.02 );

  // Box 1
  m_box_1.set_visible( true );
  m_box_1.set_can_focus( false );

  // Alignment 1
  m_alignment_1.set_size_request( 400, 62 );
  m_alignment_1.set_visible( true );
  m_alignment_1.set_can_focus( false );
  m_alignment_1.set_border_width( 10 );

  // Box 2
  m_box_2.set_visible( true );
  m_box_2.set_can_focus( false );

  // Entry 1
  m_entry_1.set_visible( true );
  m_entry_1.set_can_focus( true );
  m_entry_1.set_placeholder_text("Insert your passowrd");
  m_entry_1.set_input_purpose( Gtk::INPUT_PURPOSE_PASSWORD );
  m_entry_1.set_max_length( 32 );

  // Entry 2
  m_entry_2.set_visible( true );
  m_entry_2.set_can_focus( true );
  m_entry_2.set_placeholder_text("Repeat your passowrd");
  m_entry_2.set_input_purpose( Gtk::INPUT_PURPOSE_PASSWORD );
  m_entry_2.set_max_length( 32 );

  // Label 1
  m_label_1.set_text( "Export password in GPG format with cryptography" );
  m_label_1.set_visible( true );
  m_label_1.set_can_focus( false );

  // Button 1
  m_button_1.set_label( "Export" );
  m_button_1.set_visible( true );
  m_button_1.set_can_focus( true );
  m_button_1.set_focus_on_click( true );
  m_button_1.set_border_width( 5 );
  // will receive a signal
  
  // Frame 2
  m_frame_2.set_size_request( 100, 80 );
  m_frame_2.set_visible( true );
  m_frame_2.set_can_focus( false );
  m_frame_2.set_margin_end( 8 );
  m_frame_2.set_shadow_type( Gtk::ShadowType::SHADOW_IN );
  m_frame_2.set_label_align( 0.02 );

  // Alignment 2
  m_alignment_2.set_size_request( 400, 100 );
  m_alignment_2.set_visible( true );
  m_alignment_2.set_can_focus( false );
  m_alignment_2.set_border_width( 10 );

  // Box 3
  m_box_3.set_visible( true );
  m_box_3.set_can_focus( false );

  // Label 3
  m_label_3.set_visible( true );
  m_label_3.set_can_focus( false );
  m_label_3.set_text( "Import GPG file, insert your password to import" );

  // Entry 3
  m_entry_3.set_visible( true );
  m_entry_3.set_can_focus( true );
  m_entry_3.set_placeholder_text("Enter the file password");
  m_entry_3.set_input_purpose( Gtk::INPUT_PURPOSE_PASSWORD );
  m_entry_3.set_max_length( 32 );

  // Button 2
  m_button_2.set_label( "Import" );
  m_button_2.set_visible( true );
  m_button_2.set_can_focus( true );
  m_button_2.set_focus_on_click( true );

  // Box 4
  m_box_4.set_size_request( 397, 80 );
  m_box_4.set_visible( true );
  m_box_4.set_can_focus( false );

  // Label 5
  m_label_5.set_visible( true );
  m_label_5.set_can_focus( false );
  m_label_5.set_text( "The file will saved in directory root" );

  // Label 6
  m_label_6.set_visible( true );
  m_label_6.set_can_focus( false );
  m_label_6.set_text( "GNU GPL v3" );

  // Link button
  m_link_button.set_visible( true );
  m_link_button.set_can_focus( false );
  m_link_button.set_label( "github caneladeouro" );
  m_link_button.set_uri("https://github.com/caneladeouro");
}
