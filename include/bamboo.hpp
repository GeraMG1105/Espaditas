#include <ftxui/dom/elements.hpp>
#include <fstream> 
#include <string>

using namespace std;
using namespace ftxui;

class Bamboo
{
private:
    ifstream asset; 
    int xPos; //poscision del bamboo en el piso
    Element contenido;


public:
    Bamboo(int h){
        string linea;
        Elements elementos;
        switch (h)
        {
            case 1:
                asset.open("/workspaces/Espaditas/assets/bamboo1.txt");
                while(getline(asset,linea))
                {
                elementos.emplace_back(text(linea));
                
                }
                contenido=vbox(elementos);
                asset.close();

                break;
            case 2:
                asset.open("/workspaces/Espaditas/assets/bamboo2.txt");
            while(getline(asset,linea)){

                elementos.emplace_back(text(linea));
        
                }
                contenido=vbox(elementos);
                asset.close();
                break;

            case 3:
                asset.open("/workspaces/Espaditas/assets/bamboo3.txt");
                while(getline(asset,linea))
            {
                elementos.emplace_back(text(linea));
            }
                contenido=vbox(elementos);
                asset.close();
                break;

        default: 
        break;
        }
        


    }
    




    ~Bamboo();
};


