#ifndef GRAFO_PESO_H
#define GRAFO_PESO_H

#include <vector>
#include <unordered_map>
#include <iostream>
#include <set>
#include <queue>
#include <utility> // Para std::pair

//Esta implementación de grafo es diferente ya que también almacena el peso para cada arista
template <typename T>
class GrafoPeso {
private:
    // Lista de adyacencia con peso
    std::unordered_map<T, std::vector<std::pair<T, double>>> listaAdyacencia;

    // (Depth-First Search) Profundidad o preorden
    void dfs(const T& nodo, std::set<T>& visitados) const; // Este método solo puede ser llamado directamente por iniciarDFS

public:
    GrafoPeso() = default;

    // Añadir arista entre dos nodos con peso
    void agregarArista(const T& nodo1, const T& nodo2, double peso);
    void mostrarGrafoPeso() const;

    // Iniciar DFS (se llama desde el main)
    void iniciarDFS(const T& nodoInicial) const;

    // (Breadth-First Search) Anchura
    void bfs(const T& nodoInicial) const;
};

#include "GrafoPeso.hxx"

#endif // GRAFO_Peso_H
