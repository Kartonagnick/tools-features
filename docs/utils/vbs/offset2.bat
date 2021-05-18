@echo off & cls & @echo. & @echo.

@echo [BEGIN]

set command=cscript.exe /nologo ^
    "%~dp0offset.vbs"           ^
    "0"    ^
    "0"    ^
    "10"

for /f "usebackq tokens=*" %%a in (`%command% 2^>nul ^|^| @echo [fuck]`) do (
    @echo [vbs] %%~a
)

@echo [DONE]
