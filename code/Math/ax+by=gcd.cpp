typedef pair<int, int> pii;

pii exgcd(int a, int b){
	if(b == 0) return make_pair(1, 0);
	else{
		int p = a / b;
		pii q = exgcd(b, a % b);
		int aa = q.second, bb = q.first - q.second * p;
		if(aa < 0) aa += b, bb -= a;
		return make_pair(aa, bb);
	}
}
