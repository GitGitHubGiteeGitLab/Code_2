import java.util.Scanner;

public class HomeworkIO {
    //输出乘法口诀表
    public static void main(String[] args) {
        System.out.print("Input an Integer(1~9):");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " * " + i + " = " + i * j + "  ");
            }
            System.out.println(" ");
        }
    }
    //输出一个整数的每一位
    public static void main3(String[] args) {
        System.out.print("Input an Integer:");
        Scanner scan = new Scanner(System.in);
        int ret = scan.nextInt();
        if(ret == 0) System.out.println(ret);
        while(ret != 0){
            System.out.print(ret % 10 + ",");
            ret /= 10;
        }
    }
    //模拟登陆，最多输入三次。三次均错，则提示退出程序
    public static void main2(String[] args) {
        Scanner scan = new Scanner(System.in);
        String password = "123456";
        int flag = 0;
        for (int i = 0; i < 3; i++) {
            System.out.print("请输入->");
            String input = scan.nextLine();
            if(input.equals(password)){
                flag = 1;
                break;
            }
            System.out.println("输出错误！");
        }
        if(flag == 0){
            System.out.println("三次输入均错误，退出程序");
        }else{
            System.out.println("登录成功");
        }
    }
    //分别输出二进制奇数位和偶数位上的数字
    public static void main1(String[] args) {
        System.out.println("Input an integer:");
        Scanner scan = new Scanner(System.in);
        int ret = scan.nextInt();
        for (int i = 31; i > 0 ; i -= 2) {
            int bit = (ret >> i) & 1;
            System.out.print(bit);
            System.out.print(" ");
        }
        System.out.println(" ");
        for (int i = 30; i >= 0 ; i -= 2) {
            int bit = (ret >> i) & 1;
            System.out.print(bit);
            System.out.print(" ");
        }
        System.out.println(" ");
    }
}
