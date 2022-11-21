#include <stack>
#include <iostream>

using namespace std;

//juntar 2 stack
stack <int> juntarstack(stack <int> A,stack <int> B)
{
    stack <int> aux;
    while(A.empty()==0)
    {
        aux.push(A.top());
        A.pop();
    }
    while(B.empty()==0)
    {
        aux.push(B.top());
        B.pop();
    }
    return aux;
}

//revisar un numero en un stack
bool revisarstack(stack <int> A, int elemento)
{
//funciona
    while(A.empty()==0)
    {
        if(A.top()==elemento)
            return 1;
        else
            A.pop();
    }
    return 0;
}

//ver un stack
void verstack(stack <int> A)
{
//funciona
    while(A.empty()==0)
    {
        cout<<A.top()<<" - ";
        A.pop();
    }
    cout<<endl;
}

//crear interseccion
stack <int> interseccion(stack <int> A,stack <int> B)
{
    stack <int> aux;
    while(A.empty()==0)
    {
        if(revisarstack(B,A.top())==1)
        {
            aux.push(A.top());
        }
        A.pop();
    }
    return aux;
}

//elimina los duplicados de un stack
stack <int> duplicados(stack <int> A)
{
    stack <int> aux;
    int elemento;
    while(A.empty()==0)
    {
        elemento=A.top();
        A.pop();
        if(revisarstack(A,elemento)==0)
        {
            aux.push(elemento);
        }
    }
    return aux;
}

//elimina un elemto definido del stack
stack <int> eliminax(stack <int> A, int elemento)
{
    stack <int> aux;
    int i=0;
    while(i==0){
        if(A.empty()==0)
        {
            if(A.top()==elemento)
            {
                A.pop();
                i=1;
            }
            else
            {
                aux.push(A.top());
                A.pop();
            }
        }
        else
        {
            i=1;
        }
    }
    return juntarstack(aux,A);
}

//diferencia de dos stack
stack <int> diferencia(stack <int> A,stack <int> B)
{
    stack <int> inter;
    stack <int> aux;
    
    inter = interseccion(A,B);
    while(inter.empty()==0)
    {
        if(revisarstack(A,inter.top())==1)
        {
            A = eliminax(A,inter.top());
            inter.pop();
        }
    }
    return A;
    
}

//vacia una lista
void vaciar(stack <int> A)
{
    while(A.empty()==0)
        A.pop();
}

//FUNCION UNION
void UNION(stack <int> A,stack <int> B)
{
    //union = A+B - A"inter"B
    stack <int> unionAB;
    
    unionAB = juntarstack(A, B);
    //cout<<"unionAB"<<endl;
    //verstack(unionAB);
    
    unionAB = duplicados(unionAB);
    //cout<<"elimina duplicados"<<endl;
    //verstack(unionAB);
    
    cout<<"final union"<<endl;
    verstack(unionAB);
}

void INTERSECCION(stack <int> A,stack <int> B)
{
    
    stack <int> interseccionAB;
    interseccionAB = interseccion(A,B);
    
    cout<<"final interseccionAB"<<endl;
    verstack(interseccionAB);
}

void DIFERENCIA(stack <int> A,stack <int> B)
{
    stack <int> diferenciaAB;
    diferenciaAB = diferencia(A,B);
    
    cout<<"final diferenciaAB"<<endl;
    verstack(diferenciaAB);
}



int conjuntos()
{
    stack <int> conjunto1;
    stack <int> conjunto2;
    int variable;
    
    reinicio:
    vaciar(conjunto1);
    vaciar(conjunto2);
    int numerolista=1,veces=0,cantidad=0;
    
    asignacion:
        cout<<"ingrese un valor de la lista, cuando ingrese un -1, pasará a la siguiente lista o al menú"<<endl;
        cin>>variable;
        if(variable==-1)
        {
            if(cantidad==0)
            {
                cout<<"debe ingresar minimo 1 numero"<<endl;
                goto asignacion;
            }
            veces++;
            numerolista=2;
            cantidad=0;
            if(veces==2)
                goto menu;
            goto asignacion;
        }
        else
        {
            if(variable>16 || variable<-1)
            {
                cout<<"valor no valido, intente denuevo"<<endl;
                goto asignacion;
            }
            else
            {
                if(numerolista==1)
                {
                    cantidad++;
                    goto asignacionA;
                }
                else
                {
                    cantidad++;
                    goto asignacionB;
                }
            }
        }
        
    asignacionA:
        if(revisarstack(conjunto1,variable)==0)
        {
            conjunto1.push(variable);
            goto asignacion;
        }
        else
        {
            cout<<"valor ya ingresado"<<endl;
            goto asignacion;
        }
        
    asignacionB:
        if(revisarstack(conjunto2,variable)==0)
        {
            conjunto2.push(variable);
            goto asignacion;
        }
        else
        {
            cout<<"valor ya ingresado"<<endl;
            goto asignacion;
        }

    menu:
    //vaciarlista(RESULTADO);
    cout<<"los cambios no seran guardados"<<endl;
    
    cout<<"conjunto 1"<<endl;
    verstack(conjunto1);
    
    cout<<"conjunto 2"<<endl;
    verstack(conjunto2);
    
    cout<<"que desea hacer:"<<endl;
    cout<<"1.-unir los conjuntos"<<endl;
    cout<<"2.-intersectar los conjuntos"<<endl;
    cout<<"3.-diferencial A - B de los conjuntos"<<endl;
    cout<<"4.-diferencial B - A de los conjuntos"<<endl;
    cout<<"5.-reiniciar"<<endl;
    cout<<"0.-salir"<<endl;
    cin>>variable;
    switch(variable)
    {
        case 0:
            goto salir;
        case 1:
            goto unir;
        case 2:
            goto intersectar;
        case 3:
            goto diferencial;
        case 4:
            goto diferencial2;
        case 5:
            goto reinicio;
        default:
            cout<<"valor no valido, volviendo al menu"<<endl;
            goto menu;
    }
    
    unir:
        UNION(conjunto1, conjunto2);
        goto menu;
        
    intersectar:
        INTERSECCION(conjunto1, conjunto2);
        goto menu;
        
    diferencial:
        DIFERENCIA(conjunto1, conjunto2);
        goto menu;
        
    diferencial2:
        DIFERENCIA(conjunto2, conjunto1);
        goto menu;
    
    salir:;
    

    return 0;
}
