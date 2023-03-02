#include <bits/stdc++.h>

using namespace std;

set<long long int> s;

void inizia() {
    return;
}

void apri(long long p) {
	s.insert(p);
    return;
}

void chiudi(long long p) {
	s.erase(p);
    return;
}

long long chiedi(long long p) {
    if(s.size()==0)
    {
    	return -1;
	}else if(s.size()==1)
	{
		return *s.begin();
	}else{
		auto it1=s.lower_bound(p);
		auto it2=it1;
		it2--;
		if(p<*s.begin())
		{
			return *s.begin();
		}else if(p>*--s.end()){
			return *--s.end();
		}else{
			if(abs(*it1-p)<=abs(*it2-p))
			{
				return *it1;
			}else{
				return *it2;
			}
		}
	}
}
