// 45.Sa se faca un proiect cu problema sortarii cu ajutorul tehnicii bulelor.
// - descrescator, fara variabila semafor, cu parcurgeri ulterioare optimizate(pozitia ultimei interschimbari);
// -proiect bazat pe obiecte(PBO).

#include "modul.h"
#include"Teste.h"
#include<iostream>
using namespace std;

void citire(SECVENTA& s)
{
    int elem;
    int dim = 0;
    while (dim < 1) {
        cout << "Dati lungimea sirului:";
        cin >> dim;
    }
    s.setLung(dim);

    cout << "\ndati " << dim << " elemente ale secventei:\n";
    for (int i = 0; i < dim; i++)                     // citirea elementelor
    {
        cout << "elem[" << i << "]=";
        cin >> elem;
        s.setElem(elem, i); 
    }
}

void afisare(SECVENTA& s)
{
    int dim = s.getLung();
    cout << endl;
    for (int i = 0; i < dim; i++)
    {
        if (i > 0 && !(i % 10)) cout << endl;      //se afiseaza 10 de lement pe linie
        cout << " " << s.getElem(i);
    }
}

int main() {
    Teste test;
    test.teste_sortare();
    cout << "Testele au trecut cu brio!!! " << "\2"<<endl<<endl;

    SECVENTA    sir;
    citire(sir);

    cout << "\nsecventa inainte de sortare:\n";
    afisare(sir);

    sir.bubbleSort();

    cout << "\n\nsecventa dupa sortare:\n";
    afisare(sir);
    return 0;
}
