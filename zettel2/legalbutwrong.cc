#include <iostream>

int main (int argc, char** argv){
    int n = 10;
    int i = 0;
    int sum = 0;
    for (int j = 1; j <= n; j = j+1) // j durch i ersetzen weil j die sum zahl zu ordnet
    {
        sum = sum + j;
    }
    std::cout << sum << std::endl;
    return 0;
}