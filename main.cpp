#include <expected>
#include <print>

// 使用 C++23 的模块导入（如果编译器支持）
// import std;

// 展示 C++23 的 if consteval
constexpr int get_value() {
  if consteval {
    return 42;
  } else {
    return 43;
  }
}

// 展示 std::expected 用法
std::expected<int, std::string> divide(int a, int b) {
  if (b == 0) {
    return std::unexpected("Division by zero");
  }
  return a / b;
}

int main() {
  // 使用 C++23 的 std::print
  std::print("Hello from C++23!\n");

  // 展示 if consteval
  constexpr auto compile_time_value = get_value();  // 返回 42
  auto runtime_value = get_value();                 // 返回 43

  std::println("Compile time value: {}", compile_time_value);
  std::println("Runtime value: {}", runtime_value);

  // 展示 std::expected
  auto result1 = divide(10, 2);
  auto result2 = divide(10, 0);

  if (result1.has_value()) {
    std::println("10/2 = {}", result1.value());
  }

  if (!result2.has_value()) {
    std::println("Error: {}", result2.error());
  }

  // 展示字符串字面量和C++23的原始字符串改进
  using namespace std::string_literals;
  auto str =
      "Multi-line string"
      " with improved concatenation"s;

  // 展示 C++23 raw string improvements
  auto raw_str = R"(
        This is a raw string
        with multiple lines
    )";

  // 展示 size_t 字面量后缀
  auto size = 42uz;  // 明确的 size_t 类型

  return 0;
}
