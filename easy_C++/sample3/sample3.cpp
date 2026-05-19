#include <iostream>
using namespace std;

int main() {
    // 文字の出力
    cout << 'A' << 'B' << 'C' << "\n" 
        << 'D' << 'E' << 'F' << "\n" 
        << 'G' << 'H' << 'I' << "\n";
        //通常は続けて出力される

    // 文字列の出力
    cout << "おはよう霞ヶ関！" << endl; 
    cout << "こんにちは、霞 \n"
        << "こんばんは、霞 \n"; 
    
    // 数値を出力
    cout << 123 << endl;
    return 0;
}