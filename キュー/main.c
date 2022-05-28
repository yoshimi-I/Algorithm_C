# include <stdio.h>

int head = 0;
int tail = 0;
int List[10000];
void enque(int x){
    tail += 1;
    List[head] = x;
}
int deque(){
    return List[head];
    head = head += 1;
}
int main(){
    return 0;
}