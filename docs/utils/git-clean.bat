@echo off & cls & @echo. & @echo.

set "PATH_GIT1=c:\Program Files\Git\bin"
set "PATH_GIT2=C:\Program Files\SmartGit\git\bin"
set "PATH=%PATH_GIT1%;%PATH_GIT2%;%PATH%"

rem ============================================================================
rem ============================================================================

@echo [CLEAN] ... v0.0.1

@echo [1] show unreachable
  git fsck --unreachable

@echo [2] clean
  git prune --progress
  git gc --aggressive --prune=now

@echo [3] show unreachable
  git fsck --unreachable

rem ============================================================================
rem ============================================================================



