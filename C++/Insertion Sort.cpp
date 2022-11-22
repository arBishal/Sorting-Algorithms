#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& v)
{
    // loop through all the elements in the main vector
    for(int i=1; i<v.size(); i++)
    {
        // place the number to its rightful position by shifting the others in the left subvector
        for(int j=i-1; j>=0; j--)
        {
            if(v[j]<=v[j+1]) break;
            else
            {
                swap(v[j], v[j+1]);
            }
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

    // take the input numbers
    cout<<"Enter the numbers:"<<endl;
    for(int i=0; i<vecsize; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }

    // now calling the insertionSort function
    insertionSort(v);

    // print the sorted numbers
    cout<<"Numbers after sorting:"<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
