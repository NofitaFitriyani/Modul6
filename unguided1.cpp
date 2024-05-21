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
    if (isEmpty())
    {
        cout << "Tidak ada data yang dihapus" << endl;
    }
    else
    {
        return stackData[top--];
    }
}
bool Palindrom(string input) {
    int n = input.length();
    for (int i = 0; i < n; i++) {
        push(input[i]);
    }
    string reversedStr = "";
    while (!isEmpty()) {
        reversedStr += pop();
    }
    return (input == reversedStr);
}

int main() {
    string input;
    cout << "Masukan Kalimat : ";
    getline(cin, input);
    cout << endl;
    cout << "Kalimat : " << input << endl;
    if (Palindrom(input)) {
        cout << "Kalimat tersebut adalah kalimat Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah bukan Palindrom"<< endl;
    }
    return 0;
}