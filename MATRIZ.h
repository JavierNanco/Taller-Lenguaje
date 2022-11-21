#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <math.h>
using namespace std;

typedef int matriz[100][100];
typedef int arreglo[100];

void limpiar(matriz a,int filas, int columnas)
{
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            a[i][j] = 0;
        }
    }
    //cambia los valores de la matriz inicial a 0.
}

void recorrer(matriz a, int filas, int columnas)
{
    int auxiliar=0;
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            cout<<"["<<a[i][j]<<"]";
        }
        auxiliar++;
        
        if(auxiliar=columnas)
        {
            cout<<endl;
        }
    }
    //imprime en pantalla la matriz, expresando un salto de linea para que quede de la forma cuadrada.
}

void llenar(matriz a,int filas, int columnas)
{
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            a[i][j] = rand() % 9 + 1; // Genera un valor entre 1 y 9
        }
    }
    cout <<"matriz llena con numeros aleatorios entre 1 y 9:"<<endl;
    //llena la matriz de prueba con el valor de enteros aleatorios.
}

void diagonalSuperior(matriz a,int filas, int columnas)
{
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            if(j<i)
            {
                a[i][j] = 0; 
            }
        }
    }
    cout <<"Matriz diagonal superior:"<<endl;
    //cambia la matriz ingresada de tal modo que quede triangular con la diagonal superior.
}

void diagonalInferior(matriz a,int filas, int columnas)
{
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            if(j>i)
            {
                a[i][j] = 0; 
            }
        }
    }
    cout <<"Matriz diagonal inferior:"<<endl;
    //cambia la matriz ingresada de tal modo que quede triangular con la diagonal inferior.
}

void ingresarVector(matriz a, int filas, int columnas, arreglo b)
{
    int u=0;
    
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            if(a[i][j] != 0)
            {
                b[u]=a[i][j];
                u++;
            }
        }
    }
}

void imprimeVector(arreglo b, int largo) //imprime cada valor distinto de 0 del vector en pantalla.
{
    cout<<"Vector resultante:"<<endl<<endl;
    for(int u=0;u<largo;u++)
    {
       if(b[u]!=0)
       {
           cout<<"["<<b[u]<<"]"<<endl;
       }
    }
}

void vaciaVector(arreglo b, int largo) //funcion que deja el vector solo con valores en 0.
{
    for(int u=0;u<largo;u++)
    {
        b[u]=0;
    }
}

void llamaFuncionMatriz()
{
    matriz a;
    arreglo b;
    
    llenar(a,10,10);
    recorrer(a,10,10);
    
    cout<<endl<<endl;
    
    diagonalSuperior(a,10,10);
    recorrer(a,10,10);
    
    cout<<endl<<endl;
    
    llenar(a,10,10);
    recorrer(a,10,10);
    
    cout<<endl<<endl;
    
    diagonalInferior(a,10,10);
    recorrer(a,10,10);
    
    cout<<endl<<endl;
    
    vaciaVector(b,100);
    ingresarVector(a,10,10,b);
    imprimeVector(b,100);
}