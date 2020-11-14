import java.io.IOException;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class test2 {


    public static void main(String[] args) throws IOException {
        ProgramGraph G = new ProgramGraph("Graphs/graph1.txt");

        G.print();

        ReachingDefinitions RD = new ReachingDefinitions(G.n, G.variables);
        ChaoticIteration CI = new ChaoticIteration();
        CI.analyse(RD, G);
        RD.printResults();
    }
}
