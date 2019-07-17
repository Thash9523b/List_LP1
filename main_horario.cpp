#include "Horario.cpp"
#include <iostream>
using namespace std;

int main (){

    Horario h1 = Horario(15, 23, 30);
    Horario h2 = Horario(25, 24, 49);
    Horario h3 = Horario(20, 00, 15);

    cout << "Hora: " << h1.getHora() << ":" << h1.getMinu() << ":" << h1.getSeg()<< endl;
    cout << "Hora: " << h2.getHora() << ":" << h2.getMinu() << ":" << h2.getSeg()<< endl;
    cout << "Hora: " << h3.getHora() << ":" << h3.getMinu() << ":" << h3.getSeg()<< endl;



return 0;
}
