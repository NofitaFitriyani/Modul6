#include <iostream>
#include <string>
using namespace std;

char stackData[77];
int top = -1;

bool isFull(int n) {
    return (top == n - 1);
}
bool isEmpty() {
    return (top == -1);
}
void push(char x) {
    if (!isFull(77)) {
        stackData[++top] = x;
    }
}
char pop() {
    return stackData[top--];
}
bool reverse(string input) {
    int n = input.length();
    for (int i = 0; i < n; i++) {
        push(input[i]);
    }
    string reversedStr = "";
    while (!isEmpty()) {
        reversedStr += pop();
    }
    cout<< "Hasil            : "<< reversedStr;
}

int main() {
    string kalimat;
    cout << "Masukan kalimat  : ";
    getline(cin, kalimat);
    reverse(kalimat);

    return 0;
}