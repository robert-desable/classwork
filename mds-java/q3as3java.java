import java.util.Scanner;

class q3as3java {
  static int find(String s) {
    for (int i = 0; i < s.length() - 3; i++) {
      if (s.substring(i, i + 4).equals("pato"))
        return i;
    }
    return -1;
  }

  static String replace(String s) {
    int id = find(s);
    char patn[] = { 'p', 'a', 't', 'n' };
    String replaced = "";
    if (id != -1) {
      for (int i = 0; i < s.length(); i++) {
        if (i == id)
          for (int k = 0; k < 4; i++, k++)
            replaced += patn[k];
        if (i == s.length())
          break;
        replaced += s.charAt(i);
      }
      return replaced;
    }
    return s;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter ein String:");
    String s = sc.nextLine();
    System.out.println("New String: " + replace(s));
    sc.close();
  }
}
