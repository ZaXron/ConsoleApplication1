#include <iostream>
using namespace std;

// 1
int a(int b[], int c) {
    if (c == 1)
        return b[0];

    return max(b[c - 1], a(b, c - 1));
}

// 2
int d(int e[], int f) {
    if (f == 1)
        return e[0];

    return min(e[f - 1], d(e, f - 1));
}

// 3
int g(int h[], int i, int j) {
    int k = h[j];
    int l = i - 1;

    for (int m = i; m <= j - 1; m++) {
        if (h[m] < k) {
            l++;
            swap(h[l], h[m]);
        }
    }
    swap(h[l + 1], h[j]);
    return (l + 1);
}

void n(int o[], int p, int q) {
    if (p < q) {
        int r = g(o, p, q);

        cout << "поділ: ";
        for (int s = 0; s <= q; s++) {
            cout << o[s] << " ";
        }
        cout << "\nІндекс опорного елемента: " << r << endl;

        cout << "Левая часть: ";
        for (int t = p; t < r; t++) {
            cout << o[t] << " ";
        }
        cout << endl;

        cout << "Правая часть: ";
        for (int u = r + 1; u <= q; u++) {
            cout << o[u] << " ";
        }
        cout << endl;
        n(o, p, r - 1);
        n(o, r + 1, q);
    }
}
void v(int w[], int x) {
    for (int y = 0; y < x; y++)
        cout << w[y] << " ";
    cout << endl;
}
//==================================================================================
int main() {
    //1
    int z[] = { 34, 7, 23, 32, 5 };
    int aa = sizeof(z) / sizeof(z[0]);
    cout << "Початковий масив: ";
    v(z, aa);
    n(z, 0, aa - 1);
    cout << "Отсортований масив: ";
    v(z, aa);
    cout << endl;
    //2
    int ab[] = { 1, 2, 3, 4, 5, 6 };
    int ac = sizeof(ab) / sizeof(ab[0]);
    cout << "Початковий масив: ";
    v(ab, ac);
    n(ab, 0, ac - 1);
    cout << "Відсортований масив: ";
    v(ab, ac);
    cout << endl;
    //3
    int ad[] = { 90, 80, 70, 60, 50, 40, 30 };
    int ae = sizeof(ad) / sizeof(ad[0]);
    cout << "Початковий масив: ";
    v(ad, ae);
    n(ad, 0, ae - 1);
    cout << "Відсортований масив: ";
    v(ad, ae);
    cout << endl;
    //4
    int af[] = { 5, 3, 8, 8, 1, 5, 3, 9 };
    int ag = sizeof(af) / sizeof(af[0]);
    cout << "Початковий масив: ";
    v(af, ag);
    n(af, 0, ag - 1);
    cout << "Відсортований масив: ";
    v(af, ag);
    cout << endl;
}
