#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <fstream> 
#include <string>
#include <thread>
#include <iostream>

using namespace std;
using namespace ftxui;

class Nube
{
private:
    Screen pantalla;
public:

    Nube();
    void animNubes(){

         Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Full()
    );

       
         int x = 0;
        while (x< 50) {
            x++;
            pantalla.Clear();
            this_thread::sleep_for(chrono::milliseconds(100));

            pantalla.PixelAt(x, 2).character = "   __   _";
            pantalla.PixelAt(x, 3).character = " _(  )_( )_";
            pantalla.PixelAt(x, 4).character = "(_   _    _)";
            pantalla.PixelAt(x, 5).character = "  (_) (__)";
            pantalla.Print();
            cout<<pantalla.ResetPosition();
            
    }
    }
    ~Nube();
};
