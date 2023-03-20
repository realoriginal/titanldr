/**
 *
 * Reflective Loader
 *
 * GuidePoint Security LLC
 *
 * Threat and Attack Simulation
 *
**/

#pragma once

/*!
 *
 * Purpose:
 *
 * Maps a copy of \\KnownDlls\\ntdll and calls
 * the underlying NT call to avoid detection
 * based on usermode hooks.
 *
!*/
D_SEC( D ) LPVOID WINAPI VirtualAllocEx_Hook( _In_ HANDLE hProcess, LPVOID Address, SIZE_T Length, DWORD Type, DWORD Protect );
