// map usage
map<char, int> mymap;
map<char, int>::itertor it = mymap.find('b');
if(it != mymap.end()){
	mymap.erase(it);
	mymap.erase('b'); // erasing by key
	mymap.erase('e'); // erasing by range
}
/// map advance insert
std::pair<std::map<char,int>::iterator,bool> ret;
ret = mymap.insert ( std::pair<char,int>('z',500) );
if (ret.second==false) {
	cout << "element 'z' already existed";
	cout << " with a value of " << ret.first->second << '\n';
}
//// map swap
map<int, int>foo, bar;
foo.swap(bar);

// set usage
myset.erase(iterator, val, or range);
myset<int>(vector.begin(), vector.end());
//// vector<int> s1, s2, ans;
std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), std::back_inserter(ans));

//vector usage
vector<int>name(val, cnt);
vector<int>third(vector.begin(), vector.end());
////vector insert
myvector.insert(it pos, val);
myvector.insert(it pos, length, val);
myvector.insert(myvector.end(), anothervector.begin(), anothervector.end());
////vector erase
myvector.erase(it first, it last);

//other 
for(auto i: &arr){
	cout << i <<  " \n"[&i == &*arr.rbegin()];
}

