#ifndef _STRING_H
#define _STRING_H
#include <string.h>
#include <assert.h>

class String {

private:
	char*string = nullptr;
	unsigned int allocated_memory = 0u;

public:
	String() {}
	String(const char* string){
		assert(string!=nullptr);
			if (string != nullptr) {
			allocated_memory = strlen(string) + 1;
			this->string = new char[allocated_memory];
			strcpy_s(this->string, allocated_memory, string);
		}
	}

	String(const String& otherString) {
		assert(string != nullptr);
		if (string != nullptr) {
			allocated_memory = strlen(string) + 1;
			this->string = new char[allocated_memory];
			strcpy_s(this->string, allocated_memory, string);
		}
	}

	String operator =(const char* string) {
		if (string != nullptr) {
			if (strlen(string) >= allocated_memory) {
				strcpy_s(this->string, allocated_memory, string);
			}
			allocated_memory = strlen(string) + 1;
			delete[] string;
			this->string = new char[allocated_memory];
			strcpy_s(this->string, allocated_memory, string);
		}
		return *this;
	}

	~String()
	{
		if (string != nullptr) {
			delete[] string;
			allocated_memory = 0u;
		}
	}

	void MakeString(unsigned int size, char*string) {
		for (int i = 0; i < size; i++) {
			string[i] = string[i];
		}
	}
};

#endif