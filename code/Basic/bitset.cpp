//declare
string s = "100101";
bitset<10>yee(s);//padding by 0

//usage
yee.set()        // all bitset set 1;
yee.set(current_bit);
yee.set(current_bit, [0, 1]);

yee.flip();       //flip all flip
yee.flip(current_bit);        

yee.count() ;     //count how many bits of yee are 1
yee.size();       //return the length when string s to bitset yee

string s = yee.to_string(); 
unsigned long a = yee.to_ulong();  
unsigned long long b = yee.to_ullong();
cout << s << endl;  //10011011
cout << a << endl;  //155
cout << b << endl;  //155
