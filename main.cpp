#include "BNF.h"
#include "DESPLAZABITS.h"
#include "MATRIZ.h"
#include "DANGLING.h"
#include "CONJUNTOS.h"

int main()
{
    int seleccionMenu =0;
    while(true)
	{
		cout << "\n\n\t\t     -Menu-";
		
        cout << "\n\t\t----------------";
        
    	cout << "\n\t1.-BNF:";
    	
    	cout << "\n\t2.-Desplazar bits:";
    	
   		cout << "\n\t3.-Matriz Cuadrada:";
   		
   		cout << "\n\t4.-Dangling:";
   		
   		cout << "\n\t5.-Conjuntos:";
   		
   		cout << "\n\t6.-SALIR:";
    	
    	cout << "\n\tSeleccione una alternativa[1-6]:   ";
    	   
    	cin >> seleccionMenu;
    	
    	cout << endl;
    	cin.clear();
        cin.ignore();
    	
        switch(seleccionMenu)
        {
    	    case 1:
                rut();
    	    break;
    	
    	    case 2:
                potencia();
    	    break;
    	
    	    case 3:
                llamaFuncionMatriz();
    	    break;
    	
    	    case 4:
                dangling();
    	    break;
    	    
    	    case 5:
                conjuntos();
    	    break;
    
    	    case 6:

    	        exit(-1);
    	    default:
    	        cout << "\t\t[Error] opción inválida"<<endl;
		}
	}
    return 0;
}
