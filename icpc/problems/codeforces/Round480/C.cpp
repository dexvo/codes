#include<iostream>
using namespace std;
const int size = 256;
int flag[size];
int main() {
    int n, k, tmp, res;
    for (int i = 0; i < size; i++) {
	flag[i] = -1;
    }
    cin >> n >> k;
    while (n--) {
        cin >> tmp;
	if (flag[tmp] != -1) {
	    cout<<tmp;
	} else {
     	   int t = max(tmp - k + 1, 0);
	   for (int i = t; i <= tmp; i++) {
	       if (flag[i] == -1) {
		   t = i;
		   break;
	       }
	   }
    	   cout<<t;
	   for (int i = t; i <= tmp; i++) {
		flag[i] = t;	   
	   }	   
	}
	cout<<" ";
    }
    cout<<endl;    
    return 0;
}
