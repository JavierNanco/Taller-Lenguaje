#include <iostream>
using namespace std;

int mult(int x, int y) 
{
    int z=0;
    z=x<<y; //se realiza el desplazamiento de bits por potencia de 2 para multiplicar.
    return z;
}

int divi(int x, int y)
{
    int z=0;
    z=x>>y; //se realiza el desplazamiento de bits por potencia de 2 para dividir.
    return z;
}

void potencia()
{
    int a,b;
    int opcion1;
    cout << "\n\t    -Menu desplazamiento de BITS-";
		
    cout << "\n\t\t----------------";
    cout<<"\n ";
    cout<<"\t0.-Dividir\n ";
    cout<<"\t1.-Multiplicar\n ";
    cout<<"\tSeleccione una alternativa[0-1]:   ";
    cin >> opcion1; 
    
    if(opcion1==0) // if nos permite saber que opcion elegimos.
    {
        cout<<"\n\tingrese el numero al cual se le realizara la operacion: ";
        cin>> a;
        cout<<"\tingrese el valor de la potencia: ";
        cin>> b;
        cout<<"\tresultado: ";
        cout<<divi(a,b);// se llama a la funcion division por desplazamiento.
    }
        if(opcion1==1)// if nos permite saber que opcion elegimos.
    {
        cout<<"\n\tingrese el numero al cual se le realizara la operacion: ";
        cin>> a;
        cout<<"\tingrese el valor de la potencia: ";
        cin>> b;
        cout<<"\tresultado: ";
        cout<<mult(a,b);// se llama a la funcion multiplicacion por desplazamiento.
    }
}