#include <iostream>
#include <thread>
#include <ftxui/screen/screen.hpp>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[]){

    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Full());

    int x = 0;
    while (true)
    {
        cout << pantalla.ResetPosition(true);
        x++;
       
        pantalla.Clear();
        this_thread::sleep_for(0.1s);

        pantalla.PixelAt(x, 3).character = "   __   _";
        pantalla.PixelAt(x, 4).character = " _(  )_( )_";
        pantalla.PixelAt(x, 5).character = "(_   _    _)";
        pantalla.PixelAt(x, 6).character = "  (_) (__)";
        pantalla.Print();
        
    }
    return 0;
}