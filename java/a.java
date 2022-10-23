import java.util.Scanner;

public class a{
    public static void main(String[] args){
        try (Scanner sc = new Scanner(System.in)) {
            while(sc.hasNext()){
                int a = sc.nextInt();
                int b = sc.nextInt();
                System.out.println(a+b);
            }
        }
    }
}

