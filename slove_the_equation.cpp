/*
Create a function that takes an equation (e.g. "1+1"), and returns the answer.

Examples
equation("1+1") ➞ 2
equation("7*4-2") ➞ 26
equation("1+1+1+1+1") ➞ 5
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>

using namespace std;

const int LEN = 80;
const int MAX = 40;

class stack{
private:
	char st[MAX];
	int top;

public:
	stack(){
		top = 0;
	}

	// function to put a character in stack
	void push(char var){
		st[++top] = var;
	}

	//function to return a character off stack
	char pop(){
		return st[top--];
	}

	//function to get the top of the stack
	int gettop(){
		return top;
	}
};

class express{
private:
	stack s;
	char *pstr;
	int len;

public:
	express(char* ptr){
		pstr = ptr;
		len = strlen(pstr);
	}

	void parse();
	int solve();
};


void express::parse(){
	char ch;
	char lastval;
	char lastop;

	for(int j = 0; j < len; j++){
		ch = pstr[j];

		if(ch >= '0' && ch <= '9')
			s.push(ch - '0');

		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/'){
			if(s.gettop() == 1)
				s.push(ch);

			else{
				lastval = s.pop();
				lastop = s.pop();

				if((ch == '*' || ch == '/') && (lastop == '+' || lastop == '-')){
					s.push(lastop);
					s.push(lastval);
				}

				else{
					switch(lastop){
						case '+':
							s.push(s.pop() + lastval);
							break;
						case '-':
							s.push(s.pop() - lastval);
							break;
							case '*':
							s.push(s.pop() * lastval);
							break;
						case '/':
							s.push(s.pop() / lastval);
							break;

						default:
							cout << "\nUnknown oper"; 
                        	exit(1); 
					}
				}

				s.push(ch);
			}
		}
		else{
			cout << "\nUnknown";
			exit(1);
		}
	}
}


int express::solve(){
	char lastval;
	while(s.gettop() > 1){
		lastval = s.pop();
		switch(s.pop()){
			case '+':
				s.push(s.pop() + lastval);
				break;
			case '-':
				s.push(s.pop() - lastval);
				break;
			case '*':
				s.push(s.pop() * lastval);
				break;
			case '/':
				s.push(s.pop() / lastval);
				break;

			default:
				cout << "\nUnknown oper"; 
                exit(1); 
		}
	}

	return int(s.pop());
}

int main(){
	char string[LEN] = "1+1+1+1+1";
	express* eptr = new express(string); 
  
    // Parse it 
    eptr->parse(); 
  
    // Solve the expression 
    cout << eptr->solve(); 
  
    return 0; 
}