#include <iostream>
#include <map>

template <typename M>
void printPairs(const M &m)
{
    std::cout << "Race placement: \n";
    for (const auto &[placement, driver] : m) {
        std::cout << placement << ": " << driver << '\n';
    }
}

int main() 
{
    std::map<int, std::string> race_placement {
        {1, "Mario"},
        {2, "Bowser"},
        {3, "Waluigi"},
        {4, "Daisy"},
        {5, "Toad"},
        {6, "Koopa Troopa"},
        {7, "Funky Kong"},
        {8, "Luigi"},
    };
    printPairs(race_placement);

    std::cout << "Luigi got the bullet\n.";

    auto luigi = (race_placement.extract(8));
    auto toad = (race_placement.extract(5));
    std::swap(luigi.key(), toad.key());

    race_placement.insert(std::move(luigi));
    race_placement.insert(std::move(toad));

    printPairs(race_placement);
}

