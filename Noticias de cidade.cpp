#include <iostream>
#include <string>

using namespace std;

class teste
{
    public:
    static void funcao()
    {
        string salva;
        cout << "por favor digita uma cidade e mostrarei as noticias dela" << "\n";
        cin >> salva;
        string cidades[] = {"Jaboticabal", "Taquaritinga", "Barrinha", "Matao"};
        if(salva == cidades[0])
        {
            string crimes = "A cidade de jaboticabal passou por um crime de fogo";
            string tempo = "A cidade esta com um tempo ameno e seco";
            cout << crimes << "\n";
            cout << tempo;
        };

    };

};


int main()
    {
        cout << "Teste";
        teste meuobjeto;
        meuobjeto.funcao();
        return 0;
    }
