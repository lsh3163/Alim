#include<stdio.h>
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	stack<int> q;
	int n;
	scanf("%d", &n);
	string s;
	while (n != 0){
		n--;
		cin >> s;
		if (s == "push"){
			int insert;
			scanf("%d", &insert);
			q.push(insert);
		}
		else if (s == "pop"){
			if (q.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n",q.top());
				q.pop();
			}
		}
		else if (s == "size"){
			printf("%d\n", q.size());
		}
		else if (s == "empty"){
			if (q.empty()){
				printf("1\n");
			}
			else printf("0\n");
		}
		else if (s == "top"){
			if (q.empty()) { 
				printf("-1\n"); 
			}
			else printf("%d\n", q.top());
		}
	}
}
