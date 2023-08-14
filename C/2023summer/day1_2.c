int arr[13] = { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int main() {
    int year, month, day;
    scanf("%d%d%d", &year, &month, &day);
    int days = day;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        arr[2]++;
    }
    for (int i = 1; i < month; i++) {
        days += arr[i];
    }
    arr[2]--;
    printf("%d\n", days);
    return 0;
}