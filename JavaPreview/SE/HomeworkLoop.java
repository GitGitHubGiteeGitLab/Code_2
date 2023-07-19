import java.util.Random;
import java.util.Scanner;
public class HomeworkLoop {
    //x形图形
     public static void main(String[] args) {
            System.out.println("Input several integers(2~20):");
            Scanner scan = new Scanner(System.in);
            //循环读入
            while (scan.hasNextInt()) {
                int ret = scan.nextInt();
                System.out.println(ret + ":");
                //算法设计：输出分成两类 *（i 和 ret - 1 - i) 和 space(剩余的)
                for (int i = 0; i < ret; i++) {
                    for (int j = 0; j < ret; j++) {
                        if (j == i || j == ret - 1 - i) {
                            System.out.print("*");
                        } else {
                            System.out.print(" ");
                        }
                    }
                    System.out.println(" ");//换行
                }
            }
        }

    //二进制
    public static void main5(String[] args) {
        System.out.println("Input an integer:");
        Scanner scan = new Scanner(System.in);
        int ret = scan.nextInt(), cnt = 0;
        for (int i = 31; i >= 0 ; i--){
            int bit = (ret >> i) & 1;
            if(bit == 1)cnt++;
        }
        System.out.println("数字" + ret + "二进制1的个数" +cnt);
    }
    //水仙花数
    public static void main4(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Input a three-digit integer:");
        int ret = scan.nextInt();
        for(int i = 100; i <= ret; i++){
            int a = i % 10, b = i / 10 % 10, c = i / 100;
            if(a * a * a + b * b * b+ c * c * c == i){
                System.out.print(i + "是水仙数 ");
            }
        }
    }
    //最大公约数
    public static void main3(String[] args) {
        System.out.println("input two integers:");
        Scanner scan = new Scanner(System.in);
        int num1 = scan.nextInt();
        int num2 = scan.nextInt();
        int left = 0;
        while (num2 != 0){
            left = num1 % num2;
            num1 = num2;
            num2 = left;
        }
        System.out.println(num1);
    }

    //计算分数的值
    public static void main2(String[] args) {
        double sum = 0;
        for (int i = 1; i < 100; i += 2) {
            sum += 1.0 / i;
        }
        for (int j = 2; j <= 100; j += 2) {
            sum -= 1.0 / j;
        }
        System.out.println(sum);
    }
    //猜数字
    public static void main1(String[] args) {
        Scanner scan = new Scanner(System.in);
        Random random = new Random();
        int randNum = random.nextInt(100);
        while(true){
            int guess = scan.nextInt();
            if(guess < randNum){
                System.out.println("猜小了");
            }else if(guess > randNum){
                System.out.println("猜大了");
            }else{
                System.out.println("猜对了");
                break;
            }
        }
    }
}
