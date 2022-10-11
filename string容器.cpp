//string构造函数原型
//string();
//string(const char*);
//string(const string& str);
//string(int n, char c);

//赋值的函数原型：
//
//* `string& operator=(const char* s); `             //char*类型字符串 赋值给当前的字符串
//* `string& operator=(const string& s); `         //把字符串s赋给当前的字符串
//* `string& operator=(char c); `                          //字符赋值给当前的字符串
//* `string& assign(const char* s); `                  //把字符串s赋给当前的字符串
//* `string& assign(const char* s, int n); `     //把字符串s的前n个字符赋给当前的字符串
//* `string& assign(const string& s); `              //把字符串s赋给当前字符串
//* `string& assign(int n, char c); `                  //用n个字符c赋给当前字符串


//string字符串拼接
//* *函数原型： * *
//
//string& operator+=(const char* str); `                   //重载+=操作符
//string& operator+=(const char c); `                         //重载+=操作符
//string& operator+=(const string& str); `                //重载+=操作符
//string& append(const char* s); `                               //把字符串s连接到当前字符串结尾
//string& append(const char* s, int n); `                 //把字符串s的前n个字符连接到当前字符串结尾
//string& append(const string& s); `                           //同operator+=(const string& str)
//string& append(const string& s, int pos, int n); `/ / 字符串s中从pos开始的n个字符连接到字符串结尾

//
//字符串查找和替换
//* int find(const string& str, int pos = 0) const; `              //查找str第一次出现位置,从pos开始查找
//* `int find(const char* s, int pos = 0) const; `                     //查找s第一次出现位置,从pos开始查找
//* `int find(const char* s, int pos, int n) const; `               //从pos位置查找s的前n个字符第一次位置
//* `int find(const char c, int pos = 0) const; `                       //查找字符c第一次出现位置
//* `int rfind(const string& str, int pos = npos) const; `      //查找str最后一次位置,从pos开始查找
//* `int rfind(const char* s, int pos = npos) const; `              //查找s最后一次出现位置,从pos开始查找
//* `int rfind(const char* s, int pos, int n) const; `              //从pos查找s的前n个字符最后一次位置
//* `int rfind(const char c, int pos = 0) const;  `                      //查找字符c最后一次出现位置
//* `string& replace(int pos, int n, const string& str); `       //替换从pos开始n个字符为字符串str
//* `string& replace(int pos, int n, const char* s); `                 //替换从pos开始的n个字符为字符串s

//rfind 从右往左查找 find=是从左往右查找
//
//字符串比较
//
//* `int compare(const string& s) const; `  //与字符串s比较
//* `int compare(const char* s) const; `      //与字符串s比较

//string中单个字符存取方式有两种
//char& operator[](int n); `     //通过[]方式取字符
//char& at(int n);   `                    //通过at方法获取字符
//插入删除字符串
//* `string& insert(int pos, const char* s);  `                //插入字符串
//* `string& insert(int pos, const string& str); `        //插入字符串
//* `string& insert(int pos, int n, char c); `                //在指定位置插入n个字符c
//* `string& erase(int pos, int n = npos); `                    //删除从Pos开始的n个字符 

//* 从字符串中获取想要的子串
//* `string substr(int pos = 0, int n = npos) const; `   //返回由pos开始的n个字符组成的字符串