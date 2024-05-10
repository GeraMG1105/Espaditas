#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <thread>  //Hilos de procesos
#include <fstream> // COntrol de cadenas
#include <string>  // control de cadenas

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
using namespace ftxui;

    // Titulo
    Element title =
        hbox({
            paragraphAlignCenter(" ⸸ᨃ⸙ᨏ⸙ᨑ⸙⸙ᨒ⸸    L A S   E S P A D I T A S    ⸸ᨃ⸙ᨏ⸙ᨑ⸙⸙ᨒ⸸ ") | border | flex,
        });

    //   Menu
    auto cell = [](const char *t) { return paragraphAlignCenter(t) | border; };
    auto menus =
        vbox({
           
            separator(),
            cell(" ⎞⚔⎛    JUGAR    ⎞⚔⎛ "),
            separator(),
            cell(" ⎞⚔⎛   AJUSTES   ⎞⚔⎛ "),
            separator(),
            cell(" ⎞⚔⎛    SALIR    ⎞⚔⎛ "),
            separator(),
           
        });

    auto screen = Screen::Create(
        Dimension::Full(),     
        Dimension::Fixed(7) 
    );
   ftxui::Render(screen, title);
    screen.Print();
   ftxui::Render(screen, menus);
    screen.Print();

    return EXIT_SUCCESS;
}
