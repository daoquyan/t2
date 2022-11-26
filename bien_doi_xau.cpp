#include <iostream>
#include <string>

using namespace std;

string  upper(string s)
{
    int len = s.length();
    for (int i = 0; i < len; i++)
        if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] -'a' +'A';
    return s;
}
string  HOA(string s)
{
    int len = s.length();
    string ss = "";
    for (int i = 0; i < len; i++)
        if (s[i] >= 'A' && s[i] <= 'Z') ss = ss + s[i];
    return ss;
}
bool KTR(string a, string b)
{
    int lena = a.length();
    int lenb = b.length();
    int vtc = 0;
    bool ok;
    for (int i = 0; i <lenb ; i++)
    {
        ok = 0;
        for (int j = vtc; j <lena; j++)
           if (b[i] == a[j])
           {
               vtc = j;
               ok = 1;
               break;
           }
        if (ok == 0) return false;
        vtc++;
    }
    return true;
}

int main()
{
    string a;
    string b;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        if (KTR(b, HOA(a)) && KTR(upper(a), b)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
