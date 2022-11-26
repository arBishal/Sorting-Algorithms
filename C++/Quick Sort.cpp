#include <bits/stdc++.h>
using namespace std;

// fuction for partitioning the array
int partitioning(vector<int>& v, int left, int right)
{
    // assumes the last element as the pivot
    int i=left-1, j=right, pivot=v[right];
    while(i<j)
    {
        do i++;
        while(v[i]<pivot);
        do j--;
        while(v[j]>pivot);
        if(i<j)
            swap(v[i], v[j]);
    }
    swap(v[i], v[right]);
    return i;
}

// recursive function of quicksort
void quickSort(vector<int>& v, int left, int right)
{
    // basecase is comparing the left and right indexes
    if(left<right)
    {
        int p=partitioning(v, left, right);
        quickSort(v, left, p-1);
        quickSort(v, p+1, right);
    }
}

int main()
{
    // let's take an array/vector to sort
    vector<int> v;

    // input the number of elements in the vector
    int vecsize;
    cout<<"How many numbers to sort?"<<endl;
    cin>>vecsize;

    // take the input numbers
    cout<<"Enter the numbers:"<<endl;
    for(int i=0; i<vecsize; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }

    // now calling the quickSort function
    quickSort(v, 0, v.size()-1);

    // print the sorted numbers
    cout<<"Numbers after sorting:"<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}

/*
Testcase:
6
5 3 7 3 1 2
*/
