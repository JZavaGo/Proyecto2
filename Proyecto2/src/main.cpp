#include <iostream>
#include "arbolB.h"
#include "Archivo.h"
#include "List.h"

using namespace std;

int main(){


    //Registros();
    int val, opt, max;
    int cant;
    node *start = nullptr;

    cout<<"Llaves por paginas: ";
    cin>>max;
    BTree * t = new BTree(max);;
    cout << "Cuantos registros quiere: ";
    cin >>	cant;

    t= Registro(cant,t,max);

    while (true) {
        cout<<"[1] Insertar\n[2] Buscar\n";
        cout<<"[3] Impresion (min a max)\n";
        cout<<"[4] Salir\n Opcion: ";
        cin >> opt;
        cout << endl;
        switch (opt) {
            case 1:
                cout<<"Ingrese nodo:";
                cin >> val;
                t->insert(val);


                break;
            case 2:
                cout<<"Elemento a buscar:";
                cin >> val;
                (t->search(val) != NULL)? cout << "\nExiste" : cout << "\nNo Existe";
                cout << endl;
                break;
            case 3:
                t->traverse();
                cout << endl;
                break;
            case 4:
                exit(0);
        }
        cout << endl;
    }
}
