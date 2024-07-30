import java.util.Scanner;

class Library {
    private int id;
    private String name;
    private String author;
    private String student;
    private int price;
    private int pages;

    public void inputDetails(Scanner scanner) {
        System.out.print("Enter Book Id: ");
        id = scanner.nextInt();
        scanner.nextLine(); // Consume newline character
        System.out.print("Enter Book Name: ");
        name = scanner.nextLine();
        System.out.print("Enter Book Author: ");
        author = scanner.nextLine();
        System.out.print("Enter Student Name: ");
        student = scanner.nextLine();
        System.out.print("Enter Book Price: ");
        price = scanner.nextInt();
        System.out.print("Enter Book Pages: ");
        pages = scanner.nextInt();
    }

    public void displayDetails() {
        System.out.println("Book Id: " + id);
        System.out.println("Book Name: " + name);
        System.out.println("Book Author: " + author);
        System.out.println("Student Name: " + student);
        System.out.println("Book Price: " + price);
        System.out.println("Book Pages: " + pages);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Library[] lib = new Library[20];
        int input = 0;
        int count = 0;

        while (input != 3) {
            System.out.println("Enter 1 to input details");
            System.out.println("Enter 2 to display details");
            System.out.println("Enter 3 to quit");
            input = scanner.nextInt();

            switch (input) {
                case 1:
                    if (count < 20) {
                        lib[count] = new Library();
                        lib[count].inputDetails(scanner);
                        count++;
                    } else {
                        System.out.println("Library is full");
                    }
                    break;

                case 2:
                    for (int i = 0; i < count; i++) {
                        lib[i].displayDetails();
                    }
                    break;

                case 3:
                    System.out.println("Exiting...");
                    break;

                default:
                    System.out.println("Invalid input, please try again");
                    break;
            }
        }

        scanner.close();
    }
}

