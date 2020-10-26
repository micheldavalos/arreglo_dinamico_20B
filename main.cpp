#include <iostream>
#include "arreglo.h"
#include "personaje.h"
using namespace std;

int main()
{
    Arreglo<Personaje> personajes;

    Personaje p01("michel", "zombie", 100.0, 100);
    Personaje p02("davalos", "troll", 90.0, 50);
    Personaje p03("boites", "guerrero", 80.0, 10);

    personajes << p01 << p02 << p03 << p02 << p02;
    Personaje p04("davalos", "troll", 90.0, 50);

    Arreglo<Personaje*> ptrs = personajes.buscar_todos(p04);

    if (ptrs.size() > 0) {
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Personaje *p = ptrs[i];
            cout << *p << endl;
        }
    }
    else {
        cout << "No existen coincidencias" << endl;
    }

    // Personaje *ptr = personajes.buscar(p04);

    // if (ptr != nullptr) {
    //     cout << *ptr << endl;
    // }
    // else
    // {
    //     cout << "No existe" << endl;
    // }
    

    /*Arreglo<int> arreglo;

    for (size_t i = 0; i < 10; i++) {
        arreglo.insertar_final(i);
    }
    arreglo.insertar(100, 2);
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(4);
    for (size_t i = 0; i < arreglo.size(); i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    int *v = arreglo.buscar(2);
    cout << v << " " << *v << endl;
    *v = 20;
    for (size_t i = 0; i < arreglo.size(); i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;*/


    return 0;
}