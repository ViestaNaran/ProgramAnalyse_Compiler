import java.util.ArrayList;
import java.util.HashSet;
import java.util.Set;
import java.util.stream.Collectors;

public class ReachingDefinitions implements Analysis {

    private int n;
    private final ArrayList<Set<RDTriple>> AA;
    private final Set<String> variables;

    public ReachingDefinitions(int n, Set<String> variables) {
        this.n = n;
        this.AA = new ArrayList<>();
        for (int i=0; i<n; i++) {
            this.AA.add(new HashSet<RDTriple>());
        }
        this.variables = variables;
    }

    @Override
    public void setToBottom(int q) {
        this.AA.get(q).clear();
    }

    @Override
    public void setToInitial(int q) {
        Set<RDTriple> initial = this.variables.stream()
                .map(var -> new RDTriple(var,-1,q))
                .collect(Collectors.toSet());
        this.AA.set(q,initial);
    }

    @Override
    public Boolean isSubset(Edge edge) {
        Set<RDTriple> A = copy(this.AA.get(edge.getStart()));
        Set<RDTriple> B = this.AA.get(edge.getEnd());
        kill(A,edge);
        gen(A,edge);
        return B.containsAll(A);
    }

    @Override
    public void update(Edge edge) {
        Statement s = edge.getStatement();
        Set<RDTriple> A = copy(this.AA.get(edge.getStart()));
        Set<RDTriple> B = this.AA.get(edge.getEnd());
        kill(A,edge);
        gen(A,edge);
        B.addAll(A);
    }

    private Set<RDTriple> copy(Set<RDTriple> S) {
        return S.stream()
                .map(triple -> triple.copy())
                .collect(Collectors.toSet());
    }

    private void kill(Set<RDTriple> S, Edge edge){
        Statement statement = edge.getStatement();
        Set<String> variables = new HashSet<>();
        if (statement.getType().equals("assignment")) {
            variables.addAll(statement.freeVariablesLeft());
        }
        if (statement.getType().equals("array assignment")) {
        }
        if (statement.getType().equals("boolean")) {
        }
        if (statement.getType().equals("read")) {
            variables.addAll(statement.freeVariablesLeft());
        }
        if (statement.getType().equals("write")) {
        }
        if (statement.getType().equals("skip")) {
        }

        for (String var : variables) {
            S.removeIf(t -> t.variable.equals(var));
        }

    }

    private void gen(Set<RDTriple> S, Edge edge){
        Statement statement = edge.getStatement();
        Set<String> variables = new HashSet<>();
        if (statement.getType().equals("assignment")) {
            variables.addAll(statement.freeVariablesLeft());
        }
        if (statement.getType().equals("array assignment")) {
            variables.addAll(statement.freeVariablesLeft());
        }
        if (statement.getType().equals("boolean")) {
        }
        if (statement.getType().equals("read")) {
            variables.addAll(statement.freeVariablesLeft());
        }
        if (statement.getType().equals("write")) {
        }
        if (statement.getType().equals("skip")) {
        }

        variables
                .forEach(var -> S.add(new RDTriple(var,edge.getStart(),edge.getEnd())));

    }

    @Override
    public void printResults() {

        StringBuilder sb = new StringBuilder();
        sb.append("The result of Reaching Definitions:\n");
        for (int i=0; i<n; i++) {
            sb.append(i).append(": {");
            AA.get(i).forEach(t -> sb.append(t.toString()).append(", "));
            if (!AA.get(i).isEmpty()) {
                sb.setLength(sb.length()-2);
            }
            sb.append("}\n");
        }
        sb.append("\n");
        System.out.print(sb);
    }


}
