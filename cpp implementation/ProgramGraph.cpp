#include <vector>
#include <Edge.cpp>
#include <Analyser.cpp>
#include <Statement.cpp>

using namespace std;


class ProgramGraph {
    public:
        int n;
        void analyse(Analyser analyser);
        ProgramGraph();

    private:
        vector<Edge> edges[];
        Statement statement;
};

void ProgramGraph::analyse(Analyser analyser) {
    return;
}