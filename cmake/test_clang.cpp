#include <iostream>

#if not __has_feature(cxx_generic_lambdas)
#error "Clang is too old. C++14 support is not present"
#endif

int main() {
 std::cout << __clang_major__ <<"."<< __clang_minor__ <<"."<< __clang_patchlevel__;
}
