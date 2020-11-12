import java.util.HashSet;
import java.util.Set;

public class Constant implements Arithmetic {

    private int n;

    public Constant(int n) {
        this.n = n;
    }

    @Override
    public Set<String> fv() {
        return new HashSet<String>();
    }

    @Override
    public String toString() {
        return Integer.toString(n);
    }


}
