struct v {
	int a, b, c;
};

int p[200001];v a[200001];

bool sor(v a, v b) {
	return a.c < b.c;
}

int find(int x) {
	return(x != p[x] ? (p[x] = find(p[x])) : x);
}

int main() {
	int n, m, i, j, sum;
	while (cin >> n >> m) {
		sum = 0; 
		for (i = 0; i < 200001; i++)p[i] = i;
		for (i = 0; i<m; i++)cin >> a[i].a >> a[i].b >> a[i].c;
		sort(a, a + m, sor);
		for (i =0,j = 0;j<m; j++) {
			if(find(a[j].a) != find(a[j].b)){
				i++;
				p[find(a[j].a)] = find(a[j].b);
				sum += a[j].c;
			}
		}
		cout << ((i==n-1)?sum:-1) << endl;
	}
}
