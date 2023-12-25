#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq1; // maxHeap
    pq1.push(4);
    pq1.push(7);
    pq1.push(2);
    pq1.push(10);
    cout<<"Maxheap:"<<endl;
    while(!pq1.empty())
    {
        cout<<pq1.top()<<endl;
        pq1.pop();
    }
    cout<<"Minheap:"<<endl;
    priority_queue<int,vector<int>,greater<int>> pq2; // maxHeap
    pq2.push(4);
    pq2.push(7);
    pq2.push(2);
    pq2.push(10);
    while(!pq2.empty())
    {
        cout<<pq2.top()<<endl;
        pq2.pop();
    }
}