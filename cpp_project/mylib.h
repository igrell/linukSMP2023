#include "sstream"

struct Pair {
    int fst;
    int snd;

friend std::ostream& operator<<(std::ostream& ostream, const Pair& pair) {
        ostream << "(" << pair.fst << "," << pair.snd << ")";
        return ostream;
    }
};
