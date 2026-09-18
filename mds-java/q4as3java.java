import java.util.Scanner;

class q4as3java {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter ein String:");
    String s = sc.nextLine();
    System.out.println("New String: " + s.trim());
    sc.close();
  }
}
