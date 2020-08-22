//This is completely based off samprograms dllpost linked below
//https://samprograms.wordpress.com/2015/02/27/correctly-using-createthread/

void MyFunction()
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
    CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MyFunction, 0, 0, 0);
    case DLL_PROCESS_DETACH:
    break;
    case DLL_THREAD_ATTACH:
    break;
    case DLL_THREAD_DETACH:
    break;
    }
 return TRUE;
}
