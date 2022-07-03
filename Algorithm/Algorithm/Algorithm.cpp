#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>

using namespace std;

int problem1(int, int, int, vector<int>);
int problem3(int, int);
int problem2(int N, int M, vector<vector<int>> list);

int main()
{
    vector<int> list1 = {2,4,5,4,6};
    vector<vector<int>> list2 = { {3,1,2},{4,1,4}, {7,5,5} };
    vector<int> list3 = {2,4,5,4,6};

    cout << problem1(5, 8, 3, list1) << endl;
    cout << problem3(25, 5) << endl;
    cout << problem2(3, 3, list2);
}

// 1번 문제
int problem1(int N, int M, int K, vector<int> list)
{   

    sort(list.begin(), list.end());
    int num1(list.at(N-1)), num2(list.at(N-2)), count(K), result(0);

    cout << num1 << num2 << endl;

    for (int i = 0; i < M; i++)
    {
        if (count != 0)
        {
            cout << result << " + " << num1 << endl;
            result += num1; 
            count--;
        }
        else
        {
            cout << result << " + " << num2 << endl;
            result += num2;
            count = K;
        }
    }
    return result;
}

int problem2(int N, int M , vector<vector<int>> list)
{
    int result(0);
    for (int i = 0; i < N; i++)
    {
        sort(list.at(i).begin(), list.at(i).end());
        if (list.at(i).at(0) > result)
        {
            result = list.at(i).at(0);
        }
    }
    return result;
}

int problem3(int N , int K)
{
    int result(0);
    while (N != 1) {
        if (N % K == 0)
        {
            N /= K;
        }
        else
        {
            N--;
        }
        result++;
    }
    return result;
}