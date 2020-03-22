package kata;

public class ReverseNumber {

  private static int reverse(int number) {
    int r = Math.abs(number);
    int result = 0;
    while (r > 0) {
      result += r % 10;
      r = r / 10;
      if (r > 0) result *= 10;
    }
    return ((number < 0)?result*-1:result);
  }

  public static void main(String args[]) {
    int result = reverse(Integer.parseInt(args[0]));
    System.out.println("Result: "+result);
  }

}
