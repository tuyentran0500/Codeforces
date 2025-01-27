#include <bits/stdc++.h>
using namespace std;
// Tên chương trình
const string NAME = "solve"; 
// Số test kiểm tra
const int NTEST = 1;

// Viết lại hàm random để sử dụng cho thuận tiện. Hàm random này sinh ngẫu nhiên số trong phạm vi long long, số sinh ra >= l và <= h.
long long Rand(long long l, long long h)
{
    return l + ((long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (long long)rand() * (RAND_MAX + 1) +
                rand()) % (h - l + 1);
}
set<pair<int,int>> ok;
int main()
{
    srand(time(NULL));
    for(int iTest = 1; iTest <= NTEST; iTest++)
    {
        ofstream inp((NAME + ".inp").c_str());
       	int n = 8;
       	int m = 12;
        int s = rand() % n, t = rand() % n;
       	inp << n << ' ' << m << ' ' << s << ' ' << t << '\n';
       	for(int i=1;i<=m;++i) {
            while (true){
       		   int u = rand() % n + 1, v = rand() % u;
               if (ok.find({u,v}) == ok.end()){
       		       inp << u << ' ' << v << '\n';
                   ok.insert({u,v});
                   break;
                }
            }
       	}
       	inp << '\n';
        // Code phần sinh test ở đây
        inp.close();
        // Nếu dùng Linux thì "./" + Tên chương trình
        // system((NAME + ".exe").c_str());
        // system((NAME + "_btf.exe").c_str());
        // // Nếu dùng linux thì thay fc bằng diff
        // if(system(("fc " + NAME + ".out " + NAME + ".ans").c_str()) != 0)
        // {
        //     cout << "Test " << iTest << ": WRONG!\n";
        //     return 0;
        // }
        // cout << "Test " << iTest << ": CORRECT!\n";
    }
    return 0;
}