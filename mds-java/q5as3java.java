import java.util.Scanner;

class q5as3java {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter ein String:");
    String s1 = sc.nextLine();
    System.out.print("Enter ein String:");
    String s2 = sc.nextLine();
    System.out.print("\n1. Equality\n2. Equality Ignore Case\nEnter: ");
    int choice = sc.nextInt();
    switch (choice) {
      case 1:
        if (s1.equals(s2))
          System.out.println("Equal");
        else
          System.out.println("Unequal");
        break;
      case 2:
        if (s1.equalsIgnoreCase(s2))
          System.out.println("Equal; Case Ignored");
        else
          System.out.println("Unequal");
        break;
    }
    sc.close();
  }
}
