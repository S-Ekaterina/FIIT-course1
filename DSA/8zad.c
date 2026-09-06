#include <stdio.h>
#include <stdlib.h>

typedef struct Edge {
    int vertex1;
    int vertex2;
    long long int weight;
} Edge;

typedef struct Graph {
    int maxVertices;
    int numEdges;
    Edge* edges;
} Graph;

Graph* createGraph(int maxVertices) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->maxVertices = maxVertices;
    graph->numEdges = 0;
    graph->edges = (Edge*)malloc(maxVertices * (maxVertices - 1) / 2 * sizeof(Edge));
    return graph;
}


void insert(Graph* graph, int v1, int v2, int weight, int *m) {
    int i;
    for (i = 0; i < graph->numEdges; i++) {
        if ((graph->edges[i].vertex1 == v1 && graph->edges[i].vertex2 == v2) ||
            (graph->edges[i].vertex1 == v2 && graph->edges[i].vertex2 == v1) || v1 == v2) {
            if (*m == 0) {
                printf("insert %d %d failed", v1, v2);
                *m=1;
            }
            else {
                printf("\ninsert %d %d failed", v1, v2);
            }
            return;
        }
    }
    if (v1 > v2) {
        int temp = v1;
        v1 = v2;
        v2 = temp;
    }
    graph->edges[graph->numEdges].vertex1 = v1;
    graph->edges[graph->numEdges].vertex2 = v2;
    graph->edges[graph->numEdges].weight = weight;
    graph->numEdges++;
}

void update(Graph* graph, int v1, int v2, int weight, int *m) {
	int i;
    for (i = 0; i < graph->numEdges; i++) {
        if ((graph->edges[i].vertex1 == v1 && graph->edges[i].vertex2 == v2) ||
            (graph->edges[i].vertex1 == v2 && graph->edges[i].vertex2 == v1)) {
            if (graph->edges[i].weight + weight <= 0) {
                break;
            }
            graph->edges[i].weight += weight;
            return;
        }
    }
    if (*m == 0) {
        printf("update %d %d failed", v1, v2);
        (*m)++;
    }
    else {
        printf("\nupdate %d %d failed", v1, v2);
    }
}

int compareEdges(const void* a, const void* b) {
    Edge* edgeA = (Edge*)a;
    Edge* edgeB = (Edge*)b;
    if (edgeA->vertex1 != edgeB->vertex1) {
        return edgeA->vertex1 - edgeB->vertex1;
    } else {
        return edgeA->vertex2 - edgeB->vertex2;
    }
}

void search(Graph* graph, int vertex, int *m) {
    int i;
    long long int totalWeight = 0;
    int* inTree = (int*)malloc(graph->maxVertices * sizeof(int));
    long long int* distance = (long long int*)malloc(graph->maxVertices * sizeof(long long int));
    int* parent = (int*)malloc(graph->maxVertices * sizeof(int));

    for (i = 0; i < graph->maxVertices; i++) {
        inTree[i] = 0;
        distance[i] = 8329821921;
        parent[i] = -1;
    }

    distance[vertex] = 0;

    while (1) {
        long long int minDistance = 8329821921;
        int closestVertex = -1;

        for (i = 0; i < graph->maxVertices; i++) {
            if (!inTree[i] && distance[i] < minDistance) {
                minDistance = distance[i];
                closestVertex = i;
            }
        }

        if (closestVertex == -1) {
            break;
        }

        inTree[closestVertex] = 1;
        totalWeight += distance[closestVertex];

        for (i = 0; i < graph->numEdges; i++) {
		    if (graph->edges[i].vertex1 == closestVertex && !inTree[graph->edges[i].vertex2] && graph->edges[i].weight < distance[graph->edges[i].vertex2]) {
		        distance[graph->edges[i].vertex2] = graph->edges[i].weight;
		        parent[graph->edges[i].vertex2] = closestVertex;
		    } else if (graph->edges[i].vertex2 == closestVertex && !inTree[graph->edges[i].vertex1] && graph->edges[i].weight < distance[graph->edges[i].vertex1]) {
		        distance[graph->edges[i].vertex1] = graph->edges[i].weight;
		        if (graph->edges[i].vertex1 < closestVertex) {
		            parent[graph->edges[i].vertex1] = closestVertex;
		        } else {
		            parent[closestVertex] = graph->edges[i].vertex1;
		        }
		    }
		}
    }

    Edge* sortedEdges = (Edge*)malloc((graph->maxVertices - 1) * sizeof(Edge));
    int sortedEdgesCount = 0;

    for (i = 0; i < graph->maxVertices; i++) {
	    if (parent[i] != -1) {
	        Edge edge;
	        if (parent[i] < i) {
	            edge.vertex1 = parent[i];
	            edge.vertex2 = i;
	        } else {
	            edge.vertex1 = i;
	            edge.vertex2 = parent[i];
	        }
	        sortedEdges[sortedEdgesCount++] = edge;
	    }
	}

    qsort(sortedEdges, sortedEdgesCount, sizeof(Edge), compareEdges);
    if (totalWeight == 0) {
        if (*m == 0) {
            printf("search %d failed", vertex);
            *m=1;
        }
    	else {
            printf("\nsearch %d failed", vertex);
        }
    	return;
	}
	if (*m == 0) {
		printf("%lld: [", totalWeight);
		*m=1;
	}
    else {
    	printf("\n%lld: [", totalWeight);
	}
    for (i = 0; i < sortedEdgesCount; i++) {
        printf("(%d, %d)", sortedEdges[i].vertex1, sortedEdges[i].vertex2);
        if (i < sortedEdgesCount - 1) {
            printf(", ");
        }
    }
    printf("]");
    
    free(inTree);
    free(distance);
    free(parent);
    free(sortedEdges);
}

void Delete(Graph* graph, int v1, int v2, int *m) {
	int i, j;
    for (i = 0; i < graph->numEdges; i++) {
        if ((graph->edges[i].vertex1 == v1 && graph->edges[i].vertex2 == v2) ||
            (graph->edges[i].vertex1 == v2 && graph->edges[i].vertex2 == v1)) {
            for (j = i; j < graph->numEdges - 1; j++) {
                graph->edges[j] = graph->edges[j + 1];
            }
            graph->numEdges--;
            return;
        }
    }
    if (*m == 0) {
        printf("delete %d %d failed", v1, v2);
        (*m)++;
    }
    else {
        printf("\ndelete %d %d failed", v1, v2);
    }
}


int main() {
    int N, i, v1, v2, weight, m=0, result;
    scanf("%d", &N);
    Graph* graph = createGraph(N);
	char line[20], c;
	
	// (1, 2, 3)
    scanf(" %c", &c);
	while ( c == '(') {
		fgets(line, sizeof(line), stdin);
	    if (sscanf(line, "%d, %d, %d)", &v1, &v2, &weight) == 3) {
	    	if (v1 >= N || v2 >= N || v1 < 0 || v2 < 0) {
	    		if (m == 0) {
                    printf("insert %d %d failed", v1, v2);
                    m=1;
                }
                else {
                    printf("\ninsert %d %d failed", v1, v2);
                }
			}
	        insert(graph, v1, v2, weight, &m);
	    }
	  	else {
	        break;
	    }
	    scanf(" %c", &c);
	}
    while (result != EOF) {
        if (c == 'i') {
            scanf("%d %d %d", &v1, &v2, &weight);
            if (v1 >= N || v2 >= N || v1 < 0 || v2 < 0) {
	    		if (m == 0) {
                    printf("insert %d %d failed", v1, v2);
                    m=1;
                }
                else {
                    printf("\ninsert %d %d failed", v1, v2);
                }
			}
            insert(graph, v1, v2, weight, &m);
		}
		else if (c == 's') {
			scanf("%d", &v1);
            search(graph, v1, &m);
		}
		else if (c == 'u') {
			scanf("%d %d %d", &v1, &v2, &weight);
            update(graph, v1, v2, weight, &m);
		}
        else if (c == 'd') {
        	scanf("%d %d", &v1, &v2);
            Delete(graph, v1, v2, &m);
		}
		result = scanf(" %c", &c);
    }
    free(graph->edges);
    free(graph);
    return 0;
}
