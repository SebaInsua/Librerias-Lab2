# Librerias-Lab2

Para que se tome en cuenta la modificacion de los archivos, dejar sujeto al request un archivo Read Me con la idea de la misma a implementar.
Asi mismo, comentar las lineas de codigo explicando la idea a mejorar/agragar.

EJ:
Pull request------------archivo.c archivo.h main.c
Read Me. "Modificadas x y x funciones para la optimizacion-escalabilidad-modularizacion-etc del codigo"

EJ Comentado:

+nodo* agregarAlPpio(nodo* lista, nodo* nuevoNodo){

    if(lista == NULL){
    
        lista = nuevoNodo;    // en caso de que no haya nodos en la lista, el puntero lista guarda la direccion de memoria del nuevoNodo
        
    }else{
    
        nuevoNodo-> siguiente = lista; // el nuevo nodo queda apuntando a lo que previamente se encontraba en primer lugar de la lista
        lista = nuevoNodo;    // el primer nodo de la lista ahora seria el nuevoNodo que agregamos recien
    }
    
    return lista;
    
}

Gracias! Construimos entre todos.
