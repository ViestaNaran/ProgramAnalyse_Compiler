#include <Statement.cpp>
using namespace std;


class Edge {

    public:
        int start;
        int end;
        Statement statement;
        Edge(int start, int end, Statement statement);
};

Edge::Edge(int start, int end, Statement statement){
    this->start = start;
    this->end = end;
    this->statement = statement;
}


