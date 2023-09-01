int convertInteger(int A, int B) {
    int x = A, y = B, bit = 0;
    for (int i = 31; ~i; i--) {
        if (((x >> i) & 1) != ((y >> i) & 1)) bit++;
    }
    return bit;
}