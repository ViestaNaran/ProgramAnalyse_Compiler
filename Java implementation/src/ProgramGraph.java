import java.io.*;
import java.util.*;
import java.util.stream.Collectors;

public class ProgramGraph {

    private final List<Edge> edges;
    public Set<String> variables;
    public int n;

    public ProgramGraph(List<Edge> edges, int n, Set<String> variables) {
        this.variables = variables;
        this.edges = edges;
        this.n = n;
    }

    public ProgramGraph(String filename) throws IOException {
        this.variables = new HashSet<>();
        this.edges = new ArrayList<>();
        this.n = 0;
        BufferedReader bufferedReader = new BufferedReader(new FileReader(filename));
        String line;
        StringBuilder program = new StringBuilder();
        if ((line = bufferedReader.readLine()) != null) {
            program.append(line);
        }
        while ((line = bufferedReader.readLine()) != null) {
            program.append(" ").append(line);
        }
        n = 2;
        makeEdges(program.toString(), 0, 1);
    }

    public List<Edge> getEdges(int q) {
        return edges.stream()
                .filter( edge -> edge.getStart() == q)
                .collect(Collectors.toList());
    }

    public void print() {
        edges.sort(Comparator.comparing(Edge::getStart).thenComparing(Edge::getEnd));
        System.out.print("The graph:\n");
        for (Edge edge : edges) {
            System.out.print(edge);
            System.out.print("\n");
        }
        System.out.print("\n");
    }

    private void makeEdges(String statement, int qStart, int qEnd) {
        String separator = " SEMICOLON ";
        String[] statements = statement.split(separator, 2);
        if (statements.length == 2){
            n++;
            int freshQ = n-1;
            makeEdges(statements[0],qStart,freshQ);
            makeEdges(statements[1],freshQ,qEnd);
        }
        else {
            if (statement.contains("ASSIGNMENT")){
                String[] words = statement.split(" ");
                Variable X;
                Arithmetic Y;
                if (words[0].equals("VAR") && words[1] != null) {
                    X = new Variable(words[1]);
                    this.variables.add(words[1]);
                } else {
                    throw new Error("error in assignment statement");
                }
                if (words[3] == null || words[4] == null) {
                    throw new Error();
                }
                if (words[3].equals("CONST")) {
                    Y = new Constant(Integer.parseInt(words[4]));
                }
                else if (words[3].equals("VAR")) {
                    Y = new Variable(words[4]);
                    this.variables.add(words[4]);
                } else throw new Error();
                Statement s = new Statement("assignment",Y, X);
                this.edges.add(new Edge(qStart,qEnd,s));
            }
        }
    }
}
