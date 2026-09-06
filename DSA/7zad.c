#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define N 100

typedef struct {
    int ver1;
    int ver2;
    int w;
} Edge;

typedef struct {
    int n;
    int m;
    Edge edges[N];
} Graph;

void initializeGraph(Graph *graph, int n) {
    graph->n = n;
    graph->m = 0;
}

void insert(Graph *graph, int ver1, int ver2, int w) {
    if (graph->m >= N) {
        printf("Ошибка\n");
        return;
    }

    graph->edges[graph->m].ver1 = ver1;
    graph->edges[graph->m].ver2 = ver2;
    graph->edges[graph->m].w = w;
    graph->m++;
}

void dijkstra(Graph *graph, int source, int destination) {
    int distance[N], previous[N], visited[N] = {0}, i, count;
    for (i=0; i<graph->n; i++) {
        distance[i] = INT_MAX;
        previous[i] = -1;
    }

    distance[source] = 0;

    for (count = 0; count < graph->n - 1; count++) {
        int minDistance = INT_MAX, minIndex = -1;

        for (i=0; i<graph->n; i++) {
            if (!visited[i] && distance[i] < minDistance) {
                minDistance = distance[i];
                minIndex = i;
            }
        }

        if (minIndex == -1) break;

        visited[minIndex] = 1;

        for (i = 0; i < graph->m; i++) {
            if (graph->edges[i].ver1 == minIndex) {
                int neighbor = graph->edges[i].ver2;
                int w = graph->edges[i].w;
                int newDistance = distance[minIndex] + w;
                if (newDistance < distance[neighbor]) {
                    distance[neighbor] = newDistance;
                    previous[neighbor] = minIndex;
                }
            }
        }
    }

    if (distance[destination] == INT_MAX) {
        printf("Ошибка\n");
        return;
    }

    printf(": [%d", destination);
    int current = destination;
    while (previous[current] != -1) {
        printf(", %d", previous[current]);
        current = previous[current];
    }
    printf("]\n");
}

void update(Graph *graph, int ver1, int ver2, int w) {
	int i;
    for (i = 0; i < graph->m; i++) {
        if ((graph->edges[i].ver1 == ver1 && graph->edges[i].ver2 == ver2) ||
            (graph->edges[i].ver1 == ver2 && graph->edges[i].ver2 == ver1)) {
            if (w < 0) {
                printf("Ошибка\n");
                return;
            }
            graph->edges[i].w = w;
            return;
        }
    }
    printf("Ошибка\n");
}

void Delete(Graph *graph, int ver1, int ver2) {
	int i;
    for (i = 0; i < graph->m; i++) {
        if ((graph->edges[i].ver1 == ver1 && graph->edges[i].ver2 == ver2) ||
            (graph->edges[i].ver1 == ver2 && graph->edges[i].ver2 == ver1)) {
            graph->edges[i] = graph->edges[graph->m - 1];
            graph->m--;
            return;
        }
    }
    printf("Ошибка\n");
}

int main() {
    Graph graph;
    int n, m, i, source, destination, ver1, ver2, w;
	char c;
    scanf("%d %d", &n, &m);
    initializeGraph(&graph, n);
    for (i=0; i<m; i++) {
        scanf("(%d, %d, %d)", &ver1, &ver2, &w);
        printf ("%d %d %d\n", ver1, ver2, w);
        insert(&graph, ver1, ver2, w);
    }

    while (scanf(" %c", &c) == 1) {
        if (c == 'i') {
            scanf("%d %d %d", &ver1, &ver2, &w);
            insert(&graph, ver1, ver2, w);
		}
        else if (c == 's') {
        	scanf("%d %d", &source, &destination);
            dijkstra(&graph, source, destination);
		}
		else if (c == 'u') {
            scanf("%d %d %d", &ver1, &ver2, &w);
            update(&graph, ver1, ver2, w);
		}
		else if (c == 'd') {
            scanf("%d %d", &ver1, &ver2);
            Delete(&graph, ver1, ver2);
		}
    }

    return 0;
}
