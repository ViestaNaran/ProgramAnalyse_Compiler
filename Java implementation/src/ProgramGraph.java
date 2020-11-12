import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collector;
import java.util.stream.Collectors;

public class ProgramGraph {

    private List<List<Edge>> adj;
    public int n;


    public ProgramGraph(List<List<Edge>> adj, int n) {
        this.adj = adj;
        this.n = n;
    }

    public ProgramGraph(String filename) {

    }
    public List<Edge> getEdges(int q) {
        
        return adj[q];/*.stream()
                .map(Edge::copy)
                .collect(Collectors.toList());*/
    }

    public void print() {
        System.out.print("The graph:\n");
        for (int i=0; i<n; i++) {
            adj[i].forEach(System.out::println);
        }
        System.out.print("\n");
    }
}
