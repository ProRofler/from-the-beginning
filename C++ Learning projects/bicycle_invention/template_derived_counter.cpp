#include <type_traits>
#include <utility>

template <typename...>
struct TypeList {};

template <typename Base, typename... Types>
consteval auto count_derived_classes(TypeList<Types...> type_list) {
  return [](auto... indices) -> std::size_t {
    return (... +
            (std::derived_from<Types, Base> && !std::is_same_v<Types, Base>));
  }(type_list, std::make_index_sequence<sizeof...(Types)>{});
}

template <typename... Types>
struct DerivedClassCounter {
  template <typename Base>
  static constexpr auto count() {
    return count_derived_classes<Base>(TypeList<Types...>{});
  }
};

struct A {};
struct B : A {};

int main() {
  using Counter = DerivedClassCounter<A, B>;

  static_assert(Counter::count<A>(), "Class A has children");
  static_assert(!Counter::count<B>(), "Class B does not have children");

  return 0;
}
