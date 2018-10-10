# Apuntadores<H1>
Los apuntadores son variables que almacenan la dirección fisica donde esta el dato de las variables con que se relacionan, todo cambio que se realice en este puntero se efectuara en la variable, ya que comparten la misma ruta de memoria.
# Función Malloc <H1>
Es una función que resrva la memoria de una variable y devuelve un puntero void, en esta función se especifica la cantidad de memoria a reservar en bytes.
# Función Calloc <H1>
Calloc es una función de punteros que se asigna valores de momoria a diferentes objetos en un arreglo.En la función se especifica la cantidad de elementos y su tamaño de memoria de cada uno.
# Realloc <H1>
Esta función reasicna el valor de algun puntero selecionado, sin embargo este usa un puntero temporal debido a que puede existir una fuga de memoria si es que existe un error en esta redimensionación.
Todas estas funciones al existir un error o no se asigna un valor como tal a los puntores , se le les asignará un valor NULL, para evitar algún error como una asignación de memoria indefinida que llene toda la reserva en el sistema.
