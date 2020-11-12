import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class test {


    public static void main(String[] args) {
        int n = 6;

        List<Edge>[] adj = new ArrayList[n];
        for (int i=0; i<n; i++) {
            adj[i] = new ArrayList<Edge>();
        }
        Set<String> var = new HashSet<>();
        var.add("x");
        var.add("y");

        Variable X = new Variable("x");
        Variable Y = new Variable("y");

        Statement s1 = new Statement("read",X);
        Edge edge1 = new Edge(0,1,s1);
        adj[0].add(edge1);

        Statement s2 = new Statement("read",Y);
        Edge edge2 = new Edge(1,2,s2);
        adj[1].add(edge2);

        Operation plus = new Operation("+",X,Y);
        Statement s3 = new Statement("assignment",plus,X);
        Edge edge3 = new Edge(2,3,s3);
        adj[2].add(edge3);

        Statement s4 = new Statement("write",X);
        Edge edge4 = new Edge(3,4,s4);
        adj[3].add(edge4);

        Constant two = new Constant(2);
        Operation two_x = new Operation("*",two, X);
        Operation b = new Operation(">", two_x, Y);
        Statement s5 = new Statement("boolean",b);
        Edge edge5 = new Edge(4,5,s5);
        adj[4].add(edge5);

        Operation negb = new Operation("<=",two_x,Y);
        Statement s6 = new Statement("boolean",negb);
        Edge edge6 = new Edge(4,2,s6);
        adj[4].add(edge6);

        ProgramGraph G = new ProgramGraph(adj, n);

        G.print();

        ReachingDefinitions RD = new ReachingDefinitions(n, var);
        ChaoticIteration CI = new ChaoticIteration();
        CI.analyse(RD, G);
        RD.printResults();
    }
}
