#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_N 8
#define INF 1000000

int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

typedef struct {
    int x, y;
} Point;

typedef struct {
    Point p;
    int dist;
} QueueItem;

QueueItem queue[MAX_N * MAX_N];
int front, rear;

// Queue operations
void initQueue() {
    front = rear = 0;
}

void enqueue(Point p, int dist) {
    queue[rear].p = p;
    queue[rear].dist = dist;
    rear++;
}

QueueItem dequeue() {
    return queue[front++];
}

bool isQueueEmpty() {
    return front == rear;
}

// Convert chess notation to array indices
void convertNotation(char *pos, int *x, int *y) {
    *x = pos[0] - 'A';
    *y = pos[1] - '1';
}

// Check if position is valid on chess board
bool isValid(int x, int y) {
    return x >= 0 && x < MAX_N && y >= 0 && y < MAX_N;
}

// Find minimum steps using BFS
int findMinSteps(Point start, Point end) {
    bool visited[MAX_N][MAX_N] = {false};
    initQueue();
    
    enqueue(start, 0);
    visited[start.x][start.y] = true;
    
    while (!isQueueEmpty()) {
        QueueItem current = dequeue();
        Point pos = current.p;
        
        // If we reached the destination
        if (pos.x == end.x && pos.y == end.y) {
            return current.dist;
        }
        
        // Try all possible knight moves
        for (int i = 0; i < 8; i++) {
            int newX = pos.x + dx[i];
            int newY = pos.y + dy[i];
            
            if (isValid(newX, newY) && !visited[newX][newY]) {
                Point newPos = {newX, newY};
                enqueue(newPos, current.dist + 1);
                visited[newX][newY] = true;
            }
        }
    }
    
    return INF; // Should never reach here given the problem constraints
}

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        char start_pos[3], end_pos[3];
        scanf("%s %s", start_pos, end_pos);
        
        Point start, end;
        convertNotation(start_pos, &start.x, &start.y);
        convertNotation(end_pos, &end.x, &end.y);
        
        int result = findMinSteps(start, end);
        printf("Case #%d: %d\n", t, result);
    }
    
    return 0;
}