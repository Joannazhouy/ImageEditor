#define CATCH_CONFIG_MAIN
#include <iostream>
#include "cs221util/catch.hpp"
#include "stack.h"
#include "queue.h"
//using namespace cs221util;
using namespace std;

TEST_CASE("stack::basic functions","[weight=1][part=stack]"){
    cout << "Testing Stack..." << endl;
    Stack<int> intStack;
    vector<int> result;
    vector<int> expected;
    for (int i = 10; i > 0; i--) {
        expected.push_back(i);
    }
    for (int i = 1; i <= 10; i++) {
        intStack.push(i);
    }
    cout << intStack.peek() << endl;
    while (!intStack.isEmpty()) {
        cout <<"test ok" << endl;
        result.push_back(intStack.pop());
        cout <<result.back() << endl;
    }
    REQUIRE( result == expected);
    
}

TEST_CASE("queue::basic functions","[weight=1][part=queue]"){
    cout << "Testing Queue..." << endl;
    Queue<int> intQueue;
    vector<int> result;
    vector<int> expected;
    for (int i = 1; i <= 10; i++) {
        expected.push_back(i);
    }
    for (int i = 1; i <= 10; i++) {
        intQueue.enqueue(i);
    }
    cout << intQueue.peek() << endl;
    while (!intQueue.isEmpty()) {
        result.push_back(intQueue.dequeue());
        cout << result.back() << endl;
    }
    REQUIRE( result == expected);
}

