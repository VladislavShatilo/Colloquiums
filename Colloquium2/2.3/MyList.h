#pragma once
#include<iostream>
class node {
public:
    int data;
    node* next;

    explicit node(const int value) : data(value), next(nullptr) {}
    bool operator==(const node& other) const
    {
        return data == other.data;
    }
    bool operator!=(const node& other) const
    {
        return data != other.data;
    }
};
class my_list {
    node* head_;
    node* reverse_list(node* current, node* prev = nullptr) {
        if (current == nullptr) {
            head_ = prev;
            return head_;
        }

        node* next = current->next;
        current->next = prev;

        return reverse_list(next, current);
    }


public:
    my_list() : head_(nullptr) {}

   
    void append(const int value) {
        const auto new_node = new node(value);
        if (head_ == nullptr) {
            head_ = new_node;
        }
        else {
            node* current = head_;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = new_node;
        }
    }
    bool operator==(const my_list& other) const {
        const node* current_this = head_;
        const node* current_other = other.head_;

        while (current_this != nullptr && current_other != nullptr) {
            if (*current_this != *current_other) {
                return false;
            }
            current_this = current_this->next;
            current_other = current_other->next;
        }

        return current_this == nullptr && current_other == nullptr;
    }

 
    void print_list() const
    {
        const node* current = head_;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << "\n";
    }

    
    
    void reverse() {
        head_ = reverse_list(head_);
    }

    ~my_list() {
        while (head_ != nullptr) {
            const node* temp = head_;
            head_ = head_->next;
            delete temp;
        }
    }
};
