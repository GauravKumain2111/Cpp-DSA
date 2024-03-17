#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node*next;

    Node(int data1,Node*next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        this->data = data1;
        this->next = nullptr;
    }
};

Node* convert(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i =1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;

    }
    return head;

}

int count(Node* head){
    int count= 0;
    Node* temp = head;
    while(temp){
        temp=temp->next;
        count++;
    }
    return count;
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    Node* y = new Node(arr[3],nullptr);
    cout<<y->data<<endl;
    Node* head = convert(arr);
    cout<<head->data<<endl;
    //Traversal
    Node* temp = head;
    while(temp){
        cout<<temp->data<<endl;
        temp =temp->next;

    }
    cout<<count(head);
    return 0;
}