# C++ #

## Lenguaje C++ como mi primer lenguaje de programación ##
Es un lenguaje de programación de nivel medio[1], el cual es compilado[2], con la finalidad de crear y desarrollar aplicaciones las cuales resuelven problemas de la forma más sencilla o hasta el uso de algunas operaciones en especifico del sistema operativo.

Es un lenguaje que utiliza el paradigma de programación estructurada[3] y el paradigma orientado a objetos[4], dependiendo de que es lo que busca realizarse.

Es necesario entender que este lenguaje en cualquiera de los dos paradigmas que soporta, es necesario escribir funciones principales para que este pueda ser ejecutado externamente por el sistema operativo, y a su vez que en caso de reescribir o sustituir código es necesario volver a compilar esto con el fin de crear el nuevo archivo ejecutable (binario), el cual arrancara en el sistema operativo.

__Glosario__

* Programación de nivel medio
1. Hace referencia a la interacción que hay entre el lenguaje con respecto al lenguaje humano y el lenguaje maquina, entre más alto sea el nivel más relación hay con respecto al lenguaje humano y más alejado esta con respecto al lenguaje maquina.
* Compilar
2. Es una de las fases en las cuales el lenguaje de programación pasa a volverse un archivo ejecutable acorde a su sistema operativo, arquitectura y su ensamblador
* Paradigma Estructurado
3. Es una forma de programación la cual se base en escribir código de tal forma en la que se modula las tareas en funciones con la facilidad de reutilizar código y en ocasiones realizar varias tareas en un solo archivo o en un conjunto de archivos
* Paradigma Orientado a Objetos
4. Es un paradigma bastante extenso que jerarquiza las tareas y módulos de código que cuentan con variables y funciones para resolver una tarea en especifico, por otro lado este modelo es muy socorrido en la Ingeniería de Software.

## Consejos a la hora de programar ##

* Saber que se desea hacer
* Conocer que entra (vía teclado o archivo)
* Conocer que sale (vía pantalla o archivo)
* Ser tolerable a fallar y eliminar algo

## Estructura básica de un programa ##

Es necesario saber que en este lenguaje de programación existe algo llamado función principal (main), donde se escribe y describe gran parte de la funcionalidad de la resolución de un problema.

Por otro lado hay una estructura básica a la hora de escribir un código en este lenguaje, a continuación se muestra:
```cpp
  #include <iostream>             // Biblioteca necesaria para el programa
  /* Esto es un comentario el cual es ignorado por el compilador */
  using namespace std;            // Busca el espacio de memoria standar (std)

  int main(void){
    /* Every code here */
    return 0;
  }
```
