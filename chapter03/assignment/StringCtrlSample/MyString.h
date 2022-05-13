#pragma once
class CMyString
{
public :
	CMyString();
	~CMyString();
private:
	// the pointer that points dynamically allocated memory to store string
	char* m_pszData;
	// the length of the stored string
	int m_nLength;
public:
	int SetString(const char* pszParam);
	const char* GetString() const;
	void Release();
};