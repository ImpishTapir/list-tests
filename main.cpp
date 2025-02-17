#include <iostream>
#include <list>

void test_list(std::list<int>* myListA, std::list<int>* myListB, std::list<int>* myListC) {
    // Assign values to myListA
    myListA->assign({1, 2, 3, 4, 5});
    std::cout << "myListA after assign: ";
    for (int val : *myListA) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Clear myListA
    myListA->clear();
    std::cout << "myListA after clear: " << (myListA->empty() ? "empty" : "not empty") << std::endl;

    // Assign values to myListA and myListB
    myListA->assign({6, 7, 8});
    myListB->assign({9, 10, 11});

    // Merge myListA and myListB into myListC
    myListC->assign(myListA->begin(), myListA->end());
    myListC->merge(*myListB);
    std::cout << "myListC after merge: ";
    for (int val : *myListC) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Resize myListC
    myListC->resize(5, 0);
    std::cout << "myListC after resize: ";
    for (int val : *myListC) {
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
    test_list(list1, list2, list 3);
    test_list(list2, list3, list 4);
    test_list(list3, list4, list 5);
    test_list(list4, list5, list 6);
    test_list(list5, list6, list 7);
    test_list(list6, list7, list 8);
    test_list(list7, list8, list 9);
    test_list(list8, list9, list 10);
    test_list(list9, list10, list 1);
    test_list(list10, list1, list 2);

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
