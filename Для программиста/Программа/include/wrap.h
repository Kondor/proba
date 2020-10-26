#include <iostream>
#include "TypesOfWolves.h"
using std::istream;
using std::ostream;

template<typename T>
class wrap {
    T t;

public:
    wrap() : t() {}

    wrap(T const & t) : t(t) {}

    operator T&() {
        return t;
    }

    operator T const &() const {
        return t;
    }
};

template<typename T>
istream & operator>>(istream & is, wrap<T> & wt) {
    is.read(reinterpret_cast<char *>(&static_cast<T &>(wt)), sizeof(T));
    return is;
}

template<typename T>
ostream & operator<<(ostream & os, wrap<T> const & wt) {
    os.write(
            reinterpret_cast<char const *>(&static_cast<T const &>(wt)),
            sizeof(T));
    return os;
}



