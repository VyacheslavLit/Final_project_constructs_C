# Final_project_constructs_C
Итоговый проект по Блоку «Основные конструкции C++» 
SKILLFACTORY
Курс: разработчик на С++
Поток: CPLUS-1005


Итоговый проект по Блоку «Основные конструкции C++»

Исполнитель: Литвинович Вячеслав Александрович.


Содержание:

1.	Оглавление Список участников команды.
2.	 Описание выбранной идеи решения 
3.	Описание пользовательских типов и функций в проекте    

Для работы с программой обязательно наличие файлов Users.txt, Message.txt и MessagePC.txt в папке с программой!!!
 
1.	Список участников команды.

В виду отсутствия свободных сокурсников работа выполнена единолично Литвиновичем Вячеславом Александровичем. 
 

2.	Описание выбранной идеи решения.


Не смотря на простоту реализации, проект является самодостаточным рабочим продуктом.
В данном проекте реализована переписка: на ряду с общей перепиской, реализована личная переписка с выбранным пользователем, а также раздел администрирования.
При запуске программы пользователю дается выбор в каком разделе он хочет продолжить:

 

Раздел 1: Администрирование, дает возможность:
1.	Участвовать в общей переписке.
2.	Вести личную переписку с любым пользователем.
3.	Закрывать доступ любому пользователю к программе.
4.	Удалять сообщения, не соответствующие цензуре.

Раздел 2: Чат, дает возможность:
1.	Войти в чат под своими логином и паролем.
2.	Зарегистрировать нового пользователя.
3.	Просматривать общий чат.
4.	Добавлять сообщения в общий чат.

Раздел 3: Личная переписка, дает возможность:
1.	Войти под своими логином и паролем.
2.	Выбрать собеседника.
3.	Просматривать сообщения с выбранным собеседником.
4.	Добавлять сообщения в личную переписку с выбранным собеседником.

Раздел 4: Правила пользования чатом, описывает правила и ограничения.
 
3.	Описание пользовательских типов и функций в проекте


Вход в программу (функция int main()) находится в файле main.cpp, в функции main прописан бесконечный цикл, дающий возможность повторного выбора, после того как пользователь закончит работу с выбранной веткой дерева развития событий. Первоочередно пользователю дается выбор:
 
В зависимости от выбора запускается одно из четырех функций, объявленных в файле Menu.h и определенных в файле Menu.cpp.

void administration();

void chat();

void perCor();

void regulation();

Функции самодостаточны, ни каких параметров не принимают и значения не возвращают. 

Функция administration –предназначена для работы администратора.

void administration()

{

	Admin Admin;
	User user(string, const string&, const string&, const string&);
	Admin.loginMenu();
	if (Admin.getLogin()) Admin.adminMenu();
    
}

Сначала объявляется экземпляр класса Admin, с именем Admin. Далее объявляется класс User с именем user. Далее запускается метод loginMenu экземпляра класса Admin (выбор пользователя - будет рассмотрен далее). Если при выполнении метода loginMenu экземпляра класса Admin пароль введен корректно запускается метод adminMenu экземпляра класса Admin.

Функция chat – предназначена для реализации общего чата.

void chat()

{

	Chat Сhat;
	User user (const string&, const string&, const string&);
	Сhat.loginMenu();
	if (Сhat.getCurrentUser())Сhat.showChat();
    
}

Сначала объявляется экземпляр класса Сhat, с именем Сhat. Далее объявляется класс User с именем user. Далее запускается метод loginMenu экземпляра класса Сhat (выбор пользователя - будет рассмотрен далее). Если при выполнении метода loginMenu экземпляра класса Сhat пользователь был выбран корректно запускается метод showChat экземпляра класса Сhat (общий чат - будет рассмотрен далее).

Функция perCor – предназначена для реализации личной переписки между пользователями.

void perCor() 

{

	PerCor perCor;
	User user (const string&, const string&, const string&);
	perCor.loginMenuPC();
	if (perCor.getCurrentUser())perCor.userMenuPC();
	if (perCor.getParty() != "") perCor.showPC();
    
}

Сначала объявляется экземпляр класса PerCor, с именем perCor. Далее объявляется класс User с именем user. Далее запускается метод loginMenuPC экземпляра класса perCor (выбор пользователя - будет рассмотрен далее). Если при выполнении метода loginMenuPC экземпляра класса perCor пользователь был выбран корректно запускается метод userMenuPC экземпляра класса perCor (выбор собеседника - будет рассмотрен далее). Далее, если собеседник выбран, запускается метод showPC экземпляра класса perCor (личная переписка - будет рассмотрен далее).

Функция regulation предназначена для ознакомления пользователя с правилами пользования мессенджером. После ознакомления пользователь возвращается в главное меню.

void regulation()

{

    system("cls");
	cout << "\t\t--- Правила пользования программой ---\n1. Закрытые логины и имена при регистрации:\n\t(admin)\n\t(0)\n2. В сообщениях запрещено:\n";
	cout << "\tОскорблять\n\tПризывать к насилию\n3. Возможные наказания за нарушения:\n\tБан по логину\n\tУдаление сообщения\n\n\n";
	system("pause");
    
}

Файл Times.cpp содержит определение функции time, объявленной в заголовочном файле Times.h. Функция time служит для определения системного времени и возврата его значения в виде строки.

Файл User.h содержит определение класса User. 

class User

{

	string ban_;
	const string login_;
	string password_;
	const string name_; 
	int num_;

public:

	User() {}
	User(string ban, const string& login, const string& password, const string& name) :ban_(ban), login_(login), password_(password), name_(name){}
	const string getBan() const { return ban_; }
	const string& getLogin() const { return login_; }
	const string& getPassword() const { return password_; }
	const string& getName() const { return name_; }
	void setPassword(string& password) { password_ = password; }

	void setNum(int num) { num_ = num; }
    
};

Класс User предназначен для хранения и структурирования информации о пользователях.
Класс содержит переменные:
ban_ - индикатор наличия бана на пользователе.
login_ - логин пользователя.
password_ - пароль пользователя.
name_ - имя пользователя.
num_ - порядковый номер пользователя, необходим в некоторых методах других классов.
Также класс User содержит конструкторы, гетеры и сетеры необходимые для работы с классом.

Файл message.h содержит определение класса Message.


class Message
{
	string del_;
	const string time_;
	const string from_;
	const string text_;

public:
	Message() {	}
	Message(string del, const string& times, const string& from, const string& text) :del_(del), time_(times), from_(from), text_(text) {}
	string& getDelete() { return del_; }
	const string& getTime() const { return time_; }
	const string& getFrom() const { return from_; }
	const string& getText()const { return text_; }
	void setDelete(string& del) { del_ = del; }
};

Класс Message предназначен для хранения и структурирования информации о сообщения для общего чата.
Класс содержит переменные:
del_ - индикатор, удалено сообщение или нет;
time_ - время написания сообщения;
from_ - от кого поступило сообщение;
text_ - содержание сообщения.
Также класс Message содержит конструкторы, гетеры и сетеры необходимые для работы с классом.

Файл messagePC.h содержит определение класса MessagePC.

class MessagePC
{
	string del_;
	const string time_;
	const string from_;
	const string to_;
	const string text_;

public:
	MessagePC() {}
	MessagePC(string del, const string& times, const string from, const string to, const string text) : del_(del), time_(times), from_(from), to_(to), text_(text) {}
	string& getDelete() { return del_; }
	const string& getTime() const { return time_; }
	const string& getFrom() const { return from_; }
	const string& getTo() const { return to_; }
	const string& getText()const { return text_; }
	void setDelete(string& deletes) { del_ = deletes; }
};

Класс MessagePC предназначен для хранения и структурирования информации о сообщения для личной переписки.
Класс содержит переменные:
del_ - индикатор, удалено сообщение или нет;
time_ - время написания сообщения;
from_ - от кого поступило сообщение;
to_ - кому послано сообщение;
text_ - содержание сообщения.
Также класс MessagePC содержит конструкторы, гетеры и сетеры необходимые для работы с классом.

Файл Chat.h содержит определение класса Chat.

class Chat {
	string me_;
	vector<User> users_;
	vector<Message> message_;
	shared_ptr<User>currentUser_ = nullptr;

public:
	shared_ptr<User>getCurrentUser() const { return currentUser_; }
	void loginMenu();
	void showChat();

private:
	void getUsersFile();
	void login();
	void registration();
	void setUsersFile(string, string, string);
	void getMessage_File();
	void chat();
	void addMessage(string txt);
	void expCin();

	shared_ptr<User> getUserByLogin(const string& login)const;
	shared_ptr<User> getUserByName(const string& name)const;
};

Класс Chat - основной класс обеспечивающий общую переписку.
Класс содержит переменные:
me_ - переменная определяющая пользователя;             
users_ - контейнер пользователей;					
message_ - контейнер с перепиской;				
currentUser_ - указатель на пользователя (меня) из общего контейнера пользователей.
Основные методы:			
LoginMenu - вход и регистрацию пользователя;
showChat – переписка.
Второстепенные методы - метода LoginMenu:
getUsersFile  -  загрузка  пользователей в контейнер из файла;
login - вход пользователя;
registration - регистрация нового пользователя;
setUsersFile (дополнительный метод метода registration) -внесение   зарегистрированного  пользователя в файл;
Второстепенные методы - метода showChat:
getMessage_File - загрузка переписки из файла;
chat - вывод переписки;
addMessage - добавление  сообщения  в  чат  и  сохранение его в контейнер переписки.
Вспомогательные методы:
getUserByLogin - указатель, проверяющий логин на предмет повторов;
getUserByName - указатель, проверяющий имя на предмет повторов;
expCin - обработка ошибок при использовании оператора cin.
Определение методов прописано в файле Chat.cpp.

Файл PerCor.h содержит определение класса PerCor.
class PerCor {
	string me_;
	string party_;
	vector<User> users_;
	vector<string> perCorParty_;
	vector<MessagePC> messagePC_;
	shared_ptr<User>currentUser_ = nullptr;
	shared_ptr<User>_party = nullptr;

public:
	shared_ptr<User>getCurrentUser() const { return currentUser_; }
	void loginMenuPC();
	void userMenuPC();
	void showPC();
	void loginAdminPC();
	auto getParty() { return party_; }

private:
	void getUsersFile();
	void login();
	void registration();
	void setUsersFile(string, string, string);
	void getMessagePC_File();
	void perCorParty();
	void setParty(string party) { party_ = party; }
	void addParty();
	bool expParty(string name);
	void chat();
	void addMessage(string txt);
	void expCin();

	shared_ptr<User> getUserByLogin(const string& login) const;
	shared_ptr<User> getUserByName(const string& name)const;
};

Класс PerCor - основной класс обеспечивающий личную переписку.
Класс PerCor содержит переменные:
me_ - переменная определяющая пользователя;
party_ - переменная определяющая собеседника;
users_ - контейнер пользователей;	
perCorParty_ - контейнер собеседников;
messagePC_ - контейнер с личной перепиской;
currentUser_ - указатель на пользователя (меня) из общего контейнера пользователей;
_party – указатель на собеседника, для проверки наличия бана.
Основные методы:
loginMenuPC – обеспечивает вход и регистрацию пользователя;
userMenuPC – обеспечивает выбор собеседника;
showPC – обеспечивает переписку;
loginAdminPC – обеспечивает вход администратора, запускается из класса Admin.
Вспомогательные методы метода loginMenuPC:
getUsersFile – загрузка пользователей в контейнер из файла User.txt;
login - вход пользователя
registration - регистрация пользователя
setUsersFile (дополнительный метод метода registration) - внесение зарегистрированного пользователя в файл User.txt.
Вспомогательные методы метода userMenuPC:
getMessagePC_File - загрузка личной переписки из файла MessagePC.txt, в контейнер личной переписки;
perCorParty - заполнение контейнера пользователей с которыми открыта личная переписка, на основе контейнера личной переписки;
setParty - выбор текущего собеседника;
addParty - добавление и выбор нового собеседника;
expParty (дополнительный метод метода addParty) - проверка выбранного пользователя на ошибки;
Вспомогательные методы метода showPC:
chat - вывод личной переписки с выбранным собеседником;
addMessage - добавление сообщения в чат и сохранения его в контейнер переписки.
Общий вспомогательный метод:
expCin - обработка ошибок при использовании оператора cin.
Определение методов прописано в файле PerCor.cpp.

Файл Admin.h содержит определение класса Admin.

class Admin
{
	bool login_{ false };
	int numAdmin_;
	vector<User> users_;
	vector<Message> message_;
	shared_ptr<User>currentAdmin_ = nullptr;

public:
	void loginMenu();
	void adminMenu();

	bool getLogin() { return login_; }
private:
	void inPassword();
	void passChange();
	bool setUsersFile();
	void ban();
	void showChat();
	void chat();
	void getMessage_File();
	void delMess();
	void upDelMess();
	bool setMessage_File();
	void addMessage(string txt);
	void expCin();
	void getUsersFile();
	void setNumAdmin(int numAdmin) { numAdmin_ = numAdmin; }


	shared_ptr<User> getAdminByLogin(const string& login);// const;
	shared_ptr<User> getAdminByName(const string& name)const;
};

Класс Admin - основной класс обеспечивающий администрирование чата.
Класс Admin содержит переменные:
login_ - индикатор входа администратора;
numAdmin_ - номер администратора в контейнере пользователей;
users_ - контейнер пользователей;
message_ - контейнер с перепиской;
currentAdmin_ - указатель на администратора из общего контейнера пользователей.
Основные методы:
loginMenu – ввод пароля администратора и возможность его смены;
adminMenu – меню работы администратора;
Вспомоательные методы метода loginMenu:
inPassword – ввод и проверка пароля;
passChange – смена пароля;
setUsersFile – сохранение обновленного контейнера пользователей;
Вспомогательные методы метода adminMenu:
ban – наложение, снятие бана на пользователя;
showChat – работа с общим чатом;
Вспомогательные методы метода showChat:
chat – вывод переписки на экран;
getMessage_File – загрузка переписки из файла Message.txt;
delMess – пометка выбранного сообщения удаленным;
upDelMess – снятие пометки удалено, с выбранного сообщения;
setMessage_File – обновление файла сообщений Message.txt, в соответствии с контейнером сообщений;
addMessage – добавление нового сообщения.
Методы используемые всем классом:
expCin - обработка ошибок при использовании оператора cin;
getUsersFile – загрузка пользователей в контейнер из файла User.txt;
setNumAdmin – сохранение значения порядкового номера логина администратора в контейнере пользователей.

