#include <iostream>
using namespace std;
int main()
{
    char Menu;
    int Menuinterno;
    float Numero;
    cout << "¿Que conversor usara?: Peso[p],Distancia[d],Moneda[m]"<<endl<<"Selecciona: ";
    cin >> Menu;
    switch (Menu)
    {
    case 'p':cout << "Esta usando el conversor de Peso en Kilogramos para transformar a:tonelada[1], onza[2], libra[3], micrograms[4], Teragramos[5]"<<endl<<"Selecciona peso: ";
        cin >> Menuinterno;
        cout << "Introduzca Kilogramos: ";
        cin >> Numero;
        switch (Menuinterno)
        {
        case 1: cout << Numero << " Kg equivale a " << Numero / 1000 << " Toneladas.";
            break;
        case 2: cout << Numero << " Kg equivale a " << Numero * 35.274 << "Onzas.";
            break;
        case 3:cout << Numero << " Kg equivale a " << Numero * 2.205 << "Libras.";
            break;
        case 4:cout << Numero << " Kg equivale a " << Numero * .000000001 << "Microgramos.";
            break;
        case 5: cout << Numero << " Kg equivale a " << Numero * 1000000000 << "Teragramos.";
            break;
        default: cout << "Error.";
            break;
        }
        break;
    case 'd':cout << "Esta usando el conversor de Distancia en Kilometros para transformar a: pulgada[1],pie[2],centimetros[3],nanometro[4],años luz[5]."<<endl<<"Selecciona distancia: ";
        cin >> Menuinterno;
        cout << "Introduzca distancia: ";
        cin >> Numero;
        switch (Menuinterno)
        {
        case 1: cout << Numero << " Km equivale a " << Numero * 39370 << " pulgadas.";
            break;
        case 2: cout << Numero << " Km equivale a " << Numero * 3281 << " pies.";
            break;
        case 3:cout << Numero << " Km equivale a" << Numero * 100000 << " centimetros.";
            break;
        case 4: cout << Numero << " Km equivale a " << Numero * .000000000001 << " nanometros.";
            break;
        case 5:cout << Numero << " Km equivale a" << Numero/(9.461 * pow(10,12))  << "años luz.";
            break;
        default:cout << "Error";
            break;
        }
        break;
    case 'm':cout << "Esta usando el conversor de Moneda en pesos Mexicanos a:Yenes Japoneses[1],Franco Suizo[2],Dolar[3],Euro[4],Libra Esterlina[5]"<<endl<<"Seleccionna divisa: ";
        cin >> Menuinterno;
        cout << "Introduzca Pesos Mexicanos: ";
        cin >> Numero;
        switch (Menuinterno)
        {
        case 1: cout << Numero << " Pesos equivale a " << Numero * 6.76 << " Yenes Japoneses.";
            break;
        case 2:cout << Numero << " Pesos equivale a " << Numero * .048 << "Francos Suizos.";
            break;
        case 3:cout << Numero << " Pesos equivale a " << Numero * 0.053 << " Dolares.";
            break;
        case 4:cout << Numero << " Pesos equivale a " << Numero * 0.049 << " Euros.";
            break;
        case 5:cout << Numero << " Pesos equivale a " << Numero * 0.042 << " Libras esterlinas.";
            break;
        default:cout << "Error";
            break;
        }
        break;  
    default:cout << "Error";
    }
    return 0;
}
