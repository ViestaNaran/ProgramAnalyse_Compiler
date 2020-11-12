import java.util.HashSet;
import java.util.Set;

public class Variable implements Arithmetic {

    private final String variable;

    public Variable(String variable){
        this.variable = variable;
    }

    @Override
    public Set<String> fv() {
        Set<String> fv = new HashSet<>();
        fv.add(variable);
        return fv;
    }

    @Override
    public String toString() {
        return variable;
    }


}
