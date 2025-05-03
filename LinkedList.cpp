#include <iostream>
using namespace std;

// Node class: har node mein data aur next pointer hota hai
class Node {
public:
    int data;
    Node* next;

    // Constructor: nayi node banata hai
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Add_data class: Linked List ko manage karta hai
class Add_data {
    Node* head; // starting node
    Node* tail; // last node

public:
    // Constructor: initially list khaali hai
    Add_data() {
        head = tail = NULL;
    }

    // Append function: naye element ko start mein add karta hai
    void append(int val) {
        Node* num = new Node(val);
        if (head == NULL) {
            head = tail = num; // pehli node
        } else {
            num->next = head;
            head = num; // naye node ko head banate hain
        }
    }

    // pop_front: list ke start se element hataata hai
    void pop_front() {
        if (head == NULL) {
            cout << "Nothing, list is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    // pop_back: list ke end se element hataata hai
    void pop_back() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }
        // agar sirf ek node hai
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;
        // last se pehle tak jaate hain
        while (temp->next != tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    // insert: kisi position p par new value insert karta hai
    void insert(int val, int p) {
        if (p < 0) {
            cout << "Invalid location\n";
            return;
        }

        Node* temp = head;

        // agar start par insert karna ho
        if (p == 0) {
            Node* num = new Node(val);
            num->next = head;
            head = num;
            return;
        }

        // p-1 tak traversal
        for (int i = 0; i < p - 1; i++) {
            if (temp == NULL) {
                cout << "Position out of bounds\n";
                return;
            }
            temp = temp->next;
        }

        Node* num = new Node(val);
        num->next = temp->next;
        temp->next = num;

        // agar end par insert ho raha ho
        if (num->next == NULL) {
            tail = num;
        }
    }

    // search: kisi value ka index return karta hai
    int search(int key) {
        Node* temp = head;
        int idx = 0;
        while (temp != NULL) {
            if (temp->data == key) {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    // show: list ke tamam elements print karta hai
    void show() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " --> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Add_data lis;
    lis.append(1); // list: 1
    lis.append(2); // list: 2 -> 1
    lis.append(3); // list: 3 -> 2 -> 1

    // search function test
    cout << "1 found at index: " << lis.search(1) << endl;

    // final list show karo
    lis.show();

    return 0;
}
