// This file contains null implementations of functions that are required to link the tests,
// but are not needed for the tests to run.

#include <stdarg.h>
#include <stdio.h>

// Dummy variables
int c_pointcontents;
int c_patch_traces;
int c_brush_traces;
int c_traces;
int cvar_modifiedFlags;
void (*qvmftolsse)(void);


// Dummy functions
void *FS_FOpenFileWrite_HomeState(const char *filename) { return 0; }
void CL_ConsolePrint(const char *msg) {}
int FS_Initialized(void) { return 1; }
int CL_CDKeyValidate(const char *key, const char *checksum) { return 1; }
void *FS_BaseDir_FOpenFileWrite_HomeState(const char *filename) { return 0; }
void CL_ShutdownCGame(void) {}
void CL_ShutdownUI(void) {}
void SV_ShutdownGameProgs(void) {}
void CIN_CloseAllVideos(void) {}
int UI_usesUniqueCDKey(void) { return 0; }
void CL_CDDialog(void) {}
void MSG_Init(void *buf, unsigned char *data, int size) {}
void CL_JoystickEvent(int axis, int value, int time) {}
void CL_MouseEvent(int dx, int dy, int time) {}
void CL_CharEvent(int key) {}
void CL_KeyEvent(int key, int down, int time) {}
void SV_Frame(int msec) {}
void CL_Frame(int msec) {}
void Key_KeynameCompletion(void (*callback)(const char *s)) {}

void Sys_Print(const char *msg) {}
void Sys_Quit(void) {}
void Sys_Init(void) {}
char *Sys_ConsoleInput(void) { return 0; }
void Sys_SetEnv(char *name, char *value) {}
int Sys_Milliseconds(void) { return 0; }
void Sys_RandomBytes(unsigned char *string, int len) {}
int Sys_GetProcessorFeatures(void) { return 0; }
void Sys_InitPIDFile(const char *game) {}

void Cvar_Init(void) {}
void Cvar_Set(const char *name, const char *value) {}
void Cvar_Set2(const char *name, const char *value, int force) {}
void Cvar_SetValue(const char *name, float value) {}
void Cvar_Restart(int clear) {}
void Cvar_SetDescription(void *var, const char *description) {}
void Cvar_CheckRange(void *var, float min, float max, int
qboolean) {}
void Cvar_CommandCompletion(void (*callback)(const char *s)) {}
void Cvar_WriteVariables(void *file) {}
const char *Cvar_VariableString(const char *name) { return ""; }
void *Cvar_Get(const char *name, const char *value, int flags) { return 0; }
int Cvar_Flags(const char *name) { return 0; }

void Cmd_Init(void) {}
void Cmd_AddCommand(const char *name, void (*callback)(void)) {}
void Cmd_TokenizeString(const char *text) {}
void Cmd_TokenizeStringIgnoreQuotes(const char *text) {}
int Cmd_Argc(void) { return 0; }
const char *Cmd_Argv(int arg) { return ""; }
const char *Cmd_Args(void) { return ""; }
const char *Cmd_ArgsFrom(int arg) { return ""; }
void Cmd_SetCommandCompletionFunc(const char *name, void (*callback)(void)) {}
void Cmd_CompleteCfgName(void) {}
void Cmd_CommandCompletion(void (*callback)(const char *s)) {}
void Cmd_CompleteArgument(const char *baseCmd, const char *cmd, int completionArgument) {}

void Cbuf_Init(void) {}
void Cbuf_AddText(const char *text) {}
void Cbuf_Execute(void) {}
void Cbuf_ExecuteText(int exec, const char *text) {}

int FS_LoadStack(void) { return 0; }
void FS_InitFilesystem(void) {}
void FS_Restart(int checksum) {}
void FS_Shutdown(int stillRunning) {}
void *FS_FOpenFileWrite_HomeData(const char *filename) { return 0; }
void FS_ForceFlush(void *file) {}
void FS_Write(const void *buffer, int len, void *file) {}
int FS_Read(void *buffer, int len, void *file) { return 0; }
void FS_FCloseFile(void *file) {}
void FS_BaseDir_FOpenFileRead(const char *filename, void **file) {}
void FS_FOpenFileRead(const char *filename, void **file, int
qboolean) {}
void FS_Printf(void *file, const char *fmt, ...) {}
void *FS_FOpenFileWrite_HomeConfig(const char *filename) { return 0; }
void *FS_FCreateOpenPipeFile(const char *filename) { return 0; }
void FS_Remove_HomeData(const char *filename) {}
void FS_FilenameCompletion(const char *dir, const char *ext, const char *filter, int stripExt, void (*callback)(const char *s), int allowNonPureFilesOnDisk) {}
const char *FS_GetCurrentGameDir(void) { return ""; }
void FS_PureServerSetLoadedPaks(const char *paks, const char *pakNames) {}

void VM_Init(void) {}
void VM_Clear(void) {}
void VM_Forced_Unload_Start(void) {}
void VM_Forced_Unload_Done(void) {}

void Netchan_Init(int port) {}
void NET_Sleep(int msec) {}
int NET_GetLoopPacket(int socket, void *net_from, void *buf) { return 0; }
void NET_FlushPacketQueue(void) {}
void NET_Restart_f(void) {}

void CL_InitKeyCommands(void) {}
void MSG_ReportChangeVectors_f(void) {}
void SV_Shutdown(const char *reason) {}
void CL_Init(void) {}
void CL_Disconnect(int qboolean) {}
void CL_FlushMemory(void) {}
void CL_Shutdown(const char *reason, int
qboolean, int
qboolean2) {}
void SV_Init(void) {}
int SV_FrameMsec(void) { return 0; }
int SV_SendQueuedPackets(void) { return 0; }
void SV_PacketEvent(int from, void *buf) {}
void CL_PacketEvent(int from, void *buf) {}
void CL_StartHunkUsers(int
qboolean) {}
void IN_Frame(void) {}
void Key_WriteBindings(void *file) {}
