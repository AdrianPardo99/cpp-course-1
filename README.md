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

__Estructura básica__
```cpp
  #include <iostream>             // Biblioteca necesaria para el programa
  /* Esto es un comentario el cual es ignorado por el compilador */
  using namespace std;            // Busca el espacio de memoria standar (std)

  int main(void){
    /* Every code here */
    return 0;
  }
```

Al igual resaltemos que el tipo de archivo que se guarda nuestro código fuente es bajo la extensión ".cpp"

__¿Qué sucede sino inserto la línea using namespace?__

Ahora bien para el caso donde no se añade esta línea de código cual es la consecuencia, pues bien en C++ al no usar ese espacio de memoria tendremos que escribir código de salida a pantalla o de entrada de teclado a través de una escritura más larga pero que no altera el comportamiento, en el apartado de salida a pantalla de un mensaje y de entrada de teclado se te mostrara en como se hace en ambos casos.

### Hola mundo ###
Como popularmente lo trabajan todos los programadores a la hora de aprender un lenguaje de programación siempre escriben un "Hola mundo!", por ello a continuación se te muestra el ejemplo de como se escribe y la diferencia con respecto a usar el namespace.

__Caso con namespace__
```cpp
  #include <iostream>
  using namespace std;

  int main(void){
    cout<<"Hola mundo!"<<endl;
    return 0;
  }

  /*  A la salida de pantalla después de compilar o usar el compilador en línea obtendremos
        Hola mundo!
  */
```
__Caso sin namespace__
```cpp
  #include <iostream>

  int main(void){
    std::cout<<"Hola mundo!"<<std::endl;
    return 0;
  }

  /*  A la salida de pantalla después de compilar o usar el compilador en línea obtendremos
        Hola mundo!
  */
```

Ahora si bien la diferencia que vemos aquí no es muy grande a la hora de escribir programas muy grandes el no escribir este espacio de memoria de entrada y salida puede resultar contraproducente para nuestros fines de escribir o desarrollar aplicaciones de forma rápida.


## Secuencias de Escape ##
Las secuencias de escape funcionan para definir caracteres que no son imprimibles, de los cuales funcionan para trabajar en nuevas lineas de texto, en retroceso, tabuladores y otros más, los más clásicos que utilizaremos son los siguientes:
| Secuencia | Significado |
| --------- | ----------- |
|    \\n    | Salto de línea, es decir, nueva línea |
|    \\t    | Tabulador equivalente a 5 espacios |
|    \\b    | Retroceder un carácter |
|    \\v    | Tabulador vertical |
|    \\\\   | Impresión del carácter "\\" |
|    \\f    | Salto de página |
|    \\0    | Fin de cadena (Este es un carácter no imprimible pero funciona mucho para saber el ultimo carácter que ha sido escrito) |

Resaltemos que en el código de Hola mundo debemos saber que la instrucción endl es equivalente a "\\n"

## Tipos de datos básicos ##
Los tipos de datos son especificaciones en las cuales se almacenaran desde números enteros, hasta números reales, como en otros casos valores lógicos como verdadero y falso, por ello a continuación te listo los tipos de datos así como los valores que puede aceptar.

| Tipo | Valor |
| ---- | ----- |
| int  | Valor entero de 4 bytes es decir 32 bits cuyos valores van desde -2^{31} hasta 2^{31}-1 en términos numerables: -2147483648 hasta 2147483647 |
| float | Valor real de 4 bytes es decir 32 bits con punto decimal, este se distribuye según el como tenga su notación con respecto al punto decimal y sus decimales |
| bool | Valor lógico booleano de 1 bit cuyo valor solo puede ser true o false |
| double | Parecido a float pero este tiene una extensión de 8 bytes es decir 64 bits |
| long | Parecido a pero este extensión de 8 bytes es decir 64 bits |
| char | Valor de tipo caracter de 1 byte 8 bits que puede almacenar los caracteres existentes |
| string | Es una serie de caracteres que funcionan para mostrar texto |

## Variables ##
Las variables son una serie de posibles valores que podemos asignar desde el programa, incluso desde teclado o de un archivo, por otro lado estas variables aceptan distinto tipos de valores cuya definición es dada a partir de su tipo de dato.

Las variables tienen una regla sintáctica la cual es

* Puede escribirse una variable a partir de una letra mayúscula o minúscula según se desee
* Puede escribirse al inicio con un guion bajo
* Seguido de ello puede acompañarse de más letras o números
* Antes de declarar una variable al inicio debe identificarse el tipo de dato

Ejemplos de una escritura de variable pueden ser la siguientes:
```cpp
  /* Variables de escritura valida */
  int a=0,b=1,_1c=2;
  bool Xx=true;
  float xy=10.3f;
  double xz=10.3333;
  char v='a';
  string mu="Hola mundo";

  /*Variables de escritura no valida*/
  int 12a;
  int -1221212a;
  int -val;
```
## Entrada de texto ##
En C++ hay un y mil maneras de hacer un lectura de datos desde teclado y desde un archivo, por lo que si se desea hacer uso de namespace std lo cual un ejemplo de lectura de cada uno de los datos clásicos es la siguiente forma:
__Forma 1__
```cpp
  #include <iostream>
  using namespace std;

  int main(void){
    int a;
    float b;
    double c;
    char d;
    string e;
    cout<<"Hola, por favor ingresa un numero entero: ";
    cin>>a;
    cout<<"Ahora por favor ingresa un numero real: ";
    cin>>b;
    cout<<"Ahora por favor ingresa otro numero real: ";
    cin>>c;
    cout<<"Ingresa un caracter: ";
    cin>>d;
    cout<<"Ingresa por favor tu nombre: ";
    cin>>e;
    cout<<"Los datos ingresados son los siguientes:\n"<<
    "int\t"<<a<<"\nfloat\t"<<b<<"\ndouble\t"<<c<<"\nchar\t"<<d<<
    "\nString\tHola "<<e<<"\n";
    return 0;
  }
```
Esta forma en la cual se puede leer distintos tipos de datos y distintas variables por lo que en el caso del "string e" si el nombre que se solicita en la lectura contiene espacios en este caso no se podrá mostrar más que la primer linea de datos, por lo que en este sentido podemos solucionarlo modificando el código con lo siguiente.

__Forma 2__
```cpp
  #include <iostream>
  using namespace std;

  int main(void){
    int a;
    float b;
    double c;
    char d;
    string e;
    cout<<"Hola, por favor ingresa un numero entero: ";
    cin>>a;
    cout<<"Ahora por favor ingresa un numero real: ";
    cin>>b;
    cout<<"Ahora por favor ingresa otro numero real: ";
    cin>>c;
    cout<<"Ingresa un caracter: ";
    cin>>d;
    getchar();
    cout<<"Ingresa por favor tu nombre: ";
    getline(cin,e);
    cout<<"Los datos ingresados son los siguientes:\n"<<
    "int\t"<<a<<"\nfloat\t"<<b<<"\ndouble\t"<<c<<"\nchar\t"<<d<<
    "\nString\tHola "<<e<<"\n";
    return 0;
  }
```

En este caso antes del mensaje "Ingresa por favor tu nombre: " se añadió la función getchar() la cual permite omitir el ultimo newline (endl o '\\n') el cual si esta linea es omitida, lo peor que puede pasar es que en la ejecución del programa la línea del getline() sea omitida y el programa termine.

Una recomendación a la hora de programar es saber si en la lectura de datos de tipo serie o cadena de caracteres se realizara con otra función distinta a "cin" y que va en medio de otras peticiones de otro tipo de variables, es decir una lectura de valores enteros, flotantes, o dobles, es recomendable que vaya acompañado de getchar() para que no existan problemas en los cuales una aplicación o programa pueda fallar.

# Operaciones aritméticas y lógicas #
Muchas veces nos vamos a encontrar que en nuestra resolución de problemas con que debemos realizar operaciones matemáticas y lógicas los cuales a continuación se muestran los símbolos y como operan:

## Operación Aritmética ##
| Símbolo | Operación |
| ------- | --------- |
|    +    | Suma de dos datos |
|    -    | Resta de dos datos |
|    *    | Multiplicación de dos datos |
|    /    | División de dos datos en caso de que alguno de los datos o ambos datos sean enteros la división es entera |
|    %    | Modulo de dos datos, este devuelve el residuo de una división entera |

## Operación Lógica ##
Como muchas veces o en ocasiones nos haremos cargo de simular algunos circuitos lógicos o tablas de verdad podremos ahorrarnos esa tarea operando directamente que en muchas ocasiones estas operaciones las podemos hacer para ejecutar ciclos condicionales, u operaciones a nivel de bit.

### Para condicionales ###
| Símbolo | Operación |
| ------- | --------- |
|   &&    | AND condicional |
|   \|\|  | OR condicinal |
|   !     | NOT condicional |

### Para operaciones nivel de bit ###
| Símbolo | Operación |
| ------- | --------- |
|    &    | AND de dos datos |
|    \|    | OR de dos datos |
|    ^    | XOR de dos datos |
|    ~    | NOT de un dato |
