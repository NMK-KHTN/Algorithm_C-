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
    if(l.phead == nullptr) return;
    Node *pcur = l.phead;
    int i = 0;

    while(pcur != nullptr && i < k){
        pcur = pcur->pNext;
        i++;
    }

    if(pcur == nullptr) return;
    Node *tmp = createNode(val);
    tmp->pNext = pcur->pNext;
    pcur->pNext = tmp;
}
void deletehead(LinkList &l){
    if(l.phead == nullptr) return;

    Node *tmp = l.phead;
    l.phead = l.phead->pNext;
    delete tmp;
}
void deletelast(LinkList &l){
    if(l.phead == nullptr) return;
    if(l.phead->pNext == nullptr){
        delete l.phead;
        l.phead = nullptr;
        return;
    }
    Node *pcur = l.phead;
    while(pcur->pNext->pNext != nullptr){
        pcur = pcur->pNext;
    }
    delete pcur->pNext;
    pcur->pNext = nullptr;
}
void deletemid(LinkList &l, int k){
    if(l.phead == nullptr) return;
    if(k == 0){
        deletehead(l);
        return;
    }
    Node *pcur = l.phead;
    int i = 1;
    while(pcur->pNext != nullptr && i < k){
        pcur = pcur->pNext;
        i++;
    }
    if(pcur->pNext == nullptr) return;
    Node *tmp = pcur->pNext;
    pcur->pNext = tmp->pNext;
    delete tmp;
}
int main() {
    
}
