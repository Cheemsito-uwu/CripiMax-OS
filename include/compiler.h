#include <iostream>
#include <windows.h>

using namespace std;

void e_issame_to_MCxMC(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }

bool cmp_if(string condition, string ask, string print, string what) {
    if(what == "true") {
        return true;
    } else if(what == "false") {
        return false;
    } else if(what == "none") {
        //a
    } else if(what == "check" && true) {
        if(condition == ask) {
            cout<<print;
        }
    }
}

bool esto = false;

bool cmp_for(int times, string print, string what, int xp, int yp) {
    if(what == "true") {
    	esto = true;
        return esto;
    } else if(what == "false") {
        return esto;
    } else if(what == "none") {
        //a
    } else if(what == "print" && true) {
        for(int i = 0; i < times; i++) {
            e_issame_to_MCxMC(xp,yp+i);
            cout<<print<<endl;
        }
    }
}

bool cmp_ask(string result, string what) {
    if(what == "true") {
        return true;
    } else if(what == "none") {
        //a
    } else if(what == "false") {
        return false;
    } else if(what == "ask" && true) {
        getline(cin, result);
    }
}

bool cmp_var(string varName, string varValue, string what) {
	if(what == "true") {
		return true;
	} else if(what == "none") {
		// a
	} else if(what == "false") {
		return false;
	} else if(what == "print" && true) {
        cout<<varValue;
	}
}

bool cmp_print(string thing) {
	if(true) {
		cout<<thing;
	}
}

bool valor = false;
bool valor2 = false;
bool valor3 = false;
bool valor4 = false;

bool cmp_sum(int one, int two, string what) {
	int resultadito;

	resultadito = one + two;

	if(what == "none") {
		return valor;
	} else if(what == "true") {
		valor = true;
		return valor;
	} else if(what == "false") {
		return valor;
	} else if(what == "print" && true) {
		cout<<resultadito;
	}

	if(resultadito == 0) {
		cout<<"\b ";
	}
}

bool cmp_multi(int one, int two, string what) {
	int resultadito;

	resultadito = one * two;

	if(what == "none") {
		return valor2;
	} else if(what == "true") {
		valor2 = true;
		return valor2;
	} else if(what == "false") {
		return valor2;
	} else if(what == "print" && true) {
		cout<<resultadito;
	}
}

bool cmp_res(int one, int two, string what) {
	int resultadito;

	bool valor = false;

	resultadito = one - two;

	if(what == "none") {
		return valor3;
	} else if(what == "true") {
		valor3 = true;
		return valor3;
	} else if(what == "false") {
		return valor3;
	} else if(what == "print" && true) {
		cout<<resultadito;
	}

	if(resultadito == 0) {
		cout<<"\b ";
	}
}

bool cmp_div(int one, int two, string what) {
	int resultadito;

	resultadito = one / two;

	if(what == "none") {
		return valor4;
	} else if(what == "true") {
		valor4 = true;
		return valor4;
	} else if(what == "false") {
		return valor4;
	} else if(what == "print" && true) {
		cout<<resultadito;
	}
}
