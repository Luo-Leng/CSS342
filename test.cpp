//
// Created by lengl on 2019/10/1.
//
#include <iostream>
#include "test.h"
using namespace std;
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
void testAdd() {
    // create an object of MyArray
    MyArray<int> arr(10);
    int arrInitial= arr.count();
    // add values to the array
    for (int i = 0; i< 5; i++) {
        arr.add(i);
    }

    // check the size of the array
    if (arrInitial<arr.count()) {                                  //pass test if new array has more ints than old one
        printf("testAdd: PASSED, before:%d, after:%d\n", arrInitial,arr.count());
    } else {
        printf("testAdd: FAILED, expected:%d, actual:%d\n", 5,arr.count());
    }
}

/*
 * test MyArray::sort()
 */
void testSort() {
    MyArray<int> arr(6);


    for(int j= 0; j<=4;j++){
        int randNum=rand()%30-10;                      //I don't understand why 0 is formed at the end of array
        arr.add(randNum);
    }
    for(int i= 0; i<=arr.count();i++){                 //print old array
        cout<<arr[i]<<" ";
    }
    cout<<"before sort"<<endl;
    arr.sort();
    for(int i= 0; i<=arr.count();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"after sort"<<endl;                           //print sorted array

    /*for(int arrOrder=0; arrOrder<arr.count();arrOrder++){
        if(arr[arrOrder]>arr[arrOrder+1]){
            cout<<" fail to sort";                  //keep printing pass until reach the last element in array
        }else{
            cout<<"pass testSort";
        }
    }*/
    int countNum=0;
    for(int arrOrder=0; arrOrder<arr.count();arrOrder++) {         //if first number is larger than second one
        if (arr[arrOrder] > arr[arrOrder + 1]) {                   //countNum add 1
            countNum++;
        }
    }
    if(countNum ==0) {
        cout << "Pass sortTest\n";                                 //can't pass sortTest because there is a zero at the
    }else{                                                         //end of the array
        cout<<"fail to pass sortTest\n";

    }
}

/*
 * test MyArray::reverse()
 */
void testReverse() {
    MyArray<int> arr(10);
    MyArray<int> arr2(10);
    for(int i =0; i<5;i++){
        arr.add(i);                                      //arr: 0 1 2 3 4
    }
    arr2=arr;                                                //arr2: 0 1 2 3 4
    arr.reverse();                                            //arr: 4 3 2 1 0
    int compareArrs=0;

    for(int j=0; j<arr.count();j++){                         //print arr: 4 3 2 1 0
        cout<<arr[j]<<" ";
    }
    arr.reverse();                                           //reverse for second time arr:0 1 2 3 4
    for(int k=0; k<arr.count();k++){
        if(arr[k]==arr2[k]){                                 //arr[0]=0        arr2[0]=0
            compareArrs++;                                   // compareArrs=1   if array is reversed correctly
        }                                                    //cpmpareArrs=0 if none of int is the same
    }
    if(compareArrs==0){                                      //Problem of my code: 1. if reverse function doesnt work
        cout<<"Fall to pass testReverse\n";                  //then reverse the array twice will be meaningless
        }else{                                               //I would change my code to use two for-loops,
        cout<<"Pass testReverse";                            //one incremental and one decremental,and only reverse once
    }                                                        //ex: arr[]={4,3,2,1,0}  arr2={0,1,2,3,4}
}                                                            //arr[0] should equal to arr2[4]

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
