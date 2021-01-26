import java.lang.reflect.Array;
import java.util.Scanner;

/*
Размещение с повторениями (элементы могут повторяться на любой позиции)
из n элементов по k равняется n в степени k
*/

public class arrangement_test
{
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.print("Сколько элементов будем размещать?");
        int n = in.nextInt();
        System.out.print("По сколько в ряд?");
        int k = in.nextInt();
        System.out.print("Всего вариантов размещений с повторениями:");
        System.out.print(Math.pow(n, k));
        
    }
}