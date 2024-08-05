#include <bits/stdc++.h>
using namespace std;
/*
..#...#...*...#...#...*...#...#...*...#...#..
.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.
#.I.#.H.*.A.*.T.#.E.*.O.*.K.#.V.*.I.*.R.#.I.#
.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.
..#...#...*...#...#...*...#...#...*...#...#..
*/

int main() {
    string in;
    cin >> in;
    int n = in.length();
    bool st = 0;
    vector<string> lines(5, "");

    for (int i = 0; i < n; ++i) {
        if ((i + 1) % 3 == 0) {
            lines[0] += "..*.";
            lines[1] += ".*.*";
            lines[2] += "*." + string(1, in[i]) + ".*"; 
            lines[3] += ".*.*";
            lines[4] += "..*.";
            st = 1;
        } else {
            lines[0] += "..#.";
            lines[1] += ".#.#";
            lines[2] += st ? "." + string(1, in[i]) + "." : "#." + string(1, in[i]) + ".";
            st = 0;
            lines[3] += ".#.#";
            lines[4] += "..#.";
        }
    }

    lines[0] += ".";
    lines[1] += ".";
    lines[2] += (n % 3 == 0) ? "" : "#";
    lines[3] += ".";
    lines[4] += ".";
    
    for (int i = 0; i < 5; ++i) {
        cout << lines[i] << endl;
    }

    return 0;
}