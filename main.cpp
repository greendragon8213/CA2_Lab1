#include <iostream>
#include "Decoder/Decoder.h"
#include <chrono>

using namespace std;

int main() {

    Decoder d = Decoder();

    auto begin = std::chrono::high_resolution_clock::now();

//        d.code_file("etext.txt", "dtext.txt", true);    // Encode
    d.code_file("dtext.txt", "etext.txt", false);       // Decode

    auto end = chrono::high_resolution_clock::now();
    double time = chrono::duration_cast<std::chrono::nanoseconds>(end-begin).count() / 1000000000.0;
    cout << "Worked for " <<  time << " s" << endl;

//    cout << d.decode("-.-.-...---.---.---...---.---...-.......---...-...---.-.-.---...---") << endl;
    return 0;
}