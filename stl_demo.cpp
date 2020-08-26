#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <list>
#include <deque>
#include <queue>
using namespace std;

// Pairs
void explainPair(){
	pair<int,int> p = {1,2};
	cout<<p.first<<" "<<p.second<<endl; // prints first value and second value
	pair<int,pair<int,int>> p1 = {1,{2,3}}; // int pair with another pair of two int
	cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
	pair<int,int> arr[] = {{1,2},{3,4},{5,6}}; // array of pairs
	cout<<arr[0].second<<endl;
	for(int i=0;i<3;i++){
		cout<<arr[i].first<<" ";
	}
	cout<<endl;
}

// Vectors - dynamic allocation - variable size arrays
void explainVector(){
	vector<int> v = {1,2,3,4,5}; // making a dynamic sized array
	cout<<v.size()<<endl;
	vector<pair<int,pair<int,int>>> v1; // making an array of int-pair pairs
	v1.push_back({1,{1,2}});
	cout<<v1[0].second.first<<endl;
	vector<int> v2(5,100); // defining vector of size 5 with all elements as 100
	cout<<v2[0]<<" "<<v2.size()<<endl;
	vector<int> v3(5); // defining vector of size 5 with all elements as 0 / garbage value
	cout<<v3[0]<<endl;
	vector<int> v4(v); // v4 stores all values in v 
	cout<<v[0]<<endl;
	auto it = v.begin(); // pointer to beginning or array - auto automatically assigns data type based on value assigned
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	// v.end() points to an address after the last value 
	cout<<endl;
	auto it1 = v.rbegin(); // reverse begin - points to last value
	auto it2 = v.rend(); // reverse end - points to value before first value
	cout<<v.back()<<endl; // back() gives last element

	v.erase(v.begin()); // remove element at given iterator
	v.erase(v.begin()+1); // erases one element after begin
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	vector<int> v5 = {1,2,3,4,5};
	v5.erase(v5.begin(),v5.begin()+3); // erasing values within a range - upper bound not included
	for(auto it3 = v5.begin();it3!=v5.end();it3++){
		cout<<*it3<<" ";
	}
	cout<<endl;

	vector<int> v6;
	v6.insert(v6.begin(),1); // inserting 1 at begin
	v6.insert(v6.begin()+1,2,23); // inserting two 23's starting from begin()+1
	auto it4 = v6.begin();
	for(it4=v6.begin();it4!=v6.end();it4++){
		cout<<*it4<<" ";
	}
	cout<<endl;

	vector<int> v7 = {2,3,4,5,6};
	v6.insert(v6.begin(),v7.begin()+1,v7.end()); // inserting values from v7.begin()+1 to v7.end() at v6.begin()
	for(it4=v6.begin();it4!=v6.end();it4++){
		cout<<*it4<<" ";
	}
	cout<<endl;

	v7.pop_back(); // removes last element
	for(it4=v7.begin();it4!=v7.end();it4++){
		cout<<*it4<<" ";
	}
	cout<<endl;

	v7.clear(); // erases all values in vector

}

void explainList(){ // prefer vectors over list as vectors are much faster
	list<int> ls;
	ls.push_back(1);
	auto it = ls.begin();
	for(it=ls.begin();it!=ls.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	ls.push_front(5); // push at front. Equivalent to v.insert(v.begin(),5)
	for(it=ls.begin();it!=ls.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;

	// Every other method is same as in vectors.
}

void explainDeque(){
	deque<int> dq;
	dq.push_back(5); // push at end
	dq.push_front(1); // push at front
	dq.push_back(3);
	auto it = dq.begin();
	for(it=dq.begin();it!=dq.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	dq.pop_back(); // erase last element
	dq.pop_front(); // erase first element
	for(it=dq.begin();it!=dq.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;

	// Every other method is same as in vectors.
}

void explainStack(){ // LIFO
	stack<int> st;
	for(int i=0;i<5;i++){
		st.push(i+1); // pushing into stack
	}
	int n = st.size();
	for(int i=0;i<n;i++){
		cout<<st.top()<<endl; // printing top most element
		st.pop(); // popping one by one
	}
	// stacks use LIFO - Last In First Out
	// top = -1, push -> ++top, pop -> top--
}

void explainQueue(){ // FIFO
	queue<int> q;
	for(int i=0;i<5;i++){
		q.push(i+1); // pushing into queue [1,2,3,4,5]
	}
	q.pop(); // as it is FIFO - first element is popped. [2,3,4,5]
	cout<<q.back()<<" "<<q.front()<<endl; // print last and first element
	// Queues use LIFO - Last In First Out
	// front = rear = -1, push-> ++rear, pop-> ++front

}

int main(){
	// explainPair();
	// explainVector();
	// explainList();
	// explainDeque();
	// explainStack();
	// explainQueue();
}	