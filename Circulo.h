#ifndef CIRCULO_H_
#define CIRCULO_H_
class Circulo
{
private:
    double raio; // > 0
public:
    bool setRaio(double);
    double getRaio() const;
    double Area() const;
    double Perimetro() const;
};
bool Circulo::setRaio(double aux)
{
    if (aux > 0)
    {
        raio = aux;
        return true;
    }
    else
    {
        return false;
    }
}
double Circulo::getRaio() const
{
    return raio;
}
double Circulo::Area() const
{
    return 3.14 * (raio * raio);
}
double Circulo::Perimetro() const
{
    return 2 * 3.14 * raio;
}
#endif