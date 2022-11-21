#include <iostream>

using namespace std;

void rut()
{

    string cadena;
    int longof;
    
//añadir un caracter ya que al string anterior como es trabjado como arreglo no se le puede aumentar el espacio, se lo aumentamos
//con otro caracter

    cout <<endl <<"\t<RUN>  ::= <NN> - <DV>";
    cout <<endl <<"\t<NN>   ::= <DD> | <DD> <NN>";
    cout <<endl <<"\t<DV>   ::= <DD> | K";
    cout <<endl <<"\t<DD>   ::= 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |";
    cout <<endl <<"\tEscriba una sentencia (debe cumplir con el BNF):\t";
    cin >> cadena;
    longof = cadena.size();

    if(3>longof || longof>11 )
    {
        cout << "la cadena supera el limite establecido(10) o no cumple con el minimo establecido(2), porfavor intente denuevo" <<endl;
        goto no;
    }
    else
    {
        for(int k=0;k<longof-3;k++)
        {
            if(cadena[k]<47|| cadena[k]>58)
            {
                cout << "la cadena contiene caracteres no numericos donde si deberia, intente denuevo"<<endl;
                goto no;
            }
        }
        
        if(cadena[longof-2]!='-')
            goto no;
        else
        {
            if(cadena[longof-1]>47 && cadena[longof-1]<58)
            goto si;
            else
            {
                if(cadena[longof-1]=!75)
                goto no;
            else
                goto si;
            }
        }    
    }
    
    si:
        cout <<endl <<"\tsi cumple con las reglas del BNF indicado..." <<endl;
        goto salir;
    no:
        cout <<endl<< "\tno cumple con las reglas del BNf indicado..." <<endl;
        goto salir;
    
    salir:;
}