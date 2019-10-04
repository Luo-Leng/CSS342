//
// Created by lengl on 2019/10/1.
//

#ifndef HOMEWORK1_CPP_TEST_H
#define HOMEWORK1_CPP_TEST_H

#endif //HOMEWORK1_CPP_TEST_H
template<class T>
class Container {
    // return the number of elements in the array
    virtual int count() const = 0;

    // add an element to the end of the array
    virtual void add(T &val) = 0;

    // sort the container elements in ascending order
    // for example:
    // 	input: [3, 1, 4, 5, 4, 2]
    // 	output: [1, 2, 3, 4, 4, 5]
    virtual void sort() = 0;

    // reverse the elements of the array backward
    // examples:
    // 	input: [], output: []
    // 	input: [2], output: [2]
    // 	input: [1, 2, 1], output: [1, 2, 1]
    // 	input: [1, 2, 3, 4, 4, 5], output: [5, 4, 4, 3, 2, 1]
    virtual void reverse() = 0;
};

template<class T>
class MyArray: public Container<T> {
    private:
        T * data;
        int capacity;
        int size;

    public:
        // constructor
        MyArray(int capacity) : capacity(capacity), size(0) {
            data = new T[capacity];
        }

        // destructor
        virtual ~MyArray() {
            delete []data;
        }

        int count() const override {
            return size;
        }

        T & operator [](int index) {
            return data[index];
        }

        void add(T & val) override {
            if (size==capacity) {
                return;
            }
            /*
             * TODO: implement adding val to data[]
             */
            size++;
        }

        void sort() override {
            printf("sort(): not implemented\n");
        }

        void reverse() override {
            printf("reverse(): not implemented\n");
        }
};
 public:
        // constructor
        MyArray(int capacity) : capacity(capacity), size(0) {
            data = new T[capacity];
        }

        // destructor
        virtual ~MyArray() {
            delete []data;
        }

        int count() const override {
            return size;
        }

        T & operator [](int index) {
            return data[index];
        }

        void add(T & val) override {
            if (size==capacity) {
                return;
            }
            /*
             * TODO: implement adding val to data[]
             */
            size++;
        }

        void sort() override {
            printf("sort(): not implemented\n");
        }

        void reverse() override {
            printf("reverse(): not implemented\n");
        }
};
