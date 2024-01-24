// ADD ANSWER TO THIS FILE
#include <iostream>
#include <string>
#include "IntegerLinkedList.h"
using namespace std;

bool IntegerLinkedList::checkList() {
	bool consecNum = false;
    while (head->next != NULL) { 

        if(head->elem == head->next->elem) {
            return true;
        }
        head = head->next;
    }
    return false;
}

bool IntegerLinkedList::checkRecurse (SNode *ptr) {
    if (ptr == nullptr || ptr->next == nullptr) {
        return false;
    }
    if (ptr->elem == ptr->next->elem) {
        return true;
    }
    return checkRecurse(ptr->next);
}

void IntegerLinkedList::addFront(int x) {
  SNode *tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
}

// recursion helper function called from main for PROBLEM 3
bool IntegerLinkedList::checkRecurseHelper () {
  return checkRecurse(head);
}


bool checkAnswer(const string &nameOfTest, bool received, bool expected);

int main() {
	cout << "Check if two consecutive elements are equal\n";
		IntegerLinkedList mylist;
		mylist.addFront(57);
		mylist.addFront(23);
		mylist.addFront(23);
		mylist.addFront(20);
		mylist.addFront(13);
		cout << "List: 13 -> 20 -> 23 -> 23 -> 57\n";
		checkAnswer("", mylist.checkRecurseHelper(), true);
  
}

bool checkAnswer(const string &nameOfTest, bool received, bool expected) {
    if (received == expected) {
        cout << std::boolalpha << "PASSED " << nameOfTest << ": expected and received " << received << "\n";
        return true;
    }
    cout << std::boolalpha << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << "\n";
    return false;
}