#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *pNext;
};
struct LinkList{
    Node *phead;
};
void init(LinkList &l){
    l.phead = nullptr;
}
Node *createNode(int val){
    Node *tmp = new Node;
    tmp->data = val;
    tmp->pNext = nullptr;
    return tmp; 
}
void addNodehead(LinkList &l, int val){
    Node *tmp = createNode(val);
    tmp->pNext = l.phead;
    l.phead = tmp;
}
void addNodetail(LinkList &l, int val){
    Node *tmp = createNode(val);
    if(l.phead == nullptr){
        l.phead = tmp;
        return;
    }
    Node *pcur = l.phead;
    while(pcur->pNext != nullptr){
        pcur = pcur->pNext;
    }
    pcur->pNext = tmp;
}
void addNodemid(LinkList &l, int val, int k){
    Node *tmp = createNode(val);
    if(l.phead = nullptr) return;
}
int main() {
    
}
