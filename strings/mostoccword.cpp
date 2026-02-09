#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string str = "Hi my Name is aniket aniket is a good boy aniket likes to do nothing";

    vector<string> s;
    stringstream ss;
    ss << str;
    string temp;
    while (ss >> temp)
    {
        s.push_back(temp);
    }
    int maxCount = 1;
    int count = 1;
    sort(s.begin(), s.end());
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            count++;
        else
            count = 1;
        maxCount = max(count, maxCount);
    }

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            count++;
        else
            count = 1;
        if (maxCount == count)
        {
            cout << s[i] << " " << maxCount;
        }
    }
}