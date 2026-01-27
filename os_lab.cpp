#include <bits/stdc++.h>
using namespace std;

/* ---------- Utility ---------- */
void printFrames(vector<int> &frames) {
    for (int x : frames) {
        if (x == -1) cout << "- ";
        else cout << x << " ";
    }
    cout << endl;
}

/* ---------- FIFO ---------- */
int fifo(vector<int> pages, int framesCount) {
    vector<int> frames(framesCount, -1);
    queue<int> q;
    int faults = 0;

    cout << "\n--- FIFO Page Replacement ---\n";

    for (int p : pages) {
        bool hit = false;
        for (int x : frames)
            if (x == p) hit = true;

        if (!hit) {
            faults++;
            if (q.size() == framesCount) {
                int old = q.front(); q.pop();
                for (int i = 0; i < framesCount; i++)
                    if (frames[i] == old)
                        frames[i] = p;
            } else {
                frames[q.size()] = p;
            }
            q.push(p);
            cout << "Page " << p << " → Fault | Frames: ";
        } else {
            cout << "Page " << p << " → Hit   | Frames: ";
        }
        printFrames(frames);
    }
    cout << "Total Page Faults (FIFO): " << faults << endl;
    return faults;
}

/* ---------- LRU ---------- */
int lru(vector<int> pages, int framesCount) {
    vector<int> frames(framesCount, -1);
    unordered_map<int, int> lastUsed;
    int faults = 0;

    cout << "\n--- LRU Page Replacement ---\n";

    for (int i = 0; i < pages.size(); i++) {
        int p = pages[i];
        bool hit = false;

        for (int x : frames)
            if (x == p) hit = true;

        if (!hit) {
            faults++;
            int idx = -1, mn = INT_MAX;

            for (int j = 0; j < framesCount; j++) {
                if (frames[j] == -1) {
                    idx = j;
                    break;
                }
                if (lastUsed[frames[j]] < mn) {
                    mn = lastUsed[frames[j]];
                    idx = j;
                }
            }
            frames[idx] = p;
            cout << "Page " << p << " → Fault | Frames: ";
        } else {
            cout << "Page " << p << " → Hit   | Frames: ";
        }

        lastUsed[p] = i;
        printFrames(frames);
    }

    cout << "Total Page Faults (LRU): " << faults << endl;
    return faults;
}

/* ---------- OPTIMAL ---------- */
int optimal(vector<int> pages, int framesCount) {
    vector<int> frames(framesCount, -1);
    int faults = 0;

    cout << "\n--- Optimal Page Replacement ---\n";

    for (int i = 0; i < pages.size(); i++) {
        int p = pages[i];
        bool hit = false;

        for (int x : frames)
            if (x == p) hit = true;

        if (!hit) {
            faults++;
            int idx = -1, farthest = i;

            for (int j = 0; j < framesCount; j++) {
                if (frames[j] == -1) {
                    idx = j;
                    break;
                }
                int k;
                for (k = i + 1; k < pages.size(); k++)
                    if (frames[j] == pages[k]) break;

                if (k == pages.size()) {
                    idx = j;
                    break;
                }
                if (k > farthest) {
                    farthest = k;
                    idx = j;
                }
            }
            frames[idx] = p;
            cout << "Page " << p << " → Fault | Frames: ";
        } else {
            cout << "Page " << p << " → Hit   | Frames: ";
        }
        printFrames(frames);
    }

    cout << "Total Page Faults (Optimal): " << faults << endl;
    return faults;
}

/* ---------- MAIN ---------- */
int main() {
    int n, frames;
    cout << "Enter number of pages: ";
    cin >> n;

    vector<int> pages(n);
    cout << "Enter page reference string:\n";
    for (int i = 0; i < n; i++)
        cin >> pages[i];

    cout << "Enter number of frames: ";
    cin >> frames;

    cout << "\n===== PAGE REPLACEMENT ANALYZER =====\n";
    cout << "1. FIFO\n2. LRU\n3. Optimal\n4. Compare All\nChoose: ";

    int ch;
    cin >> ch;

    if (ch == 1) fifo(pages, frames);
    else if (ch == 2) lru(pages, frames);
    else if (ch == 3) optimal(pages, frames);
    else if (ch == 4) {
        int f1 = fifo(pages, frames);
        int f2 = lru(pages, frames);
        int f3 = optimal(pages, frames);

        cout << "\n--- Comparison ---\n";
        cout << "FIFO Faults    : " << f1 << endl;
        cout << "LRU Faults     : " << f2 << endl;
        cout << "Optimal Faults : " << f3 << endl;
    }

    return 0;
}