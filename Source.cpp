#include <iostream>
using namespace std;
int main()
{
    int my_arr[] = { 10,20,4,60,50 };
    int n = sizeof(my_arr) / sizeof(my_arr[0]);
    int max = 0, max2 = 0;
    int mas = my_arr[0];
    int mas2 = my_arr[1];
    int i;
    for (i = 0; i < n; i++)
    {
        if (max < my_arr[i]) {
            max = my_arr[i];  
        }
        if (my_arr[i] < max)
        {
            mas2 = my_arr[i];  
        }
    }
    cout << max << std::endl;
    cout << max2 << std::endl;
    for (int i = 0; i < (n - 1); i++)
    {
        if (max > mas2) {
            max2 = mas2;  
            std::cout << mas2 << std::endl;
        }
    }
    cout << std::endl;
    cout << "Second number= " << max2 << std::endl;

    return 0;
}