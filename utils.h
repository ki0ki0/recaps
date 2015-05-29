#pragma once

void ShowError(const WCHAR* message);
void PrintDebugString(const char* format, ...);
BOOL DoesCmdLineSwitchExists(const WCHAR* command);
