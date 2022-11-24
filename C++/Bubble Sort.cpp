#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& v)
{
    // swap numbers untill the vector's sorted from the beginning
    for(int i=v.size(); i>0; i--)
    {
        // compare two adjacent numbers and swap them
        for(int j=0; j<i; j++)
        {
            if(v[j]>v[j+1])
                swap(v[j], v[j+1]);
        }
    }
}

void bubbleSortOptimized(vector<int>& v)
{
    // flag variable to check if swapping happened
    bool flag;
    // swap numbers untill the vector's sorted from the beginning
    for(int i=v.size(); i>0; i--)
    {
        flag=0;
        // compare two adjacent numbers and swap them
        for(int j=0; j<i; j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j], v[j+1]);
                flag=1;
            }
        }

        // if swapping doesn't happen, the vector is sorted
        if(flag==0) break;
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

    // now calling the bubbleSort function
    bubbleSort(v);
    // calling the bubbleSortOptimized function
    bubbleSortOptimized(v);

    // print the sorted numbers
    cout<<"Numbers after sorting:"<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
