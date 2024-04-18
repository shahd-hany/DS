#include <iostream>
#include <queue>
using namespace std;

int presedence(char c) {
    if (c == 'A')
        return 3;
    else if (c == 'B')
        return 1;
    else if (c == 'C')
        return 2;
    else
        return -1;
}

char alpha(int t) {
    if (t == 1)
        return 'B';
    else if (t == 2)
        return 'C';
    else if (t == 3)
        return 'A';
    else
        return ' ';
}

void print(priority_queue<int> g) {
    while (!g.empty()) {
        cout << alpha(g.top()) << " ";
        g.pop();
    }
    cout << endl;
}

int main() {
    priority_queue<int> qu;
    int maxSize = 10;
    for (int i = 0; i < maxSize; i++) {
        char cc;
        cin >> cc;
        int n = presedence(cc);
        if (n != -1)
            qu.push(n);
        else
            cout << "Invalid character entered: " << cc << endl;
    }
    print(qu);
}
