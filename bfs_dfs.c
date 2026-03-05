#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int m;
    int c;
    int boat;
    int parent;
} State;

State states[MAX];
int front = 0, rear = 0;
int top = -1;

int moves[5][2] = {
    {1,0},
    {2,0},
    {0,1},
    {0,2},
    {1,1}
};

int is_valid(int m, int c)
{
    if(m < 0 || c < 0 || m > 3 || c > 3)
        return 0;

    if(m > 0 && m < c)
        return 0;

    int m_right = 3 - m;
    int c_right = 3 - c;

    if(m_right > 0 && m_right < c_right)
        return 0;

    return 1;
}

void print_solution(int index)
{
    if(index == -1)
        return;

    print_solution(states[index].parent);

    printf("(%d,%d,%d)\n",
        states[index].m,
        states[index].c,
        states[index].boat);
}

int bfs()
{
    int nodes = 0;

    states[rear++] = (State){3,3,1,-1};

    while(front < rear)
    {
        State current = states[front];
        int parent_index = front;
        front++;
        nodes++;

        if(current.m == 0 && current.c == 0 && current.boat == 0)
        {
            printf("\nBFS Solution Path:\n");
            print_solution(parent_index);
            printf("Nodes explored: %d\n", nodes);
            return nodes;
        }

        for(int i=0;i<5;i++)
        {
            int m = current.m;
            int c = current.c;
            int b = current.boat;

            if(b == 1)
            {
                m -= moves[i][0];
                c -= moves[i][1];
                b = 0;
            }
            else
            {
                m += moves[i][0];
                c += moves[i][1];
                b = 1;
            }

            if(is_valid(m,c))
            {
                states[rear++] = (State){m,c,b,parent_index};
            }
        }
    }

    return nodes;
}

int dfs()
{
    int nodes = 0;

    State stack[MAX];

    stack[++top] = (State){3,3,1,-1};

    while(top >= 0)
    {
        State current = stack[top--];
        nodes++;

        if(current.m == 0 && current.c == 0 && current.boat == 0)
        {
            printf("\nDFS reached goal state\n");
            printf("Nodes explored: %d\n", nodes);
            return nodes;
        }

        for(int i=0;i<5;i++)
        {
            int m = current.m;
            int c = current.c;
            int b = current.boat;

            if(b == 1)
            {
                m -= moves[i][0];
                c -= moves[i][1];
                b = 0;
            }
            else
            {
                m += moves[i][0];
                c += moves[i][1];
                b = 1;
            }

            if(is_valid(m,c))
            {
                stack[++top] = (State){m,c,b,-1};
            }
        }
    }

    return nodes;
}

int main()
{
    printf("Missionaries and Cannibals Problem\n");

    int bfs_nodes = bfs();
    int dfs_nodes = dfs();

    printf("\nPerformance Comparison\n");
    printf("BFS nodes explored: %d\n", bfs_nodes);
    printf("DFS nodes explored: %d\n", dfs_nodes);

    return 0;
}