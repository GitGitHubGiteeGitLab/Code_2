// �����������^
 /*
 //step1:��λ���ǲ鿴��������Щ������λ��Ϊ1����Щ���ǽ�λλ�����������һλ����ʾ��λ��Ľ��
//step2:����ǲ鿴��������Щ������λֻ��һ��Ϊ1����Щ�Ƿǽ�λλ������ֱ�Ӽӡ����������ʾ�ǽ�λλ���мӲ�����Ľ��
//step3:n1&n2�ǲ鿴��û�н�λλ�ˣ�����У���Ҫ�ظ�step1��step2�����û�У�����n1��n2�϶�����Ϊ1�Ĳ��֣��û�֮��Ϊһ��������Ϊ�����
 */
 /*int Add(int num1, int num2 ) {
      // add��ʾ��λֵ
         int n1 = (num1 & num2) << 1;
         int n2 = num1 ^ num2;
         while(n1 & n2){
             num1 = n1, num2 = n2;
             n1 = (num1 & num2) << 1;
             n2 = num1 ^ num2;
         }
         return n1 ^ n2;
 }*/

int Add(int num1, int num2) {
    while (num2 != 0) {
        int temp = (num1 & num2) << 1;
        num1 ^= num2;
        num2 = temp;
    }
    return num1;
}