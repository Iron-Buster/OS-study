#include <stdio.h>
#include <unistd.h>

using namespace std;


void hanoi(int n, char from, char to, char via) {
    if (n == 1) printf("%c -> %c\n", from, to);
    else {
        hanoi(n - 1, from, via, to);
        hanoi(1,     from, to, via);
        hanoi(n - 1, via, to, from);
    }
    return;
}


int main()
{
    hanoi(3, 'A', 'B', 'C');
}
