#include <string>

unsigned hamming(const std::string &a, const std::string &b) {
    // Check if the input strings have the same length
    if (a.length() != b.length()) {
        throw std::invalid_argument("Input strings must have the same length");
    }

    unsigned distance = 0;
    // Iterate through the characters of both strings and count differing characters
    for (std::size_t i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) {
            distance++;
        }
    }

    return distance;
}