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
            separator(),
            paragraphAlignCenter(" ⸸ᨃ⸙ᨏ⸙ᨑ⸙⸙ᨒ⸸    L A S   E S P A D I T A S    ⸸ᨃ⸙ᨏ⸙ᨑ⸙⸙ᨒ⸸ ") | border | flex,
            separator(),
        });

    //   Menu
    auto cell = [](const char *t) { return paragraphAlignCenter(t) | border; };
    auto menu =
        gridbox({
            {cell(" ⎞ ⚔ ⎛ "), cell("    JUGAR    "), cell(" ⎞ ⚔ ⎛ ")},
            {cell(" ⎞ ⚔ ⎛ "), cell("   AJUSTES   "), cell(" ⎞ ⚔ ⎛ ")},
            {cell(" ⎞ ⚔ ⎛ "), cell("    SALIR    "), cell(" ⎞ ⚔ ⎛ ")},
        });

    auto titleScreen = Screen::Create(
        Dimension::Full()  ,    // Width
        Dimension::Fit(title)// Height
    );
    Render(titleScreen, title);
    
   auto menuScreen = Screen::Create(
      Dimension::Full(),
      Dimension::Fit(menu)
   ); 
    titleScreen.Print();

    Render(menuScreen, menu);
    menuScreen.Print();

    return EXIT_SUCCESS;
}
