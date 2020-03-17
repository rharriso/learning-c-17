#include <iostream>
#include <unordered_map>

struct coord {
    int x;
    int y;
};

bool operator==(const coord&left, const coord &right) 
{
    return left.x == right.x && left.y == right.y;
}

// Implement hash template so that coord can be used
// in unordered map
template <>
struct std::hash<coord>
{
    using argument_type = coord;
    using result_type = size_t;

    result_type operator()(const argument_type &c) const
    {
        return static_cast<result_type>(c.x) 
            + static_cast<result_type>(c.y);
    }
};

int main()
{
    std::unordered_map<coord, int> map {
        {{0, 0}, 1},
        {{0, 1}, 2},
        {{2, 1}, 3}
    };

    for (const auto &[key, value]: map) {
        std::cout << '(' << key.x << ',' << key.y << "): " << value << '\n';
    }

}