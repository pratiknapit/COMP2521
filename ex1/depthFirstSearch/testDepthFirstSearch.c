
#include <stdio.h>
#include <stdlib.h>

#include "Graph.h"

void depthFirstSearch(Graph g, Vertex src);

int main(void) {
	Graph g = GraphRead();
	GraphDump(g, stdout);
	
	printf("Enter src: ");
	int src;
	scanf("%d", &src);
	
	printf("Depth first search starting at vertex %d: ", src);
	printf("%d ", src);
	depthFirstSearch(g, src);
	printf("\n");
	
	GraphFree(g);
}

