#include <iostream>

namespace P0292R2 {

// Usage of constexpr if statements - really cool !
template<typename T, typename... Rest> void reverse_print(T&& anything, Rest&&... rest) {
	if constexpr (sizeof...(rest) > 0) {
		reverse_print(rest...);
	}

	std::cout << anything << " ";
}

}

int main() {
	// Prints: "four 3 2 1"
	P0292R2::reverse_print(1, 2.0f, 3.0, "four");
}