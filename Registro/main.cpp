#include <iostream>
#include "Seccion.h"

using namespace std;

//Seccion *objSeccion;
Seccion *objSeccion= new Seccion(10);
string *Listado, *ptr;
int m;
int *p;
int suma =0;

int main()
{
    objSeccion->setNombre("Programacion I");
    objSeccion->setAula("666");
    objSeccion->setHora("1800");
    objSeccion->setUV("5");

   // objSeccion->setCupos(3);

    objSeccion->Matricular("Pedro");
    objSeccion->Matricular("Pablo");
    objSeccion->Matricular("Vilma");

    objSeccion->setCupos(10);

    objSeccion->Matricular("Bety");

    cout << objSeccion->getNombre();
    Listado = objSeccion->Listado();

    ptr= Listado;
    cout << endl << *ptr;
    ptr++;
    cout << endl << *ptr;
    ptr++;
    cout << endl << *ptr;

    cout << endl << "======Con ciclo for=======";
    ptr= Listado;
    for(int i= 0; i <= objSeccion->getUltimo(); i++){
        cout << endl << *ptr;
        ptr++;

        }

       // Seccion *p =new Seccion();


        cout <<endl<< "Ingresar mas cupos: ";
        cin>> m;
       // p->setCupos(n);
        p =new int[m];


        for(int j=1; j<= m; j++){
            cout<< "Introduzca el nombre del alumno: " << j+0<< ": ";
            cin>> Listado[j];
            ptr=Listado;
        }

         cout<< "Alumnos Ingresados: ";
        for(int j=1; j<=m; j++){
            cout<< endl << Listado[j] << ".";

        }
        //for(int j=0; j<=objSeccion->getUltimo(); j++){

        cout<< endl << " Lista de Alumnos: ";
        for(int j=0; j<=objSeccion->getUltimo(); j++){

        cout<< *ptr<<", ";
         ptr++;
        }
         delete[]p;

        return 0;
        }



