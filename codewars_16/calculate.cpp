// You have complete freedom over the function signatures, as long as all the needed functions get defined.
// Do not `using namespace std`, because your `plus` function might clash with `std::plus` :)
#include <iostream>
#include <functional>
using namespace std;

auto zero(function<int(int)> op = nullptr) {
  return op ? op(0) : 0; 
}
auto one(function<int(int)> op = nullptr) {
  return op ? op(1) : 1; 
}
auto two(function<int(int)> op = nullptr) {
  return op ? op(2) : 2; 
}
auto three(function<int(int)> op = nullptr) {
  return op ? op(3) : 3; 
}
auto four(function<int(int)> op = nullptr) {
  return op ? op(4) : 4; 
}
auto five(function<int(int)> op = nullptr) {
  return op ? op(5) : 5; 
}
auto six(function<int(int)> op = nullptr) {
  return op ? op(6) : 6; 
}
auto seven(function<int(int)> op = nullptr) {
  return op ? op(7) : 7; 
}
auto eight(function<int(int)> op = nullptr) {
  return op ? op(8) : 8; 
}
auto nine(function<int(int)> op = nullptr) {
  return op ? op(9) : 9; 
}

function<int(int)> plus(int b) {
    return [b](int a) {
        return a + b;
    };
}
function<int(int)> minus(int b) {
    return [b](int a) {
        return a - b;
    };
}
function<int(int)> times(int b) {
    return [b](int a) {
        return a * b;
    };
}
function<int(int)> divide_by(int b) {
    return [b](int a) {
        return a / b;
    };
}