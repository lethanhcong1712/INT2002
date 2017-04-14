# include <iostream>

using namespace std;

void reserve (const char a[] );
void delete_char (const char a[] );
void pad_right(const char a[], int n);
void pad_left(const char a[], int n);
void truncate(const char a[], int n);
void trim_left(const char a[] );
void trim_right(const char a[]);

int main(){
	char a[100];
	cin.getline(a,100);
	//reserve(a);
	//cout << a << endl;
	//delete_char(a);
	//cout << a << endl;
	//pad_right(a,10);
	//cout << a << endl;
	//pad_left(a,10);
	//cout << a << endl;
	//truncate(a,5);
	//cout << a << endl;
	//is_palindrome(a);
	//cout << is_palindrome(a) << endl;
	//trim_left(a);
	//cout << a << endl;
	trim_right(a);
	cout << a << endl;
	return 0;
}

void reserve (const char a[]){
	char *ptr = a;
	for (; *ptr != '\0'; ptr++){

	}
	for (; ptr >= a; --ptr){
		cout << *ptr;
	}
	cout << endl;
}

void delete_char (const char a[]){
	char *ptr = a;
	for (; *ptr != '\0'; ptr++){
		*ptr = '\0';
	}
	cout << endl;
}

void pad_right(const char a[], int n){
	int length = 0;
	char *ptr = a;
	for (; *ptr != '\0'; ptr++){
		length++;
	}
	if (length < n){
		char *pointer = a + length;
		for (; pointer < a + n; pointer++){
			*pointer = ' ';
		}
		*(a + n) = '\0';
	}
}

void pad_left(const char a[], int n){
	int length = 0;
	char *ptr = a;
	for (; *ptr != '\0'; ptr++){
		length++;
	}
	if (length < n) {
		*(a + n) = '\0';
		ptr = a + n - 1;
		for (; ptr >= a; ptr--){
			*ptr = *(ptr - (n - length));
		}
		ptr = a;
		for (; ptr < a + (n - length); ptr++){
			*ptr = ' ';
		}
	}
}

void truncate(const char a[], int n){
	int length = 0;
	char *ptr = a;
	for (; *ptr != '\0'; ptr++){
		length++;
	}
	if ( length > n){
		*(a + n) = '\0';
	}
}

void trim_left(const char a[] ){
	int count = 0, n = 0;
    char *ptr = a;
    char *p = a;
    for (; *p != '\0'; p++){
    	n++;
    }
    for (; *ptr == ' '; ptr++){
    	count++;
    }
    ptr = a;
    for (; ptr < a + n - count; ptr++){
    	*ptr = *(ptr + count);
    }
    *(a + n - count) = '\0';
}

void trim_right(const char a[]){
	int count = 0, n = 0;
    char *p = a;
    for (; *p != '\0'; p++){
    	n++;
    }
    char *ptr = a + n - 1;
    for (; *ptr == ' '; ptr--){
    }
    ptr++;
    for (; ptr < a + n; ptr++){
    	*ptr = '\0';
    }

}