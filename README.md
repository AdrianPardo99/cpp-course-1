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

## Operaciones aritméticas y lógicas ##
Muchas veces nos vamos a encontrar que en nuestra resolución de problemas con que debemos realizar operaciones matemáticas y lógicas los cuales a continuación se muestran los símbolos y como operan:

### Operación Aritmética ###
| Símbolo | Operación |
| ------- | --------- |
|    +    | Suma de dos datos |
|    -    | Resta de dos datos |
|    *    | Multiplicación de dos datos |
|    /    | División de dos datos en caso de que alguno de los datos o ambos datos sean enteros la división es entera |
|    %    | Modulo de dos datos, este devuelve el residuo de una división entera |

### Operación Lógica ###
Como muchas veces o en ocasiones nos haremos cargo de simular algunos circuitos lógicos o tablas de verdad podremos ahorrarnos esa tarea operando directamente que en muchas ocasiones estas operaciones las podemos hacer para ejecutar ciclos condicionales, u operaciones a nivel de bit.

#### Para condicionales ####
| Símbolo | Operación |
| ------- | --------- |
|   &&    | AND condicional |
|   \|\|  | OR condicinal |
|   !     | NOT condicional |

#### Para operaciones nivel de bit ####
| Símbolo | Operación |
| ------- | --------- |
|    &    | AND de dos datos |
|    \|    | OR de dos datos |
|    ^    | XOR de dos datos |
|    ~    | NOT de un dato |

##### Ejemplos #####
```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    float a=10.5f;
    int b=10,c=30;
    cout<<"División entera (b/c): "<<b/c<<"\nModulo (b%c): "<<b%c<<
    "\nDivision (a/b): "<<a/b<<"\nMultiplicación a*c: "<<a*c<<
    "\nSuma a+c: "<<a+c<<"\n";
    int b2=128;
    cout<<"\n\nOperaciones lógicas\nValor original b2: "<<b2<<"\n";
    cout<<"b2&(b2-1) (Esta operación te puede servir para saber si un número "<<
    "esta en base 2, devolviendo 0 si es un numero 2^{n}): "<<(b2&(b2-1))<<"\n";
    cout<<"b2|(b2-1): "<<(b2|(b2-1))<<"\n";
    cout<<"(~b2)&0xFF: "<<((~b2)&0xFF)<<"\n";
    cout<<"((~b2)&0xFF)^0xF0: "<<(((~b2)&0xFF)^0xF0)<<"\n";
    return 0;
  }

  /* Salida
      División entera (b/c): 0
      Modulo (b%c): 10
      Division (a/b): 1.05
      Multiplicación a*c: 315
      Suma a+c: 40.5


      Operaciones lógicas
      Valor original b2: 128
      b2&(b2-1) (Esta operación te puede servir para saber si un número esta en base 2, devolviendo 0 si es un numero 2^{n}): 0
      b2|(b2-1): 255
      (~b2)&0xFF: 127
      ((~b2)&0xFF)^0xF0: 143
  */
```

#### Otras operaciones y asignación a variables ####

__Suma unitaria__

En los valores enteros puedes hacer que una adición unitaria inmediata la cual puede ser usada antes o después de una evaluación lógica.

```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    int i=10;
    cout<<"Evaluación de i: "<<i<<"\ni++: "<<i++<<" ,nuevo valor de i: "<<i<<
    "\n++i: "<<++i<<"\n";
    return 0;
  }

  /* Salida
    Evaluación de i: 10
    i++: 10 ,nuevo valor de i: 11
    ++i: 12
  */
```
En conclusión la operación "i++" es una operación la cual primero obtiene el dato, en este caso saca en pantalla y después aumente en 1 unidad, mientras que "++i" primero aumenta 1 unidad y después muestra en pantalla; Para todo caso eso hacen lo mismo en los ciclos

__Resta unitaria__

Al igual que la suma unitaria también nombrada incremento unitario, existe la resta unitaria o decremento unitario.

```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    int i=10;
    cout<<"Evaluación de i: "<<i<<"\ni--: "<<i--<<" ,nuevo valor de i: "<<i<<
    "\n--i: "<<--i<<"\n";
    return 0;
  }

  /* Salida
    Evaluación de i: 10
    i--: 10 ,nuevo valor de i: 9
    --i: 8
  */
```
__Asignando valores en la misma variable__

Si bien podemos usar 1 y mil variables según la disponibilidad de nuestros recursos del equipo, por otro lado en algunas ocasiones usaremos una misma variable para hacer ciertas operaciones las cuales sustituiremos su valor con el resultado de una operación.

___Caso sin reasignación___
```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    int a,suma=0;
    cout<<"Ingresa un valor entero: ";
    cin>>a;
    cout<<"Ingresa otro valor entero: ";
    cin>>suma;
    cout<<"El valor de la suma es: "<<a+suma<<"\n";
    return 0;
  }
```
___Caso con reasignación___
```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    int a,suma=0;
    cout<<"Ingresa un valor entero: ";
    cin>>a;
    cout<<"Ingresa otro valor entero: ";
    cin>>suma;
    suma=suma+a;
    cout<<"El valor de la suma es: "<<suma<<"\n";
    return 0;
  }
```

Para este caso en la reasignación podemos darnos cuenta de que llamamos a la misma variable "suma" para hacer la operación de sustitución de datos, por lo que hay formas de como recortar esta reasignación evitando llamar a la misma variable, de ello podemos hacer lo siguiente:
| Símbolo | Característica |
| ------- | -------------- |
|   +=    | Suma y asignación de un valor |
|   -=    | Resta y asignación de un valor |
|   *=    | Multiplicación y asignación de un valor |
|   /=    | División y asignación de un valor |
|   %=    | Modulo y asignación de un valor |

Para mostrar mucho acerca de este tipo de operación es necesario dar una introducción a ciclos

## Condicionales ##
Como su nombre lo dice son bloques lógicos en los que se evalúa una expresión, los cuales ejecutaran otro bloque de código o en su defecto puede que salte ese bloque ya que la expresión lógica no es verdadera.

### IF-ELSE ###

Esta es una expresión en la cual se puede evaluar 1 o más condiciones las cuales ejecutaran a continuación una serie de instrucciones u operaciones del programa, a continuación dos ejemplos.

__Ejemplo 1__
```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    int var;
    cout<<"Ingresa un valor entero: ";
    cin>>var;
    if(var>0){
      cout<<"Es un valor entero positivo\n";
    }else{
      cout<<"Es un valor entero no positivo\n";
    }
    return 0;
  }
```
__Ejemplo 2__
```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    int var;
    cout<<"Ingresa un valor entero: ";
    cin>>var;
    if(var>0){
      cout<<"Es un valor entero positivo\n";
    }else if(var<0){
      cout<<"Es un valor entero negativo\n";
    }else{
      cout<<"El valor es cero\n";
    }
    return 0;
  }
```
### Switch ###
Parecido a if-else, switch funciona como un comodín el cual permite evaluar varias opciones posibles en las que puede ser trabajada una variable.

__Ejemplo__

```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    int var,op;
    cout<<"Ingresa un valor entero: ";
    cin>>var;
    cout<<"Ingresa algunas de las siguientes opciones:\n"<<
    "1. Muestra el valor cuadrático del entero ingresado\n"<<
    "2. Muestra el doble del entero ingresado\n"<<
    "3. Muestra la mitad del valor entero ingresado\n";
    cin>>op;
    switch (op) {
      case 1:
        cout<<"var="<<var<<"\tvar^{2}="<<var*var<<"\n";
      break;
      case 2:
        cout<<"var="<<var<<"\tvar*2="<<var*2<<"\n";
      break;
      case 3:
        cout<<"var="<<var<<"\tvar/2="<<var/2<<"\n";
      break;
      default:
        cout<<"Opcion no encontrada...\n";
    }
    return 0;
  }
```

## Ciclos ##
Los ciclos son bloques de código los cuales evalúan una función/expresión lógica, estos bloques permiten ejecutar una secuencia de código de forma repetitiva, por lo que en muchas ocasiones esto puede servir para realizar operaciones como simular sucesiones, series matemáticas y otras cosas "sencillas".

### FOR ###
Este es un ciclo el cual realiza una sucesión de repeticiones llevando un control numérico de cual es el valor inicial, cual es el limite de la sucesión y de cuanto es el incremento, el ejemplo en código originalmente se trabaja con valores enteros, por lo que a continuación se muestra:

__Pseudocódigo__
```cpp
  for(valor-Inicial-Asignacion; expresion-Logica-de-limite; incremento-de-la-variable){
    Codigo relacionado a operar
  }
```

__Ejemplo__
```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    int i;
    for(i=0;i<10;i++){
      cout<<"Valor de i: "<<i<<"\n";
    }
    return 0;
  }
  /* En la salida obtendremos:
      Valor de i: 0
      Valor de i: 1
      Valor de i: 2
      Valor de i: 3
      Valor de i: 4
      Valor de i: 5
      Valor de i: 6
      Valor de i: 7
      Valor de i: 8
      Valor de i: 9
    Por lo que podemos ver en la salida i le es asignado el valor de 0 al inicio del ciclo
      por otro lado inicia la evaluacion de que i sea menos a 10 de tal modo que ahi ingresa
      en el codigo de salida a pantalla y despues realiza el incremento de la variable i
  */
```

Otro ejemplo donde igual podría implicarse el uso del ciclo for es en el calculo de la serie de Fibonacci la cual se realiza con el calculo de un termino con la suma de sus dos términos predecesores, dicha serie comienza (0,1,1,2,3,5,8,13,...)

__Ejemplo serie de Fibonacci__
```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    int a=0,b=1,i,c;
    cout<<"Termino[0]\t=\t"<<a<<"\nTermino [1]\t=\t"<<b<<"\n";
    for(i=0;i<20;i++){
      cout<<"Termino ["<<i+2<<"]\t=\t"<<a+b<<"\n";
      /* Intercambio de datos */
      c=b;
      b=a+b;
      a=c;
    }
    return 0;
  }
```

### WHILE & DO-WHILE ###
Es un ciclo el cual evalúa una o varias condiciones lógicas las cuales al ser verdaderas el bloque programado en el ciclo es ejecutado hasta que la condición evaluada sea falsa, por otra parte hay dos casos de implementación de este tipo de ciclo en ambos casos trabajan de "igual" forma, pero inicialmente y en palabras sencillas while y do-while se diferencian en:

__While__

Primero evalúa la condición lógica y posteriormente si la condición es verdadera ejecuta el bloque de código.

__Do-While__

En este caso primero ejecuta 1 vez el bloque de código para más tarde evaluar la expresión lógica.

__Gráficamente__
![meme](./imgs/while.jpg)

Un ejemplo en código podemos hacer lo siguiente:


__Ejemplo While__
```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    int v;
    bool o=true;
    while(o){
      cout<<"Ingresa un entero positivo: ";
      cin>>v;
      if(v>0){
        cout<<"El valor cuadratico es: "<<v*v<<"\n";
      }else{
        cout<<"El valor es negativo\nEl valor cuadratico es: "<<v*v<<"\n";
        o=false;
      }
    }
    return 0;
  }
```
__Ejemplo Do-While__
```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    int v;
    bool o;
    do{
      cout<<"Ingresa un entero positivo: ";
      cin>>v;
      if(v>0){
        cout<<"El valor cuadratico es: "<<v*v<<"\n";
        o=true;
      }else{
        cout<<"El valor es negativo\nEl valor cuadratico es: "<<v*v<<"\n";
        o=false;
      }
    } while(o);
    return 0;
  }
  /* Aqui podemos ver que el caso de do-while ignora si esta asignada o no
      la variable, por lo que en el bloque do-while asignamos el valor
      pero en caso de no asignar en true el caso que necesitamos
      en caso de no ser asignada la variable puede que venga con un valor
      o puede que venga con basura en la region de memoria a la cual se asigno
   */
```

## Array (arreglos) ##
Los Array son estructuras de datos los cuales almacenan un tipo de dato estricto en el cual se le asigna de forma continua vía indice el cual va desde el indice 0 hasta N-1.

Por otro lado podemos crear arreglos de datos de tamaño N, que de acuerdo al tamaño de cada tipo de variable es decir M bytes podemos decir que en memoria ocupa N*M bytes

Un ejemplo de arreglos estáticos es:

__Forma 1__
```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    int arr[10],i;
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<10;i++){
      arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<"Serie de Fibonacci: \n";
    for(i=0;i<10;i++){
      cout<<arr[i]<<"\n";
    }
    return 0;
  }
```
__Forma 2__
```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    int *arr=new int[10],i;
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<10;i++){
      arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<"Serie de Fibonacci: \n";
    for(i=0;i<10;i++){
      cout<<arr[i]<<"\n";
    }
    return 0;
  }
```

Arreglos dinámicos:
```cpp
  #include <iostream>

  using namespace std;

  int main(void){
    int i,o;
    cout<<"Ingresa un numero entero mayor a 2: ";
    cin>>o;
    int *arr=new int[o];
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<o;i++){
      arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<"Serie de Fibonacci: \n";
    for(i=0;i<o;i++){
      cout<<arr[i]<<"\n";
    }
    return 0;
  }

```

Ahora si bien podemos ver que este es un arreglo, también existen arreglos de N cantidad de dimensiones, loa cuales dependiendo de como se abordan diversas problemáticas puede crearse o acordarse un arreglos de datos que tenga una dimensión N dentro de cada dimensión puede ser del mismo tamaño o de distinto tamaño.

## Métodos / Funciones ##

Así como la existencia de la función principal "int main()" existen otros tipos de funciones que retornan/envían un tipo de dato en particular el cual puede ser operado para si mismo, o en su defecto para ser enviado a nuevas funciones, en algunos casos las funciones son creadas con el fin de obtener un bloque de código el cual puede ser reutilizado en otro momento, o en su defecto se reutiliza en otro archivo de código para el lenguaje.

__Funciones con retorno de datos__

Así como existen las variables "int", "float", "double", "long" estás pueden describir funciones que retornan un valor de si mismos, al igual se puede escribir funciones que retornen arreglos de una sola dimensión o de varias dimensiones

Algunos ejemplos de como se realizaría este tipo de tareas son las siguientes:

___Ejemplo de funciones con retorno___
```cpp
  /* Pasar de un valor entero a un valor double */
  double integerToDouble(int a){
    return (double)a;
  }

  /* Verificar si un valor esta escrito/descrito en base 2 */
  bool isBaseTwo(int n){
    return (n&(n-1))==0;
  }

  /* Verifica si es un numero par */
  bool isPar(int n){
    return (n%2)==0;
  }

  /* Obtiene la mitad de cualquier valor */
  double divTwo(double d){
    return d/2;
  }

  /* Obtiene la mitad de cualquier valor */
  int divTwo(int n){
    return n/2;
  }
```

La ventaja con respecto a otros lenguajes es que podemos crear funciones que tengan el mismo nombre pero que a nivel de código realizan distintas operaciones, el ejemplo implementando estas funciones en código son las siguientes:
```cpp
  #include <iostream>

  using namespace std;

  /* A la hora de escribir es necesario describir inicialmente las funciones
      antes del main ya que permite en la construccion del ensamblador
      del lenguaje primero pone en el ensamblador de arriba hacia abajo
      acomodando las funciones hasta que la funcion principal queda en
      la cima
  */
  double integerToDouble(int);
  bool isBaseTwo(int);
  bool isPar(int);
  double divTwo(double);
  int divTwo(int);


  int main(void){
    int a;
    cout<<"Ingresa un numero entero: ";
    cin>>a;
    cout<<"\nEl valor ingresado es base 2, es decir, 2^{n}?\n";
    if(isBaseTwo(a)){
      cout<<"\tEs un valor que pertenece a 2^{n}\n";
    }else{
      cout<<"\tNo es un valor que pertenece a 2^{n}\n";
    }
    cout<<"\nLa mitad del valor es un numero entero?\n";
    if(isPar(a)){
      cout<<"\tSi es un valor entero y es: "<<divTwo(a);
    }else{
      cout<<"\tNo es un valor entero,\n\t  este contiene decimal es: "<<divTwo(integerToDouble(a));
    }
    return 0;
  }

  /* Pasar de un valor entero a un valor double */
  double integerToDouble(int a){
    return (double)a;
  }

  /* Verificar si un valor esta escrito/descrito en base 2 */
  bool isBaseTwo(int n){
    return (n&(n-1))==0;
  }

  /* Verifica si es un numero par */
  bool isPar(int n){
    return (n%2)==0;
  }

  /* Obtiene la mitad de cualquier valor */
  double divTwo(double d){
    return d/2;
  }

  /* Obtiene la mitad de cualquier valor */
  int divTwo(int n){
    return n/2;
  }
```
