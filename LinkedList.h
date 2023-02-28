#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node{
    Node* next;
    int data;

    Node(){
        data = 0;
        next = nullptr;
    }
    Node(int d){
        data = d;
        next = nullptr;
    }
};

class LinkedList{
    private:
        Node* head;
        int size;
    public:
        void addFront(int d);
        void addBack(int d);
        void addInPos(int index, int d);

        void removeEnd();
        void removeFront();
        void removeInPos(int index);
};

#endif //LINKEDLIST_H
