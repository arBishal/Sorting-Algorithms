#include <bits/stdc++.h>
using namespace std;

// function for merging the divided arrays
void merging(vector<int> &v, int left, int mid, int right)
{
    vector<int> temp;
    int i=left, j=mid+1;

    // compare and put the elements into the temporary array
    while((i<=mid) and (j<=right))
    {
        if(v[i]<v[j]) temp.push_back(v[i++]);
        else temp.push_back(v[j++]);
    }

    // put rest of the elements from the remaining subarrays
    while(i<=mid) temp.push_back(v[i++]);
    while(j<=right) temp.push_back(v[j++]);

    // copy the elements into the original array
    for(i=left; i<=right; i++)
    {
        v[i]=temp[i-left];
    }
}

// function for mergeSort, divide & conquer approach
void mergeSort(vector<int> &v, int left, int right)
{
    if(left<right)
    {
        // finding the midpoint where the partition will happen
        int mid=(right+left)/2;
        mergeSort(v, left, mid); // recursive call to the left array
        mergeSort(v, mid+1, right); // recursive call to the right array
        merging(v, left, mid, right); // call for the function to merge these subarrays
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

    // now calling the mergeSort function
    mergeSort(v, 0, v.size()-1);

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
