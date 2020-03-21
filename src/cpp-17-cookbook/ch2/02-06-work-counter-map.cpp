#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <map>
#include <vector>

using namespace std;

string filter_punctuation(const string &s)
{
    const char *punctuation_marks {".,:; "};
    const auto first_letter (s.find_first_not_of(punctuation_marks));
    const auto last_letter (s.find_last_not_of(punctuation_marks));

    if (first_letter == s.npos) {
        return string("");
    }

    return s.substr(first_letter, last_letter - first_letter + 1);
}

int main()
{
    map<string, size_t> words;
    int max_word_len {0};

    string s;
    while (cin >> s) {
        auto word (filter_punctuation(s));
        max_word_len = max<int>(max_word_len, word.length());
        ++words[word];
    }

    vector<pair<string, size_t>> word_counts;
    word_counts.reserve(words.size());
    move(begin(words), end(words), back_inserter(word_counts));
    sort(begin(word_counts), end(word_counts), [](const auto &wordL, const auto &wordR){
        return wordL.second < wordR.second;
    });

    cout << "# " << setw(max_word_len) << "<WORD>" << "<COUNT>\n";

    for (const auto & [word, count] : word_counts) {
        cout << setw(max_word_len + 2) << word << " #" << count << '\n';
    }
}
