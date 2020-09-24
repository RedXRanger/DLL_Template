//This is completely based off samprograms dllpost linked below
//Its a simple DLL template that can be used for process injection, or whatever you want to happen within the Myfunction()
//Uses createThread winAPI function to do its business
//The thread attach case basically means execute once this dll is run. (so it'll run MyFunction when you run it with rundll32.exe)
//https://samprograms.wordpress.com/2015/02/27/correctly-using-createthread/

DWORD WINAPI MyFunction(LPVOID lpvParam)
{
    // Code
}
 
BOOL APIENTRY DllMain(
                                 HMODULE hModule,
                                 DWORD dwReason,
                                 LPVOID lpvReserved)
{
    switch (dwReason)
    {
    case DLL_PROCESS_ATTACH:
         CreateThread(0, 0, MyFunction, 0, 0, 0);
    //DLL_PROCESS_ATTACH — Indicates that the DLL is being loaded into -
    //the virtual address space of the current process as a result of a call to LoadLibrary. 
    //DLL_PROCESS_ATTACH is only called for the first process that attaches to it.
    case DLL_PROCESS_DETACH:
        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    }
 return TRUE;
}
