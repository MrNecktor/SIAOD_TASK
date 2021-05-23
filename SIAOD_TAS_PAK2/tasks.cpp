#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void task1()
{
    string s1;
    string s2;
    bool aa=true;
    bool bb=true;

    cout <<"Введите первую строку"<< endl;
    cin >> s1;
    cout <<"Введите вторую строку"<< endl;
    cin >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for (int i=0; i<s1.size() && (aa || bb); i++)
    {
        if (s1[i] < s2[i])
            aa = false;
        else if (s2[i] < s1[i])
            bb = false;
    }
    cout << (aa|| bb) << endl;
}

void task2()
{
    string a;
    string buffer;
    string sub_a;
    string ans;

    cout << "Введите строку" << endl;
    cin >> a;


    for (char i : a)
    {
        sub_a += i;
        buffer = sub_a;
        reverse(buffer.begin(), buffer.end());
        if (sub_a == buffer)
        {
            ans = sub_a;
        }
    }
    cout << ans << endl;
}

void task3()
{
    bool first=true;
    int ans=0;
    string a;
    string substring;
    string buffer="";

    cout << "Введите строку" << endl;
    cin >> a;



    for (int i=0; (a.size() / 2) > i; i++)
    {
        buffer="";

        if (first)
        {
            for (int j = 0; j <= (a.size() / 2); j++)
            {
                buffer += a[j];
                substring = buffer + buffer;
                if (a.find(substring) != -1)
                    ans++;
            }
            first=false;
        }
        buffer="";

        for (int j = i+1; j <= (a.size() / 2); j++)
        {
            buffer += a[j];
            substring = buffer + buffer;
            if (a.find(substring) != -1)
                ans++;
        }
    }
    cout<< ans;
}
