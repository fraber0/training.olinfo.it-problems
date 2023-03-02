#include<bits/stdc++.h>

using namespace std;

#define fi freopen("input.txt", "r", stdin)
#define fo freopen("output.txt", "w", stdout)

#define ull unsigned long long int

void solve(int t) {
    int N, M, Q;
    cin >> N >> M >> Q;

    string S;
    cin >> S;
    
    vector<vector<char>> v(M);
    
    for(int i=0; i<S.size(); i++)
    {
    	v[0].push_back(S[i]);
	}

    // Aggiungi codice se vuoi

    string risposta;

    for (int i = 0; i < Q; i++) {
        char type;
        int a, b;
        cin >> type >> a >> b;

        if (type == 's') {
        	int last=v[a].size()-1;
        	v[b].push_back(v[a][last]);
			v[a].pop_back();
        } else {
            risposta.push_back(v[a][b]);
        }
    }


    cout << "Case #" << t << ": " << risposta << endl;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        solve(t);
    }

    return 0;
}
