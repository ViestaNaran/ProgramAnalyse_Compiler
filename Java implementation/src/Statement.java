import java.util.HashSet;
import java.util.Set;

public class Statement {

    private final String type;
    private Arithmetic a1;
    private Arithmetic a2;
    private Variable x;

    public Statement(String type, Arithmetic a1, Arithmetic a2, Variable x) {
        this.type = type;
        this.a1 = a1;
        this.a2 = a2;
        this.x = x;
    }

    public Statement(String type, Arithmetic a1, Variable x){
        this.type = type;
        this.a1 = a1;
        this.x = x;
    }

    public Statement(String type, Arithmetic x) {
        this.type = type;
        if (type == "boolean") {
            this.a1 = x;
        } else {
            this.x = (Variable) x;
        }
    }


    public String getType(){
        return this.type;
    }

    public Set<String> freeVariablesRight(){
        Set<String> fv = new HashSet<>();
        if (type.equals("assignment")) {
            // x = a1
            fv.addAll(a1.fv());
        }
        if (type.equals("array assignment")) {
            // A[a1] = a2
            fv.addAll(a1.fv());
            fv.addAll(a2.fv());
        }
        if (type.equals("write")) {
            // write x
            fv.add(x.toString());
        }
        if (type.equals("read")) {
            // read x
        }
        if (type.equals("boolean")) {
            // b = a1
            fv.addAll(a1.fv());
        }
        if (type.equals("skip")) {
            // skip
        }
        return fv;
    }

    public Set<String> freeVariablesLeft(){
        Set<String> fv = new HashSet<>();
        if (type.equals("assignment")) {
            fv.add(x.toString());
        }
        if (type.equals("array assignment")) {
            // A[a1] = a2
            // A = x
            fv.add(x.toString());
        }
        if (type.equals("write")) {
            // write x
        }
        if (type.equals("read")) {
            // read x
            fv.add(x.toString());
        }
        if (type.equals("boolean")) {
            // b = a1
        }
        if (type.equals("skip")) {
            // skip
        }
        return fv;
    }


    public String toString() {

        if (type.equals("assignment")) {
            // x = a1
            return x+" = "+a1.toString();
        }
        if (type.equals("array assignment")) {
            // A[a1] = a2
            return x+"["+a1.toString()+"] = " + a2.toString();
        }
        if (type.equals("write")) {
            // write x
            return "write " + x;
        }
        if (type.equals("read")) {
            // read x
            return "read " + x;
        }
        if (type.equals("boolean")) {
            // b = a1
            return a1.toString();
        }
        if (type.equals("skip")) {
            // skip
            return "skip";
        }
        else return "woops, unknown statement";
    }
}
