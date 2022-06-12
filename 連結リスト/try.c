#include <stdio.h>
#include <stdlib.h>

//セルの構造体を実装
typedef struct cell {
  int num;
  struct cell *next; //自分の型と同じポインタ値を保持
} cell_t;


int main(){

    cell_t* head; //このポインタの指す場所が一番先頭であるため、値が更新されるたびに指す場所が変わる
    cell_t* cellp; //メモリを確保するために使う(スカウトマンみたいなイメージ)
    head = NULL;
    //ポイントはheradもcellpもポインタ変数であるため、常に指している先が変わっていくということ

    //ここからが一連の流れ
    cellp = (cell_t*)malloc(sizeof(cell_t));//cellpがメモリをスカウトしにいくのでmallocはcell_tでよぶ
    cellp->num = 10;
    cellp->next = head;//新しく入ってきたセルが先頭になるのでさっきまで先頭だったメモリのポインタを繋がっている(後ろに続くメモリ)とする
    head = cellp; //先頭のポインタの値更新する
    //ここまでが一連の流れ

    cellp = (cell_t*)malloc(sizeof(cell_t));
    cellp->num = 20;
    cellp->next = head;
    head = cellp;


    cellp = (cell_t*)malloc(sizeof(cell_t));
    cellp->num = 30;
    cellp->next = head;
    head = cellp; 


}

