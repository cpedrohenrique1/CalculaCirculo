#ifndef TESTACIRCULO_H_
#define TESTACIRCULO_H_
#include "Circulo.h"
class TestaCirculo
{
private:
    Circulo Objeto;

public:
    void menu();
};
void TestaCirculo::menu()
{
    double raio;
    int flag;
    do
    {
        do
        {
            cout << "Insira raio: ";
            cin >> raio;
        } while (Objeto.setRaio(raio) == false);
        cout << "Area: " << Objeto.Area() << "\n";
        cout << "Perimetro: " << Objeto.Perimetro() << "\n";
        cout << "Quer continuar?\n1 - Sim\n2 - Nao\n";
        cin >> flag;
    } while (flag == 1);
}
#endif