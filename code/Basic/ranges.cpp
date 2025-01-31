// C++ ranges library (since C++20)
#include <ranges>

vector<int> vec = {1, 2, 3, 4, 5};
auto [min, max] = minmax_element(vec.begin(), vec.end());
ranges::sort(vec, greater<int>()); // sort in desc order
ranges::reverse(vec);

// iterate in reverse order
for(int i: vec | views:reverse) {
	cout << i << " ";
}

// lower_bound, upper_bound, binary_search in ranges
vector<int> vec = {1, 2, 3, 4, 5};
auto it = ranges::lower_bound(vec, 3);
auto it2 = ranges::upper_bound(vec, 3);
bool found = ranges::binary_search(vec, 3); // whether 3 is in vec, require inc order