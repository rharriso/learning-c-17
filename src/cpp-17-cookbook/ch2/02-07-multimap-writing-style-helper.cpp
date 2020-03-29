#include <iostream>
#include <iterator>
#include <map>
#include <algorithm>

using namespace std;

string filter_ws(const string &s)
{
    const char *whitespace {" \r\n\t"};
    const auto first_letter (s.find_first_not_of(whitespace));
    const auto last_letter (s.find_last_not_of(whitespace));

    if (first_letter == s.npos) {
        return string("");
    }

    return s.substr(first_letter, last_letter - first_letter + 1);
}

multimap<size_t, string> get_sentence_stats(const string &content)
{
    multimap<size_t, string> result;
    const auto content_end (end(content));
    auto sentence_start (begin(content));
    auto sentence_end (find(sentence_start, content_end, '.'));

    while (sentence_start != content_end && distance(sentence_start, sentence_end) > 0)     {
        // filter string between current sentence location and end
        string s {filter_ws({sentence_start, sentence_end})};

        if (s.length() > 0 ) {
            const auto word_count (count(begin(s), end(s), ' ') + 1);
            result.emplace(make_pair(word_count, move(s)));
        }

        sentence_start = next(sentence_end, 1);
        sentence_end = find(sentence_start, content_end, '.');
    }

    return result;
}

int main () 
{
cin.unsetf(ios::skipws);
string content { istream_iterator<char> {cin}, {}};

for (const auto & [word_count, sentence] : get_sentence_stats(content)) {
    cout << word_count << " words: " << sentence << ".\n";
}
}