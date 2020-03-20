#include <gsl/gsl>

void init (int *p) 
{
    *p = 0;
}

gsl::not_null<int*>
test(gsl::not_null<int*> p)
{
    return p;
}

int main (void)
{
    gsl::owner<int*> p = new int;
    init(p);
    delete p;

    // test not null
    auto p0 = std::make_unique<int>();
    gsl::not_null<int *> p1{p0.get()};
    auto p2 = test(p1);
}