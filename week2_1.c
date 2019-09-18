#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100  // 스택의 최대 크기
typedef int element;		// 데이터의 자료형
element stack[MAX_STACK_SIZE]; // 1차원 배열
int top = -1;

// 공백 상태 검출 함수
int is_empty(){
	return (top==-1);
}
int is_full(){
	return (top==(MAX_STACK_SIZE - 1));
}
// 삽입 함수
void push(element item){
	if(is_full()){
		printf("스택 포화\n");
		return;
	}
	else stack[++top] = item;
}
// 삭제 함수
element pop(){
	if(is_empty()){
		printf("스택 공백 에러\n");
	}
	return stack[top--];
}
// return top
element peek(){
	if(is_empty()){
		printf("스택 공백 에러\n");
	}
	return stack[top];
}
int main(){
	push(1);
	push(2);
	push(3);
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());

}
