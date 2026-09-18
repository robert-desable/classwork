import java.util.Scanner;

class q6as3java {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter ein String:");
    String s = (sc.nextLine()).trim();
    for (int i = 0; i < s.length(); i++)
      System.out.print(s.charAt(i) + " ");
    sc.close();
  }
}
