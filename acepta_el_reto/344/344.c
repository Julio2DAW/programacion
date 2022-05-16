#include <stdio.h>
int numCasos, numCables, numM, numH, num;
char c;
int main() {
    scanf("%d", &numCasos);
    while(numCasos--) {
        numM = 0;
        numH = 0;
        num = 0;
        scanf("%d", &numCables);
        while(num/2 < numCables) {
            scanf("%c", &c);
            if(c == 'M') {
                numM++;
                num++;
            } else if(c == 'H') {
                numH++;
                num++;
            }
        }
        if(numM == numH) printf("POSIBLE\n");
        else printf("IMPOSIBLE\n");
    }
}