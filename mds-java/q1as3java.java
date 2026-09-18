import java.util.Scanner;

class q1as3java {
  static String convertToLower(String s) {
    String convert = "";
    char ch;
    for (int i = 0; i < s.length(); i++) {
      ch = s.charAt(i);
      if (ch >= 97 && ch <= 122)
        ch = (char) (ch - 32);
      convert += ch;
    }
    return convert;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter ein String:");
    String s = sc.nextLine();
    System.out.println("New String: " + convertToLower(s));
    sc.close();
  }
}
