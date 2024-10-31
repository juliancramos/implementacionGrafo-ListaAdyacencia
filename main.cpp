#include "Grafo.h"
#include <string>

int main() {
    Grafo<std::string> grafoPersonas;

    //Prueba con personas
    grafoPersonas.agregarArista("Alice", "Bob");
    grafoPersonas.agregarArista("Alice", "Charlie");
    grafoPersonas.agregarArista("Bob", "David");

    grafoPersonas.agregarArista("Julian", "Santiago");
    grafoPersonas.agregarArista("Juanes", "Simon");
    grafoPersonas.agregarArista("Santiago", "Pepe");
    grafoPersonas.agregarArista("Pepe", "Ernesto");
    grafoPersonas.agregarArista("Julian", "Juanes");
    grafoPersonas.agregarArista("Matias", "Julian");
    


    grafoPersonas.mostrarGrafo();
    std::cout<<"\n\n";
    
    std::cout << "DFS desde Julian:" << std::endl;
    grafoPersonas.iniciarDFS("Julian");
    std::cout<<"\n\n";
    std::cout << "\nBFS desde Julian:" << std::endl;
    grafoPersonas.bfs("Julian");
    std::cout<<"\n\n";


    // Prueba con números
    Grafo<int> grafoNumeros;
    grafoNumeros.agregarArista(1, 2);
    grafoNumeros.agregarArista(1, 3);
    grafoNumeros.agregarArista(2, 4);

    grafoNumeros.mostrarGrafo();

    
}
