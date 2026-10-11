@echo off
setlocal
cd /d "%~dp0"
echo ==============================================
echo   Grocery Store Management - Build and Run
echo ==============================================
echo.
where g++ >nul 2>nul
if errorlevel 1 (
    echo ERROR: g++ was not found.
    echo Install MinGW-w64 / GCC and make sure g++ is added to PATH.
    echo Then reopen this window and double-click run.bat again.
    echo.
    pause
    exit /b 1
)
echo Compiling project...
g++ -std=c++17 main.cpp Product.cpp Person.cpp Customer.cpp Supplier.cpp Sale.cpp FileManager.cpp GroceryStore.cpp -o GroceryStoreManagement.exe
if errorlevel 1 (
    echo.
    echo Compilation failed. Read the errors above, fix them, and try again.
    echo.
    pause
    exit /b 1
)
echo.
echo Build successful. Starting application...
echo.
GroceryStoreManagement.exe
echo.
echo Application closed.
pause
endlocal
