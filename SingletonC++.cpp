//Код написал: Aaron Sarkissian
#include <iostream>
using namespace std;

class Logger {
private:
	static Logger* instance;
	//Создаём приватный конструктор, чтобы его нельзя было вызвать из вне класса
	Logger() {};
public:
	//Статический метод доступа
	static Logger* getInstance() {
		if (instance == NULL) {
			instance = new Logger();
		}
		return instance;
	}
	void log(string str) {
		cout << "Log: " << str << endl;
	}
};

//Экземпляр, создаваемый по требованию
Logger* Logger::instance = NULL;

int main() {

	Logger* L = Logger::getInstance();

	L->log("Login");
	L->log("Like");
	L->log("Comment");
	L->log("Logout");

	return 0;
}