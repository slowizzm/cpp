//Example_011 - Begginer Level Log Class

#include <iostream>

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
private:
	int m_LogLevel = LogLevelInfo;
public:
	void SetLevel(int _level)
	{
		m_LogLevel = _level;
	}

	void Error(const char* _message)
	{
		if (m_LogLevel >= LogLevelError)
		{
			std::cout << "[ERROR]" << _message << std::endl;
		}
	}

	void Warn(const char* _message)
	{
		if (m_LogLevel >= LogLevelWarning)
		{
			std::cout << "[WARNING]" << _message << std::endl;
		}
	}

	void Info(const char* _message)
	{
		if (m_LogLevel >= LogLevelInfo)
		{
			std::cout << "[INFO]" << _message << std::endl;
		}
	}
};

int main()
{

	Log log;
	log.SetLevel(log.LogLevelWarning);
	log.Warn("YOOO!");
	log.Error("OHHH!");
	log.Info("DUNNO!");
	std::cin.get();

	return 0;
}