#include <iostream>
using namespace std;

struct TreeNode{

    struct TreeNode *lchild;
    int data;
    struct TreeNode *rchild;
};
struct Queue{

    int size;
    int front;
    int rear;
    TreeNode **Q;

};

void create(struct Queue *q, int size){

    q->size = size;
    q->front = q->rear = 0;
    q->Q = new TreeNode*[q->size];

}

void enqueue(struct Queue *q, TreeNode x){

    if((q->rear+1)% q->size == q->front){
        cout << "queue is full" << endl;
    }
    else{

        q->rear = (q->rear+1)% q->size;
        q->Q[q->rear] = &x;
    }
}

TreeNode* dequeue(struct Queue *q){

    TreeNode* x = NULL;

    if(q->front == q->rear){

        cout << "queue is empty!";
    }
    else{

        q->front = (q->front+1)% q->size;
        x = q->Q[q->front];
    }
    return x;
}

int isEmpty(struct Queue q){

    return q.front == q.rear;
}

struct TreeNode *root = NULL;

//creating binary tree 
void create(){

    struct TreeNode *p,*t;
}


int main(){




    return 0;
}