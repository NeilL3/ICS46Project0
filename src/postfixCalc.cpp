#include "postfixCalc.hpp"

#include "LinkedListStack.hpp"
#include <string>

namespace shindler::ics46::project0 {

unsigned postfixCalculator(const std::vector<std::string>& entries) {
    // TODO: Implement Function
    LinkedListStack<int> numStack;
    int len = entries.size();

    for (int i=0; i<len; ++i) {
        std::string in = entries[i];
        if (in == "+" || in == "-" || in == "*" || in == "/") {
            if (numStack.size() < 2) {
                throw CannotEvaluateException("Attempted to perform operation with less than two elements in stack");
            }

            const int second = numStack.top();
            numStack.pop();
            const int first = numStack.top();
            numStack.pop();

            if (in == "+") {
                numStack.push(first + second);
            } else if (in == "-") {
                numStack.push(first - second);
            } else if (in == "*") {
                numStack.push(first * second);
            } else {
                numStack.push(first / second);
            }
        } else {
            numStack.push(std::stoi(in));
        }
    }

    if (numStack.size() > 1) {
        throw CannotEvaluateException("Evaluation ended with more than 1 element in stack");
    }
    return numStack.top();  // stub, not the correct answer
}

}  // namespace shindler::ics46::project0
