class MyLinkedList {
private:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int val) : val(val), next(nullptr) {}
    };

    ListNode* head;
    ListNode* tail;
    int size;

public:
    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) {
            return -1;
        }

        ListNode* curr = head;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }

        return curr->val;
    }

    void addAtHead(int val) {
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }

        size++;
    }

    void addAtTail(int val) {
        ListNode* newNode = new ListNode(val);
        if (!tail) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) {
            return;
        }

        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == size) {
            addAtTail(val);
            return;
        }

        ListNode* newNode = new ListNode(val);
        ListNode* prev = nullptr;
        ListNode* curr = head;
        for (int i = 0; i < index; i++) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = newNode;
        newNode->next = curr;

        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        }

        ListNode* prev = nullptr;
        ListNode* curr = head;
        for (int i = 0; i < index; i++) {
            prev = curr;
            curr = curr->next;
        }

        if (prev) {
            prev->next = curr->next;
        } else {
            head = curr->next;
        }

        if (!curr->next) {
            tail = prev;
        }

        delete curr;
        size--;
    }
};
