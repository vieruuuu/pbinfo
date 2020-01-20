#include <fstream>

using namespace std;

int prim (int n) {
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
        	return 0;
        }
    }
    
    return n > 1;
}

int main () {
	ifstream fin("prime.in");
    ofstream fout("prime.out");
    
    int n;
    
    fin >> n;
    
    for (int i = 0; i < n; i++) {
    	int v;
        
        fin >> v;
        
        if (prim(v) == 1) {
        	fout << v << ' ';
        
        }
    }
    
    return 0;
}

