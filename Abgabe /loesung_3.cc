#include <iostream>
#include <map>
#include <string>


std::string sanitize_word(std::string const& word) // sanitize_word Entfernen von Sonderzeichen und Umwandlung in Kleinbuchstaben
{
    std::string result;
    for (char c : word) {
        if (std::isalpha(c)) {
            result += std::tolower(c);
        }
    }
    return result;
}


std::map<std::string, int> get_frequencies() // get_frequencies zum Zählen der Wörter
{
    std::map<std::string, int> word_frequencies;

    std::string word;
    while (std::cin >> word) {
        
        word = sanitize_word(word);  // ausblenden Sonderzeichen/  Umwandlung in Kleinbuchstaben wird gecallt von zeile 6

        
        if (word.size() == 0)          // Überprüfen, ob das Wort leer ist
        {
            continue;
        }
        word_frequencies[word] += 1;  // aufzählung derFrequenz für das Wort
    }

    return word_frequencies;   // gibt word_--- an die funktion zurück
}


void print_frequencies(std::map<std::string, int> const& frequencies) // Funktion zum Ausgeben der Wortfrequenzen
{
    int total = 0;
    for (auto const& [word, freq] : frequencies) {
        total += freq;
    }
    for (auto const& [word, freq] : frequencies) {
        std::cout << word << ": " << (freq * 100.0) / total << "%" << std::endl;        //
    }
    std::cout << "Total count: " << total << std::endl;                 //anzahl ausgeben
}

int main() {
    auto word_frequencies = get_frequencies();
    print_frequencies(word_frequencies);

    return 0;
}
