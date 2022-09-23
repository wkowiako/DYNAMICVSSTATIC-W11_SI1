#include <exception>

struct ExceptionOfindex : public std::exception {
    const char* what() const throw () {
        return "Exceptions get; ind =";
    }
};
struct ExceptionOfind : public std::exception {
    const char* what() const throw () {
        return "Exceptions set. Size arrat:";
    }
};
