#include <iostream>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    for(int i = 0; i < Q; i++) {
        int ta, tb, va, vb;
        cin >> ta >> tb >> va >> vb;

        int remain = va - (tb * vb / ta);
        // B �۾� �� �ð��� �� �� ��
        if(remain <= 0) {
            cout << tb * vb << endl;
        } 
        // ���� A �۾� ������ ¦���� �� 
        else if(remain % 2 == 0) {
            cout << (tb * vb) + (remain / 2 * ta) << endl;
        }
        // ���� A �۾� ������ Ȧ���� ��
        else if(remain % 2 == 1) {
            int additional = ta - (tb * vb % ta); 
            cout << (tb * vb) + (remain / 2 * ta) + additional << endl;
        }
    }
}