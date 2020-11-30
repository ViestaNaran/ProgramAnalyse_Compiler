
#include "WorkList.h"


void WorkList::analyse(Analysis analysis, ProgramGraph programGraph){
    empty(); // Initialize worklist
    for (int q=0; q<programGraph.n; q++) {
        analysis.setToBottom(q);
        insert(q);
    }
    analysis.setToInitial(0); 
    int qStart, qEnd;
    vector<Edge> edges;
    while(!isEmpty()) {
        qStart = extract();
        edges = programGraph.getEdges(qStart);
        for (auto edge = begin(edges); edge != end(edges); ++edge) {
            if (!analysis.satisfiesConstraint(*edge)) {
                qEnd = edge->getEnd();
                analysis.update(*edge);
                insert(qEnd);
            }
        }
    }
}