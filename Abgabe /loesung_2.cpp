#include <iostream>
#include <map>

void print_frequencies(std::map<char, int> const& frequencies) {
	int total = 0;
	for (auto const& [c, freq] : frequencies) {
		total += freq;
	}
	for (auto const& [c, freq]: frequencies) {
		std::cout << c << ": " << (freq * 100.0) / total << "%" << std::endl; 	//  precentage ist für % ausgabe der anzahl
	}
	std::cout << " count: " << total << std::endl;         // um die gesamt anzahl auszugeben
}

int main (int charc, char** argv) {
	std::map<char, int> char_frequencies;

	unsigned char c;
	while (std::cin) {
		std::cin >> c;
		if (std::isalpha(c)) {
			char_frequencies[std::toupper(c)] += 1;
		}
	}

	print_frequencies(char_frequencies);
}