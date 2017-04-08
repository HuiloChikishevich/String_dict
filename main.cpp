#include <iostream>
#include <string>

using namespace std;

struct node{
    int data;
    string a;
    node *next;
};

class string_dict{
    node* head;
    public:
    string_dict(int data, string a){
        head=new node;
        head->data=data;
        head->a=a;
        head->next=NULL;
    }
    ~string_dict(){
        while (head!=NULL){
            node* temp=head;
            head=head->next;
            delete temp;
        }
    }
    void push (int data, string a){
        if (head!=NULL){
            node* temp=head;
            while (temp->a!=a && temp!=NULL){
                temp=temp->next;
            }
            if (temp=NULL){
                node* tmp=new node;
                tmp->data=data;
                temp=tmp;
                temp->next=NULL;
            }
            if (temp->a=a){
                if (temp->data!=data){
                    temp->data=data;
                }
            }
    }
    const int& operator [] (string a) {
            return;
    }
};

int main () {
    return 0;
}
