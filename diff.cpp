// Find indexes of the elements whos diff is equal to the target
#include <iostream>
using namespace std;

void findiff(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        int ans = arr[i] + target;

        int s = i + 1;
        int e = n - 1;
        int mid = s + (e - s) / 2;

        while (s <= e)
        {
            if (arr[mid] == ans)
            {   
                cout<<"---------";
                cout <<"|"<< arr[mid] << " " << arr[i]<<"|";
                cout<<"---------"<<endl;

                break;
            }
            else if (arr[mid] > ans)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
    }
}
int main()
{
    int arr[10] = {1, 3, 4, 6, 8, 10, 16, 20, 28, 80};
    

    findiff(arr, 10, 2);

    return 0;
}