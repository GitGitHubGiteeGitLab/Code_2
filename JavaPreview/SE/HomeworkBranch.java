import java.util.Scanner;
public class HomeworkBranch {
    public static void main(String[] args) {
        int i = 0;
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        for (i = 2; i <= Math.sqrt(num) + 1; i++) {
            if(num % i == 0){
                break;
            }
        }
        //i自动提升为浮点类型
        if(i > Math.sqrt(num)){
            System.out.println(num + "是素数");
        }
    }
    public static void main5(String[] args) {
        Scanner scan = new Scanner(System.in);
        int age = scan.nextInt();
        if (age <= 18) {
            System.out.println("少年");
        }else if (age <= 28){
            System.out.println("青年");
        }else if (age <= 55) {
            System.out.println("中年");
        }else{
            System.out.println("老年");
        }
    }
    public static void main4(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("input:");
        int val = scan.nextInt(), flag = 1;
        for (int i = 2; i <= (val / 2); i++) {
            if(val % i == 0){
                System.out.println("不是素数");
                flag = 0;
                break;
            }
        }
        if(flag == 1) System.out.println("是素数");
    }
    public static void main3(String[] args) {
        int flag = 1;
        for (int i = 2; i < 100; i++) {
            for(int j = 2; j <= (i / 2); j++){//<=才可
                if(i % j == 0) {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                System.out.print(i + " ");
            }
            flag = 1;//每次循环完flag都要更新
        }
    }
    public static void main2(String[] args) {
        for (int i = 1000; i <= 2000; i++) {
            if(i % 100 !=0 && i % 4 == 0) System.out.print(i + " ");
            if(i % 400 == 0) System.out.print(i + " ");
        }
    }
    public static void main1(String[] args) {
        int cnt = 0;
        for (int i = 9; i < 100; i++) {
            if(i % 10 == 9)cnt++;
            if(i / 10 == 9)cnt++;
        }
        System.out.println(cnt);
    }
}
