/*
Project: CIS_22A_final_exam
Author: Inky Ganbold

Q1. rotate (10 points)

*/
#include <iostream>
#include <vector>
#include "array_merge.h"
using namespace std;

//push_back() – It push the elements into a vector from the back // src: geeksforgeeks.com

// print_array_forloop function, single vector of int argument

void print_array_forloop(const vector<int>& a) {
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;
}


// merge_2_sorted_vectors, 3 vector of int arguments

void merge_2_sorted_vectors(vector<int>& a, const vector<int>& b, vector<int>& c) {
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            c.push_back(a[i]);
            i++;
        } else {
            c.push_back(b[j]);
            j++;
        }
    }
    // Copy remaining elements
    while (i < a.size()) {
        c.push_back(a[i]);
        i++;
    }
    while (j < b.size()) {
        c.push_back(b[j]);
        j++;
    }
}

int main() {
    vector<int> a = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    vector<int> b = {15, 25, 35, 55, 75, 95};
    vector<int> c;

    cout << "vector arrays print: " << endl;
    print_array_forloop(a);
    print_array_forloop(b);

    merge_2_sorted_vectors(a, b, c);

    cout << "merged and ascending array print: " << endl;
    print_array_forloop(c);

    return 0;
}
