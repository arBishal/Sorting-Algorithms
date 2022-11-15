#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& v)
{
    for(int i=0; i<v.size()-1; i++)
    {
        int minIndex=i;

        // finding the index of the lowest number in the vector
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[minIndex]>v[j]) minIndex=j;
        }

        // swapping the lowest number with the number in i-th position
        if(i!=minIndex)
        {
            swap(v[minIndex], v[i]);
        }
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

    // take input numbers
    for(int i=0; i<vecsize; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }

    // now calling the selectionSort function
    selectionSort(v);

    // print the sorted numbers
    cout<<"Numbers after sorting:"<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
