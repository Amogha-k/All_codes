//
#include <iostream>
using namespace std;
class _find_replace
{
private:
    string str, pat, rep, ans;

public:
    _find_replace()
    {
        input();
        replace();
    }
    void input()
    {
        cout << "Enter the string= ";
        getline(cin,str);
        cout << "Enter thr pat= ";
        getline(cin,pat);
        cout << "Enter the string to be replaced= ";
        getline(cin,rep);
    }
    void replace()
    {
        bool flag = false;
        int i = 0;
        while (str[i] != '\0')
        {
            int j = 0;
            while (str[i + j] == pat[j] && pat[j] != '\0')
            {
                j++;
            }
            if (pat[j] == '\0')
            {
                flag = true;
                ans = ans + rep;
                i = i + (j - 1);
            }
            else
            {
                ans = ans + str[i];
            }
            i++;
        }
        if (flag)
        {
            cout << "Edited string is " << ans << endl;
        }
        else
        {
            cout << "pattern doesnt found"<<endl;
        }
    }
};
int main()
{
    _find_replace f;

    return 0;
}