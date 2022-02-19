#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define endl '\n'
#define mp make_pair
#define f first
#define eb emplace_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define s second
#define arr_prime {2, 3, 5, 7, 11, 13, 17, 19}
#define arr_pow {9, 6, 4, 4, 3, 3, 3, 3}
#define FOR(i, m, n) for(int i=m; i<n; i++)
#define FORD(i, m, n) for(int i=m; i>=n; i--)
#define FILEIO cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define reset(A) memset(A, 0, sizeof(A))
using namespace std;
const int mod = 10007;
const int MAXN = 70001;
const int LIM = 501;
const int N = 8;
int prime[] = arr_prime;
int cnt_pow[] = arr_pow;
int power[N][11];
bool isPrime[LIM];
int pre[N + 1];
int dp[101][MAXN][2];
int A[101], n;
vector<int> VAL[MAXN];
pii DIV[MAXN];

// sang nguyen to
void eratos(){
	FOR(i, 2, LIM) isPrime[i] = true;
	FOR(i, 2, sqrt(LIM)){
		for(int j=i*i; j<LIM; j+=i) isPrime[j] = false;
	}
}
// tim trang thai moi
int new_version(vector<int> v){
	int sum = 0;
	FOR(i, 0, v.size()) sum += v[i] * pre[i + 1];
	return sum;
}

void prepare(){
	FOR(i, 0, N){
		power[i][0] = 1;
		FOR(j, 1, 11) power[i][j] = power[i][j-1] * prime[i] % mod;
	}
	pre[N] = 1;
	FORD(i, N-1, 0) pre[i] = pre[i + 1] * cnt_pow[i];
	FOR(i, 0, pre[0]){
		int val = i;
		FOR(j, 1, N+1) VAL[i].eb(val / pre[j]), val %= pre[j]; 
	}
}

void setPair(){
	FOR(i, 1, n + 1){
		bool check = false;
		FOR(j, 20, LIM){
			if(isPrime[j] && A[i] % j == 0){
				check = true;
				DIV[i].f = j; DIV[i].s = A[i] / j;
				break;
			}
		}
		if(!check) DIV[i].f = 1, DIV[i].s = A[i];
	}
}

void update_val(int index){
	if(DIV[index-1].f != DIV[index].f){
		FORD(i, pre[0]-1, 0) dp[index][i][0] = (dp[index-1][i][0] + dp[index-1][i][1]) % mod;
	}
	else{
		FORD(i, pre[0]-1, 0){
			dp[index][i][0] = dp[index-1][i][0];
			dp[index][i][1] = dp[index-1][i][1];
		}
	}
}

void update_state(int index1, int index2, int index3, vector<int> cnt){
	int res = 1;
	vector<int> vtr(N);
	FOR(i, 0, N){
		int root = max(0, cnt[i] - VAL[index2][i]);
		vtr[i] = max(cnt[i], VAL[index2][i]);
		res = (res * power[i][root]) % mod;
	}
	if(DIV[index1-1].f != DIV[index1].f) res = (res * DIV[index1].f) % mod;
	if(DIV[index1-1].f == DIV[index1].f && index3 == 0) res = (res * DIV[index1].f) % mod;
	int update = new_version(vtr);
	dp[index1][update][1] = (dp[index1][update][1] + res * dp[index1-1][index2][index3]) % mod;
}

int answer(){
	int ans = 0;
	FOR(i, 0, pre[0]) ans += dp[n][i][0] + dp[n][i][1], ans %= mod;
	return ans % mod;
}

int solution(){
	reset(dp);
	cin >> n;
	FOR(i, 1, n + 1) cin >> A[i];
	setPair();
	sort(DIV + 1, DIV + n + 1); dp[0][0][0] = 1;
	FOR(i, 1, n + 1){
		int val = DIV[i].s;
		vector<int> cnt(N, 0);
		FOR(j, 0, N){
			while(val % prime[j] == 0) val /= prime[j], cnt[j]++;
		}
		update_val(i);
		FORD(j, pre[0]-1, 0){
			FORD(k, 1, 0){
				if(dp[i-1][j][k]){
					auto update_st = [&](const int index1, const int index2, const int index3, 
					vector<int> &cnt) -> void {
						int res = 1;
						vector<int> vtr(N);
						FOR(i, 0, N){
							int root = max(0, cnt[i] - VAL[index2][i]);
							vtr[i] = max(cnt[i], VAL[index2][i]);
							res = (res * power[i][root]) % mod;
						}
						if(DIV[index1-1].f != DIV[index1].f)
							res = (res * DIV[index1].f) % mod;
						if(DIV[index1-1].f == DIV[index1].f && index3 == 0)
							res = (res * DIV[index1].f) % mod;
						int update = new_version(vtr);
						dp[index1][update][1] = (dp[index1][update][1] + res * dp[index1-1][index2][index3]) % mod;	
					};
					update_st(i, j, k, cnt);
				}
			}
		}
	}
	return answer()-1;
}
int main(){
	FILEIO;
	eratos();
	prepare();
	int t = 1, step = 1;
	cin >> t; 
	while(t--) cout << "Case " << (step++) << ": " << solution() << endl;	
}