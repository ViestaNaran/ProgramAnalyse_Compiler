public class RDTriple {

    public String variable;
    public int qStart;
    public int qEnd;


    public RDTriple(String variable, int qStart, int qEnd) {
        this.variable = variable;
        this.qStart = qStart;
        this.qEnd = qEnd;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof RDTriple)) {
            return false;
        }

        RDTriple t = (RDTriple) obj;
        return (this.variable.equals(t.variable) && this.qStart == t.qStart && this.qEnd == t.qEnd);
    }

    @Override
    public int hashCode() {
        return Integer.parseInt(Integer.toString(qStart) + Integer.toString(qEnd));
    }

    public RDTriple copy(){
        return new RDTriple(this.variable, this.qStart, this.qEnd);
    }

    public String toString() {
        return "("+this.variable+", "+this.qStart+", "+this.qEnd+")";
    }
}
