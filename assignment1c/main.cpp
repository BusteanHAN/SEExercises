#include <iostream>
#include <list>
using namespace std;

list<double> l1 = {1, 2, 3, 4, 5 };
list<double> l2 = {6, 7, 8, 9, 10};

void printList(list<double> &a);
void printLists();

int main()
{
    cout << "Initial lists: " << endl;
    printLists();

    l1.push_front(25);
    l2.push_back(30);
    cout << "After use of push_front & push_back" << endl;
    printLists();


    return 0;
}

void printLists() {
    cout << "l1: ";
    printList(l1);
    cout << "l2: ";
    printList(l2);
}

void printList(list<double> &a) {
    for(auto i : a) {
        cout << i << ' ';
    }
    cout <<endl;
}
