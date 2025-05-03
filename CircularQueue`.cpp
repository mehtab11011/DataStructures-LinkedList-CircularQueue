#include <iostream>
using namespace std;

class cq {
    int* arr;       // array jisme data store hoga
    int capacity;   // queue ka size
    int curr;       // current elements ki tadaad
    int f;          // front index
    int r;          // rear index

public:
    // Constructor: queue initialize kar raha hai
    cq(int val) {
        capacity = val;
        arr = new int[capacity];
        curr = 0;
        f = 0;
        r = -1;
    }

    // Push function: naye element ko queue mein add karta hai
    void push(int num) {
        if (curr == capacity) {
            cout << "size equal"; // agar queue full ho gaya ho
            return;
        }
        r = (r + 1) % capacity; // rear ko agay badhate hain circular way mein
        arr[r] = num;
        curr++;
    }

    // Pop function: front element ko remove karta hai
    void pop() {
        if (empty()) {
            cout << "CQ is empty"; // agar queue khaali ho
            return;
        }
        f = (f + 1) % capacity; // front ko agay le jaate hain
        curr--;
    }

    // Front function: front element return karta hai
    int front() {
        if (empty()) {
            cout << "CQ is empty"; // agar queue khaali ho
            return -1;
        }
        return arr[f];
    }

    // Empty function: check karta hai ke queue khaali hai ya nahi
    bool empty() {
        return curr == 0;
    }

    // Display function: queue ke tamam elements print karta hai
    void disply() {
        for (int i = 0; i < capacity; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    cq c(3);           // queue size 3 ka object banaya
    c.push(1);         // 1 insert kiya
    c.push(2);         // 2 insert kiya
    c.push(3);         // 3 insert kiya
    c.pop();           // front element (1) remove kiya
    c.push(4);         // 4 insert kiya
    c.disply();        // tamam elements dikhaye

    // queue khaali hone tak elements dikhate aur remove karte hain
    while (!c.empty()) {
        cout << c.front() << " ";
        c.pop();
    }
    cout << endl;
    return 0;
}
