public interface Analysis {

    void setToBottom(int q);
    void setToInitial(int q);
    Boolean isSubset(Edge edge);
    void update(Edge edge);

    void printResults();
}
