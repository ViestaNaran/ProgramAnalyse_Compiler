import java.util.List;

public abstract class WorkList implements Algorithm {


    public abstract List<Integer> empty();
    public abstract void insert(List<Integer> W, int q);
    public abstract int extract(List<Integer> W);


    @Override
    public void analyse(Analysis analysis, ProgramGraph programGraph) {
        List<Integer> W = empty();
        for (int q =0; q<programGraph.n; q++) {
            analysis.setToBottom(q);
            insert(W,q);
        }
        analysis.setToInitial(0);
        int qStart, qEnd;
        while (!W.equals(empty())) {
            qStart = extract(W);
            for (Edge edge : programGraph.getEdges(qStart)) {
                if (!analysis.isSubset(edge)){
                    qEnd = edge.getEnd();
                    analysis.update(edge);
                    insert(W,qEnd);
                }
            }
        }
    }
}
