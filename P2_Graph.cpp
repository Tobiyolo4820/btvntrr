#include <string.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

class Graph
{
private:
    unsigned int G[100][100];
    unsigned int v;
    unsigned int e;
public:
    Graph(unsigned int = 0, unsigned int = 0);
    void displayMatrix();

    void readFileEdge(string);
    void readFileAdj(string);
    void readFileMatrix(string);

    int rankOfVertex(int);
    int* vertexAdjOf(int);
};

Graph::Graph(unsigned int m, unsigned int n)
{
    v = m;
    e = n;
}

void Graph::readFileAdj(string file) {
    ifstream in;
    string num, s;
    v = 0;
    e = 0;
    int vertex;
    in.open(file.c_str());
    in >> v;
    while(!in.eof()) {
        getline(in, s);
        stringstream ss(s);
        ss >> num;
        vertex = stoi(num);
        while(ss >> num) {
            G[vertex][stoi(num)] = 1;
            e++;
        }
    }
    e /= 2;
} 

void Graph::readFileEdge(string file) {
    ifstream in;
    string num1, num2, s;
    v = 0;
    e = 0;
  	in.open(file.c_str());
     in >> v;
    while(!in.eof()) {
        getline(in, s);
        stringstream ss(s);
        ss >> num1 >> num2; 
//        if(v < stoi(num1)) v = stoi(num1);
//        if(v < stoi(num2)) v = stoi(num2);
        e++;
        G[stoi(num1)][stoi(num2)] = 1;
        G[stoi(num2)][stoi(num1)] = 1;
    }
} 

void Graph::readFileMatrix(string file) {
    ifstream in;
    string num, s;
    v = 0;
    e = 0;
    
    in.open(file.c_str());
     in >> v;
    while(!in.eof()) {
        getline(in, s);
        stringstream ss(s);
        while(ss >> num) {
            
        }
    }
} 

void Graph::displayMatrix() {
    for(int i = 1;i <= v;i++) {
        for(int j = 1;j<=v;j++) {
            cout << G[i][j] << " ";
        }
        cout << endl;
    }
    cout << v << " " << e;
}

int main()
{
    Graph test;
    test.readFileEdge("input1_2.txt");
    test.displayMatrix();
    return 0;
}
