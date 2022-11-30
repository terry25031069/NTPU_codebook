typedef long long LL;

inline LL modMul(LL a, LL b, LL m){
	return __int128{a} * b % m;
}

inline LL pow(LL a, LL b, LL m){LL ret = 1;
	for (; b; a = modMul(a, a, m), b >>= 1)
	if (b % 2) ret = modMul(ret, a, m);
	return ret;
}

bool is_prime(LL n){
	//LL sprp[3] = { 2LL, 7LL, 61LL};
	LL sprp[7] = {2, 325, 9375, 28178, 450775, 9780504, 1795265022};
	if(n == 1 || (n & 1) == 0) return n == 2;
	LL u = n - 1, t = 0; for(; u % 2 == 0; t++) u >>= 1;
	//for(int i = 0; i < "sprp.size()"; i++)
	for(int i = 0; i < 7; i++){ LL a = sprp[i] % n;
		if(a == 0 || a == 1 || a == n - 1) continue;
		LL x = pow(a, u, n); if(x == 1 || x == n-1) continue;
		for(int j = 1; j < t; j++){ x = modMul(x, x, n);
			if (x == 1) return 0; if (x == n - 1) break;
		}
		if(x == n - 1)continue; return 0;
	}
	return 1;
}
