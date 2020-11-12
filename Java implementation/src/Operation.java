import java.util.HashSet;
import java.util.Set;

public class Operation implements Arithmetic {

    private final String operation;
    private final Arithmetic a1;
    private final Arithmetic a2;

    public Operation(String operation, Arithmetic a1, Arithmetic a2) {
        this.operation = operation;
        this.a1 = a1;
        this.a2 = a2;
    }

    @Override
    public Set<String> fv() {
        Set<String> fv = new HashSet<>();
        fv.addAll(a1.fv());
        fv.addAll(a2.fv());
        return fv;
    }

    @Override
    public String toString() {
        return a1.toString() +" "+ operation +" "+ a2.toString();
    }

    ;


}
