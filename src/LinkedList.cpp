#include "LinkedList.hpp"
#include <sstream>

LinkedList::LinkedList() : head_(nullptr) {}
LinkedList::~LinkedList() {
    Node* p = head_;
    while (p) { Node* n = p->next; delete p; p = n; }
}
void LinkedList::push_front(int v) { head_ = new Node(v, head_); }
void LinkedList::remove_evens() {
    if (head_ == nullptr) return; //no elements in list

    if (head_->next == nullptr) { //1 element in list
        if (head_->value %2 == 1) {
            return;
        } else {
            delete head_;
            head_ = nullptr;
            return;
        }
    }

    //we know there are at least 2 elemetns

    Node* newNode = head_->next; // #2

    while (newNode->value %2 == 0) {
        if (newNode->next == nullptr) {
            delete head_->next;
            head_->next = nullptr;
            return;
        } else {
            newNode = newNode->next;
            delete head_->next;
            head_->next = newNode;
        }
    }


    while (newNode->next != nullptr) {

        if (newNode->next->value %2 == 0) {
            
            if (newNode->next->next == nullptr) {
                delete newNode->next;
                newNode->next = nullptr;
                return;
            } else {
                Node* nextNode = newNode->next->next;
                delete newNode->next;
                newNode->next = nextNode;
            }
        }
        newNode = newNode->next;
    }
    
}
std::string LinkedList::to_string() const {
    std::ostringstream oss;
    oss << "[";
    Node* p = head_;
    bool first = true;
    while (p) {
        if (!first) oss << ", ";
        first = false;
        oss << p->value;
        p = p->next;
    }
    oss << "]";
    return oss.str();
}
