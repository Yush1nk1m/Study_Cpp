#pragma once
class CMyString
{
public :
	CMyString();
	CMyString(const CMyString& rhs);
	explicit CMyString(const char* pszParam);
	~CMyString();
	CMyString& operator=(const CMyString& rhs)
	{
		this->SetString(rhs.m_pszData);
		*m_pszData = *rhs.m_pszData;

		return *this;
	}
	operator char*(void) const { return this->m_pszData; }
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