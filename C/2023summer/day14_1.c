#define MIN(a,b) (((a)>(b)) ? (b) : (a))

int* masterMind(char* solution, char* guess, int* returnSize) {
    int* arr = calloc(2, sizeof(int) * 2);
    int R, G, B, Y;
    int R2, G2, B2, Y2;
    R = G = B = Y = 0;
    R2 = G2 = B2 = Y2 = 0;
    *returnSize = 2;
    for (int i = 0; i < 4; i++) {
        if (solution[i] != guess[i]) {
            switch (solution[i]) {
            case 'R':
                R++;
                break;
            case 'G':
                G++;
                break;
            case 'Y':
                Y++;
                break;
            case 'B':
                B++;
                break;
            }
            switch (guess[i]) {
            case 'R':
                R2++;
                break;
            case 'G':
                G2++;
                break;
            case 'Y':
                Y2++;
                break;
            case 'B':
                B2++;
                break;
            }
            continue;
        }
        arr[0]++;
    }
    arr[1] = MIN(R, R2) + MIN(G, G2) + MIN(Y, Y2) + MIN(B, B2);
    return arr;
}