#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();
    int main(int argc, char** argv)
    {
        Hazel::Log::Init();
        HZ_CORE_WARN("Warning: Core Log Initialized!\n");
        
        int a = 5;

        HZ_CLIENT_INFO("Hello! Var={0}", a);

        printf("Hazel Engine\n");
        auto app = Hazel::CreateApplication();
        app->Run();

        delete app;
    }
#endif
