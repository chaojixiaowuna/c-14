//string���캯��ԭ��
//string();
//string(const char*);
//string(const string& str);
//string(int n, char c);

//��ֵ�ĺ���ԭ�ͣ�
//
//* `string& operator=(const char* s); `             //char*�����ַ��� ��ֵ����ǰ���ַ���
//* `string& operator=(const string& s); `         //���ַ���s������ǰ���ַ���
//* `string& operator=(char c); `                          //�ַ���ֵ����ǰ���ַ���
//* `string& assign(const char* s); `                  //���ַ���s������ǰ���ַ���
//* `string& assign(const char* s, int n); `     //���ַ���s��ǰn���ַ�������ǰ���ַ���
//* `string& assign(const string& s); `              //���ַ���s������ǰ�ַ���
//* `string& assign(int n, char c); `                  //��n���ַ�c������ǰ�ַ���


//string�ַ���ƴ��
//* *����ԭ�ͣ� * *
//
//string& operator+=(const char* str); `                   //����+=������
//string& operator+=(const char c); `                         //����+=������
//string& operator+=(const string& str); `                //����+=������
//string& append(const char* s); `                               //���ַ���s���ӵ���ǰ�ַ�����β
//string& append(const char* s, int n); `                 //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//string& append(const string& s); `                           //ͬoperator+=(const string& str)
//string& append(const string& s, int pos, int n); `/ / �ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β

//
//�ַ������Һ��滻
//* int find(const string& str, int pos = 0) const; `              //����str��һ�γ���λ��,��pos��ʼ����
//* `int find(const char* s, int pos = 0) const; `                     //����s��һ�γ���λ��,��pos��ʼ����
//* `int find(const char* s, int pos, int n) const; `               //��posλ�ò���s��ǰn���ַ���һ��λ��
//* `int find(const char c, int pos = 0) const; `                       //�����ַ�c��һ�γ���λ��
//* `int rfind(const string& str, int pos = npos) const; `      //����str���һ��λ��,��pos��ʼ����
//* `int rfind(const char* s, int pos = npos) const; `              //����s���һ�γ���λ��,��pos��ʼ����
//* `int rfind(const char* s, int pos, int n) const; `              //��pos����s��ǰn���ַ����һ��λ��
//* `int rfind(const char c, int pos = 0) const;  `                      //�����ַ�c���һ�γ���λ��
//* `string& replace(int pos, int n, const string& str); `       //�滻��pos��ʼn���ַ�Ϊ�ַ���str
//* `string& replace(int pos, int n, const char* s); `                 //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s

//rfind ����������� find=�Ǵ������Ҳ���
//
//�ַ����Ƚ�
//
//* `int compare(const string& s) const; `  //���ַ���s�Ƚ�
//* `int compare(const char* s) const; `      //���ַ���s�Ƚ�

//string�е����ַ���ȡ��ʽ������
//char& operator[](int n); `     //ͨ��[]��ʽȡ�ַ�
//char& at(int n);   `                    //ͨ��at������ȡ�ַ�
//����ɾ���ַ���
//* `string& insert(int pos, const char* s);  `                //�����ַ���
//* `string& insert(int pos, const string& str); `        //�����ַ���
//* `string& insert(int pos, int n, char c); `                //��ָ��λ�ò���n���ַ�c
//* `string& erase(int pos, int n = npos); `                    //ɾ����Pos��ʼ��n���ַ� 

//* ���ַ����л�ȡ��Ҫ���Ӵ�
//* `string substr(int pos = 0, int n = npos) const; `   //������pos��ʼ��n���ַ���ɵ��ַ���