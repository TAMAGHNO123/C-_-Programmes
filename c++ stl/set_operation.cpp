//Create two sets of integers and find their intersection, union, and difference.
#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>

using namespace std;


int main() {
    //initializing two sets of integers

    set<int>set1 = {1,2,3,4};
    set<int>set2 = {3,4,5,6};

    //displaying the original sets
    cout<<"Set1: ";
    for(int num : set1){
        cout<< num << " ";
    }
    cout<<endl;

    cout<<"Set2: ";
    for(int num : set2){
        cout<< num << " ";
    }
    cout<<endl;


    //calculating intersection
    set<int>setIntersection;
    set_intersection(set1.begin(),set1.end(),set2.begin(),set2.end(),inserter(setIntersection,setIntersection.begin()));

    //calculating union
    set<int>setUnion;
    set_union(set1.begin(),set1.end(),set2.begin(),set2.end(),inserter(setUnion,setUnion.begin()));

    //calculating difference
    set<int>setDiff;
    set_difference(set1.begin(),set1.end(),set2.begin(),set2.end(),inserter(setDiff,setDiff.begin()));


    //displaying results
    cout<<"Intersection :";
    for(int num : setIntersection){
        cout<< num << " ";
    }
    cout<<endl;

    cout<<"Union :";
    for(int num : setUnion){
        cout<< num << " ";
    }
    cout<<endl;


    cout<<"Difference :";
    for(int num : setDiff){
        cout<< num << " ";
    }
    cout<<endl;


    return 0;

}




//The dominant factor in this code is the set operations (intersection, union, and difference), each with a complexity of 𝑂(𝑛1+𝑛2)O(n1+n2​).Thus, the overall time complexity of the code is:𝑂(𝑛1+𝑛2)
