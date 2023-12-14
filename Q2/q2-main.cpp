/*
Project: CIS_22A_final_exam
Author: Inky Ganbold

Q2. rotate (20 points)

*/

#include <iostream>
#include "rotation.h"

using namespace std;

bool isNotEmpty(const string &st)
{
    return st.length() > 0;
}

void rotateRight(string &st, int k)
{
    if (!isNotEmpty(st))
    {
        return;
    }
    k = k % st.length();
    for (int i = 0; i < k; ++i)
    {
        char last = st[st.length() - 1];
        for (int j = st.length() - 1; j > 0; --j)
        {
            st[j] = st[j - 1];
        }
        st[0] = last;
    }
}

void rotateLeft(string &st, int k)
{
    if (!isNotEmpty(st))
    {
        return;
    }
    k = k % st.length();
    for (int i = 0; i < k; ++i)
    {
        char first = st[0];
        for (int j = 0; j < st.length() - 1; ++j)
        {
            st[j] = st[j + 1];
        }
        st[st.length() - 1] = first;
    }
}

int main()
{
    string name, id, phone, name_id;

    cout << "Welcome to string rotation!" << endl;

    cout << "Enter first name: ";
    cin >> name;

    cout << "Enter student id: ";
    cin >> id;

    cout << "Enter phone number (in any format): ";
    cin >> phone;

    name_id = name + id; // combining name and id
    cout << "name_id = " << name_id << endl;

    cout << "Rotate right for even digit and left for odd digit: " << endl;
    for (int i = 0; i < phone.length(); i++) {
        char ch = phone[i];

        if (isdigit(ch))
        {
            int digit = ch - '0';
            bool right = (digit % 2 == 0);
            if (right == true)
            {
                rotateRight(name_id, digit);
            }
            else
            {
                rotateLeft(name_id, digit);
            }
            cout << "digit = " << digit << ", name_id = " << name_id << endl;
        }
    }

    cout << "Rotated name_id = " << name_id << endl;

    cout << "Rotate left for even digit and right for odd digit: " << endl;
    
    for (int i = 0; i < phone.length(); i++) {
        char ch = phone[i]; 

        if (isdigit(ch))
        {
            int digit = ch - '0';
            bool right = (digit % 2 != 0);
            right ? rotateRight(name_id, digit) : rotateLeft(name_id, digit);
            cout << "digit = " << digit << ", name_id = " << name_id << endl;
        }
    }

    cout << "Rotated name_id = " << name_id << endl;

    return 0;
}
