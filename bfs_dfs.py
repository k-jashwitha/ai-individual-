MAX = 100

class State:
    def __init__(self, m, c, boat, parent):
        self.m = m
        self.c = c
        self.boat = boat
        self.parent = parent


states = []
moves = [
    (1,0),
    (2,0),
    (0,1),
    (0,2),
    (1,1)
]


def is_valid(m, c):

    if m < 0 or c < 0 or m > 3 or c > 3:
        return False

    if m > 0 and m < c:
        return False

    m_right = 3 - m
    c_right = 3 - c

    if m_right > 0 and m_right < c_right:
        return False

    return True


def print_solution(index):

    if index == -1:
        return

    print_solution(states[index].parent)

    s = states[index]
    print(f"({s.m},{s.c},{s.boat})")


def bfs():

    front = 0
    nodes = 0

    states.append(State(3,3,1,-1))

    while front < len(states):

        current = states[front]
        parent_index = front
        front += 1
        nodes += 1

        if current.m == 0 and current.c == 0 and current.boat == 0:

            print("\nBFS Solution Path:")
            print_solution(parent_index)
            print("Nodes explored:", nodes)
            return nodes

        for move in moves:

            m = current.m
            c = current.c
            b = current.boat

            if b == 1:
                m -= move[0]
                c -= move[1]
                b = 0
            else:
                m += move[0]
                c += move[1]
                b = 1

            if is_valid(m,c):
                states.append(State(m,c,b,parent_index))

    return nodes


def dfs():

    nodes = 0
    stack = []

    stack.append(State(3,3,1,-1))

    while stack:

        current = stack.pop()
        nodes += 1

        if current.m == 0 and current.c == 0 and current.boat == 0:
            print("\nDFS reached goal state")
            print("Nodes explored:", nodes)
            return nodes

        for move in moves:

            m = current.m
            c = current.c
            b = current.boat

            if b == 1:
                m -= move[0]
                c -= move[1]
                b = 0
            else:
                m += move[0]
                c += move[1]
                b = 1

            if is_valid(m,c):
                stack.append(State(m,c,b,-1))

    return nodes


def main():

    print("Missionaries and Cannibals Problem")

    bfs_nodes = bfs()
    dfs_nodes = dfs()

    print("\nPerformance Comparison")
    print("BFS nodes explored:", bfs_nodes)
    print("DFS nodes explored:", dfs_nodes)


main()