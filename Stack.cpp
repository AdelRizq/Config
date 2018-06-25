//Stack by array
//Author : Adel Rizq
//Date : 6/24/2018


struct stack{
	int arr[100];
	int top = -1;
	void push(int val){
		if (top == 99) return;
		top++;
		arr[top] = val;
	}
	void pop(){
		if (isempty()) return; 
		top--;
	}
	int top_val(){
		if (isempty()) return 0;
		else return arr[top];
	}
	bool isempty(){
		if (top == -1) return true;
		else return false;
	}
	void clear()
	{
		while(top != -1)
			pop();
	}
};
