import java.util.ArrayList;
import java.util.List;

public class ChaoticIteration extends WorkList {

    @Override
    public List<Integer> empty() {
        return new ArrayList<>();
    }

    @Override
    public void insert(List<Integer> W, int q) {
        W.add(q);
    }

    @Override
    public int extract(List<Integer> W) {
        return W.remove(0);
    }
}
