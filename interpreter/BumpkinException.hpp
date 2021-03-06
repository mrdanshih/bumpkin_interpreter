#ifndef BUMPKININTERPRETER_BUMPKINEXCEPTION_HPP
#define BUMPKININTERPRETER_BUMPKINEXCEPTION_HPP

#include <string>

class BumpkinException {
public:
    BumpkinException(std::string message);
    std::string getMessage();

private:
    std::string message;
};


#endif //BUMPKININTERPRETER_BUMPKINEXCEPTION_HPP
