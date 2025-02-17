#include <iostream>
#include <list>

void test_list(std::list<int>* myList) {
    // Assign values to myList
    myList->assign({1, 2, 3, 4, 5});
    std::cout << "myList after assign: ";
    for (int val : *myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Clear myList
    myList->clear();
    std::cout << "myList after clear: " << (myList->empty() ? "empty" : "not empty") << std::endl;

    // Assign values to myList and myList
    myList->assign({6, 7, 8});
    myList->assign({9, 10, 11});

    // Merge myList and myList into myList
    myList->assign(myList->begin(), myList->end());
    myList->merge(*myList);
    std::cout << "myList after merge: ";
    for (int val : *myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Resize myList
    myList->resize(5, 0);
    std::cout << "myList after resize: ";
    for (int val : *myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

}

int main() {
    // Create 10 different lists using new
    std::list<int>* list1 = new std::list<int>();
    std::cout << "Created list1" << std::endl;
    std::list<int>* list2 = new std::list<int>();
    std::cout << "Created list2" << std::endl;
    std::list<int>* list3 = new std::list<int>();
    std::cout << "Created list3" << std::endl;
    std::list<int>* list4 = new std::list<int>();
    std::cout << "Created list4" << std::endl;
    std::list<int>* list5 = new std::list<int>();
    std::cout << "Created list5" << std::endl;
    std::list<int>* list6 = new std::list<int>();
    std::cout << "Created list6" << std::endl;
    std::list<int>* list7 = new std::list<int>();
    std::cout << "Created list7" << std::endl;
    std::list<int>* list8 = new std::list<int>();
    std::cout << "Created list8" << std::endl;
    std::list<int>* list9 = new std::list<int>();
    std::cout << "Created list9" << std::endl;
    std::list<int>* list10 = new std::list<int>();
    std::cout << "Created list10" << std::endl;

    // Test lists
    test_list(list1);
    test_list(list2);
    test_list(list3);
    test_list(list4);
    test_list(list5);
    test_list(list6);
    test_list(list7);
    test_list(list8);
    test_list(list9);
    test_list(list10);

    // Clean up memory
    delete list1;
    delete list2;
    delete list3;
    delete list4;
    delete list5;
    delete list6;
    delete list7;
    delete list8;
    delete list9;
    delete list10;

    return 0;
}
