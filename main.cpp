#include <iostream>
#include <gtkmm/main.h>
#include <gtkmm/window.h>
#include <gtkmm/button.h>

void on_button_click()
{
  std::cout << "Hello world! I am Guilherme Ferreira" << std::endl;
}

int main(int argc, char* argv[])
{
  Gtk::Main Kit(argc, argv);
  Gtk::Window window;
  Gtk::Button button = Gtk::Button();
  std::string text = "Click here";

  // Estilos dos elementos
  // Window
  window.set_default_size(800, 400);
  window.set_title("Hello world");
  window.set_position(Gtk::WIN_POS_CENTER);
  //margin: window.set_border_width(10);

  // button
  button.set_label(text);
  button.signal_clicked().connect(sigc::ptr_fun(&on_button_click));
  button.show();
  window.add(button);

  Gtk::Main::run(window);

  return 0;
}
