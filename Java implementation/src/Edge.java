public class Edge {

    private int start;
    private int end;
    private Statement statement;

    public Edge(int start, int end, Statement statement) {
        this.start = start;
        this.end = end;
        this.statement = statement;
    }

    public int getEnd(){
        return this.end;
    }

    public int getStart(){
        return this.start;
    }

    public Statement getStatement(){
        return this.statement;
    }

    public String toString() {
        return "( "+this.start +", "+ this.statement.toString() + ", "+this.end+")";
    }
}
