#ifndef __ICS46_LL_STACK_HPP
#define __ICS46_LL_STACK_HPP

#include <stdexcept>

namespace shindler::ics46::project0 {

class StackEmptyException : public std::runtime_error {
   public:
    explicit StackEmptyException(const std::string& err)
        : std::runtime_error(err) {}
};

// This is the LinkedListStack class you will be implementing for this project.
// Remember to see the write-up for more details!
template <typename T>
class LinkedListStack {
   private:
    // fill in private member data here

   public:
    // constructor
    LinkedListStack();

    // copy constructor (remember, deep copy!)
    LinkedListStack(const LinkedListStack& stackb);

    // assignment operator (remember, deep copy!)
    LinkedListStack& operator=(const LinkedListStack& stackb);
    // You do not need to implement these
    LinkedListStack(LinkedListStack&&) = delete;
    LinkedListStack& operator=(LinkedListStack&&) = delete;
    // destructor
    ~LinkedListStack();

    [[nodiscard]] size_t size() const noexcept;
    [[nodiscard]] bool empty() const noexcept;

    // We have two top() functions.  The first gets called if your
    // LinkedListStack is not a const, while the latter gets called on a const
    // LinkedListStack (the latter might occur via const reference parameter,
    // for instance). Be sure to test both!  It is important when testing to
    // ensure that EVERY funtion gets called and tested!
    [[nodiscard]] T& top();
    [[nodiscard]] const T& top() const;

    void push(const T& elem) noexcept;
    void pop();
};

template <typename T>
LinkedListStack<T>::LinkedListStack() {
    // TODO: Fill in your constructor implementation here.
}

template <typename T>
LinkedListStack<T>::LinkedListStack(const LinkedListStack& stackb) {
    // TODO: Fill in your copy constructor implementation here.
}

template <typename T>
LinkedListStack<T>& LinkedListStack<T>::operator=(
    const LinkedListStack& stackb) {
    // TODO: Fill in your assignment operator implementation here.
    return *this;  // Stub so this function compiles without implementation.
}

template <typename T>
LinkedListStack<T>::~LinkedListStack() {
    // TODO: Fill in your destructor implementation here.
}

template <typename T>
size_t LinkedListStack<T>::size() const noexcept {
    // TODO: Fill in your size() implementation here.
    return {};  // Stub so this function compiles without an implementation.
}

template <typename T>
bool LinkedListStack<T>::empty() const noexcept {
    // TODO: Fill in your isEmpty() implementation here.
    return {};  // Stub so this function compiles without an implementation.
}

template <typename T>
T& LinkedListStack<T>::top() {
    // TODO: Fill in your top() implementation here.
    // The following is a stub just to get the template project to compile.
    // You should delete it for your implementation.
    auto val = new T;
    return *val;
}

template <typename T>
const T& LinkedListStack<T>::top() const {
    // TODO: Fill in your const top() implementation here.
    // The following is a stub just to get the template project to compile.
    // You should delete it for your implementation.
    return {};
}

template <typename T>
void LinkedListStack<T>::push(const T& elem) noexcept {
    // TODO: Fill in your push() implementation here.
}

template <typename T>
void LinkedListStack<T>::pop() {
    // TODO: Fill in your pop() implementation here.
}

}  // namespace shindler::ics46::project0
#endif
