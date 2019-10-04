//
// Created by lengl on 2019/10/1.
//
#include <iostream>
#include "test.h"
/*
 * test MyArray::add()
 */
void testAdd() {
    // create an object of MyArray
    MyArray<int> arr(10);

    // add values to the array
    for (int i = 0; i< 5; i++) {
        arr.add(i);
    }

    // check the size of the array
    if (arr.count()==5) {
        printf("testAdd: PASSED\n");
    } else {
        printf("testAdd: FAILED, expected:%d, actual:%d\n", 5, arr.count());
    }
}

/*
 * test MyArray::sort()
 */
void testSort() {
    printf("testSort(): not implemented\n");
}

/* 
 * test MyArray::reverse()
 */
void testReverse() {
    printf("testReverse(): not implemented\n");
}

/*
 * test MyArray::[]
 */
void testSubscriptOperator() {
    // create an object of MyArray
    MyArray<int> arr(10);

    for (int i = 0; i<5; i++) {
        arr[i] = i;
    }

    int testCount = 5, testPassed = 0;
    for (int i=0; i<testCount; i++) {
        if (arr[i]!=i) {
            break;
        } else {
            testPassed++;
        }
    }

    if (testPassed==testCount) {
        printf("testSubscriptOperator: PASSED\n");
    } else {
        printf("testSubscriptOperator: FAILED\n");
    }
}
