Nombres:    Ignacio Baeza 21.266538-K 

            Javier Nanco  20.883731-1 

Profesor:   Hector Manuel Pincheira Conejeros.

Sección:    411.

Se debe	Desarrollar la aplicación en lenguaje C++, cumpliendo los formalismos de
la programación estructurada o de la programación orientada a objetos e incluyendo
la auto documentación necesaria para describir el propósito de los datos declarados
y el objetivo de las funciones o métodos utilizados.

Con propósitos didácticos se le solicita desarrollar una aplicación que aporte a
la comprensión de algunos de los conceptos tratados en la asignatura Lenguajes de 
Programación. Los conceptos seleccionados para este propósito son sintaxis mediante

1) BNF, debe reconocer:
        
        <RUN> ::= <NN> - <DV>
        <NN> ::= <DD> | <DD> <NN>
        <DV> ::= <DD> | K
        <DD> ::= 0 | 1 | 2 | … | 9

2) Operaciones de desplazamiento de bits:
        
        Operaciones multiplicación y división por potencias mayores que dos utilizando shift.

3) Linealización de estructuras dinámicas:
        
        Operaciones creación y despliegue de una matriz triangular T, es decir, una matriz
        cuadrada en la cual los elementos situados sobre o bajo una de sus diagonales tienen el 
        valor cero. Se debe considerar, en memoria, una representación unidimensional de T 
        linealizada por columnas, la cual sólo contenga los elementos significativos, es decir, 
        que omita aquellos predefinidos con el valor cero. El acceso a los elementos debe ser de
        manera bidimensional, es decir, referenciando elementos de índices [i][j] de modo que a 
        partir de éstos se genere el correspondiente índice [k] de la representación unidimensional.
        
4) Referencias inválidas:
        
        Implementación por programación, del esquema de contador de referencias para controlar y 
        evitar el “Dangling Reference” de memoria, con un claro despliegue de las estructuras 
        utilizadas para tal efecto en cada etapa de la asignación y la devolución de memoria.
        
5) Linealización de arreglos bidimensionales y representación de conjuntos:

        Operaciones unión, intersección y diferencia referidas a un conjunto base T = {x / 0 ≤ x ≤ 15}.
        En todos los casos, se debe incluir código relativo a la captura de datos y al despliegue de 
        resultados, con la finalidad de validar el cumplimiento de lo solicitado.


En consecuencia, la referida aplicación debe contemplar un menú con las opciones atingentes a los conceptos
indicados. el menú se ubicará en el main y desde ahí se haran control de las funciones y se presentará la
opcion salir para finalizar correctamente el programa.