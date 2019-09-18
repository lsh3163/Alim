#include<stdio.h>
#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main(){
	queue<int> q;
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
				printf("%d\n",q.front());
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
		else if (s == "front"){
			if (q.empty()) { 
				printf("-1\n"); 
			}
			else printf("%d\n", q.front());
		}
		else if (s == "back"){
			if (q.empty()){
				printf("-1\n");
			}
			else printf("%d\n", q.back());
		}
	
	
	}
}
