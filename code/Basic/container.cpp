// map usage
map<char, int> mymap;
map<char, int>::iterator it = mymap.find('b');
if (it != mymap.end()) {
    mymap.erase(it);
    mymap.erase('b'); // erasing by key
    mymap.erase('e'); // erasing by range
}

// map advance insert
pair<map<char, int>::iterator, bool> ret;
ret = mymap.insert(pair<char, int>('z', 500));
if (ret.second == false) {
    cout << "element 'z' already existed";
    cout << " with a value of " << ret.first->second << '\n';
}

// map swap
map<int, int> foo, bar;
foo.swap(bar);

// map find & contains
if (mymap.find('a') != mymap.end()) {
    return true;
}
if (mymap.count('a')) {
    return true; // support (ordered, unordered) x (map, multimap), return size_t
}
if (mymap.contains('a')) {
    return true; // support (ordered, unordered) x (map), return bool
}

// set usage
set<int> myset;
myset.erase(myset.begin(), myset.end()); // erasing by range
myset.erase(5); // erasing by value

vector<int> vec = {1, 2, 3, 4, 5};
set<int> myset2(vec.begin(), vec.end());

// set intersection
vector<int> s1 = {1, 2, 3};
vector<int> s2 = {2, 3, 4};
vector<int> ans;
set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(ans));

// vector usage
vector<int> name(10, 5); // vector with 10 elements, each of value 5
vector<int> third(name.begin(), name.end());

// vector insert
vector<int> myvector = {1, 2, 3, 4, 5};
myvector.insert(myvector.begin() + 2, 10); // insert value 10 at position 2
myvector.insert(myvector.begin() + 2, 3, 20); // insert value 20 three times at position 2
vector<int> anothervector = {6, 7, 8};
myvector.insert(myvector.end(), anothervector.begin(), anothervector.end());

// vector erase
myvector.erase(myvector.begin() + 1, myvector.begin() + 3); // erase elements from position 1 to 3

// other
int arr[] = {1, 2, 3, 4, 5};
for (auto i : arr) {
    cout << i << " \n"[&i == &arr[4]];
}

