#include <iostream>

class Log
{
public: 
    enum level: unsigned char
    {
        LevelError, LevelWarning, LevelInfo
    };
private:
    level m_Loglevel= LevelInfo;
public:
    void SetLevel(level level)
    {
        m_Loglevel=level;
    }
    void Warn(const char* message)
    {
        if(m_Loglevel>=LevelWarning)
            std::cout<< "[Warning:]"<<message<<std::endl;
    }
       void Error(const char* message)
    {
        if(m_Loglevel>=LevelError)
            std::cout<< "[Error:]"<<message<<std::endl;
    }
   void Info(const char* message)
    {
        if(m_Loglevel>=LevelInfo)
            std::cout<< "[Info:]"<<message<<std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(Log::LevelWarning);
    log.Info("traces");
    log.Error("Stop!");
    log.Warn("Caution");
    std::cin.get();
}