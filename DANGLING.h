/******************************************************************************

Dangling Reference. este ejemplo de dangling Reference se obtuvo en el ppt numero 6
del material del curso de lenguajes de programacion en Canvas...

*******************************************************************************/
#include <iostream>

using namespace std;

int dangling()
{
    cout<<"________________________________________"<<endl<<endl;
    cout<<"Ejemplo de un caso de Dangling Reference"<<endl;
    cout<<"________________________________________"<<endl<<endl;
    
    int *p, *q;
    p = (int *)malloc(sizeof(int));
    
    cout<<"dato de p:       "   <<*p<<endl;
    cout<<"direccion de p:  "   <<p<<endl;
    cout<<"direccion de q:  "   <<q<<endl;
    *p = 6; 
    q = p; //se igualan los valores en base a las direcciones de p y q.
    
    cout<<"________________________________________"<<endl<<endl;
    cout<<"otorgamos el valor a *p=6"<<endl;
    cout<<"realizamos q=p"<<endl;
    cout<<"________________________________________"<<endl<<endl;
    cout<<"dato de p:  "<<*p<<endl;
    cout<<"direccion de p:  "<<p<<endl;
    cout<<"dato de q:  "<<*q<<endl;
    cout<<"direccion de q:  "<<q<<endl;
    free(p);
    /*
    en este momento es cuando ocurre el dangling reference. la variable "q" no tiene
    a una direccion especifica a la cual debe apuntar, esta apuntando a una direccion
    que previamente ha sido devuelto a la lista de bloques en desuso. 
    */
    cout<<"________________________________________"<<endl<<endl;
    cout<<"liberamos la direccion de memoria de p"<<endl;
    cout<<"________________________________________"<<endl<<endl;
    cout<<"dato de p:  "<<*p<<endl;
    cout<<"direccion de p:  "<<p<<endl;
    cout<<"dato de q:  "<<*q<<endl;
    cout<<"direccion de q:  "<<q<<endl;
    /*
    este problema generará datos que van más allá del ambito computacional si no se
    les plantea una solución oportuna.
    */
    return 0;
}