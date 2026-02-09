import java.math.BigDecimal;
import java.math.RoundingMode;

class AdditionMagic {
 
    public String add(double a, String b) {
        if (b == null || b.length() == 0) {
            return b;
        }
        return "T" + b.substring(1);
    }

 

   public String add(double a, double b) {
        double sum = a + b;

        BigDecimal bd = new BigDecimal(sum);
        bd = bd.setScale(2, RoundingMode.HALF_UP);

        return bd.toString();
    }

    
     public String add(String a, String b) {
        return a + b;
    }
}
