*if output to much, consider put all output in array first, then output the array.
getchar() -> getchar_unlocked()
fread() -> fread_unlocked()
-------------------------
inline char readchar() {
	const int S = 1<<20; // buffer size
	static char buf[S], *p = buf, *q = buf;
	if(p == q && (q = (p=buf)+fread(buf,1,S,stdin)) == buf) return EOF;
	return *p++;
}
inline int nxtint() {
	// if readchar can't use, change readchar() to getchar()
	int x = 0, neg = 0, c = readchar();
	if (c == EOF) return -1;
	while (('0' > c || c > '9') && c != '-' && c != EOF) c = readchar();
	if (c == '-')neg = true, c = readchar();
	while ('0' <= c && c <= '9') x = x * 10 + (c ^ '0'), c = readchar();
	return (neg? x: -x);
}

