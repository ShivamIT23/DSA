#include <iostream>
#include <string.h>
using namespace std;

void toUpper(char *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            char temp = arr[i] - 32;
            arr[i] = temp;
        }
    }
}

void toLower(char *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            char temp = arr[i] + 32;
            arr[i] = temp;
        }
    }
}

void reverse(char *arr, int n)
{
    int st = 0, ed = n - 1;
    while (st < ed)
    {
        swap(arr[st], arr[ed]);
        st++;
        ed--;
    }
}

bool checkPalindrome(char *arr, int n)
{
    int st = 0, ed = n - 1;
    while (st < ed)
    {
        if(arr[st] != arr[ed]) return false;
        st++;
        ed--;
    }
    return true;
}

int main()
{
    // char a = 'a';
    // char n = '\n';
    // char t = '\t';
    // char ch[] = {'c','o','d','e','\0'};
    // char ch1[50] = {'c','o','d','e','\0'};
    // char ch2[] = "code";
    // char ch3[5] = "code";
    // cout<<ch<<"\n";
    // cout<<ch1<<"\n";
    // cout<<ch2<<"\n";
    // cout<<ch3<<"\n";

    // char word[30];
    // char word2[30];
    // // cin>>word;
    // cin.getline(word2 , 30 , '*');

    // // cout<< "Your Word is = " << word <<"\n";
    // // cout<< "Length is = " << strlen(word) <<"\n";
    // cout<< "Your Word is = " << word2 <<"\n";
    // cout<< "Length is = " << strlen(word2) <<"\n";

    char word[] = "ApPle";
    toUpper(word, strlen(word));

    cout << word << "\n";
    toLower(word, strlen(word));

    cout << word << "\n";
    reverse(word, strlen(word));

    cout << word << "\n";
    
    char word2[] = "racecar";

    cout << checkPalindrome(word, strlen(word)) << "\n";
    cout << checkPalindrome(word2, strlen(word2)) << "\n";

    return 0;
}