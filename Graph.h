#include <iostream>
#define SIZE 6

class Graph {
public:
    Graph() {
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                matrix[i][j] = 0;
        vertexCount = 0;
    }
    int getIndex(std::string name);
    int getEdgeWeight(std::string v1, std::string v2);
    void showFriends(int handshake);
    void addUser(std::string name);
    void addEdge(std::string v1, std::string v2, int weight);
private:
    void findFriends(std::string start, std::string current, bool visited[], int handshake, int path);
    bool edgeExists(std::string v1, std::string v2);
    bool vertexExists(std::string name);
    int matrix[SIZE][SIZE];
    std::string vertexesName[SIZE];
    int vertexCount;
};
