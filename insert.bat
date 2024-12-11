@echo off
set USER=root
set PASSWORD=root
set DATABASE=Car

for /f "tokens=1,2,3,4,5" %%a in (input.txt) do (
    mysql -u %USER% -p%PASSWORD% %DATABASE% -e "INSERT INTO cars (username, model, price, walked_kilometers, color) VALUES ('%%a', '%%b', %%c, %%d, '%%e');"
    echo Data inserted successfully for %%b %%c!
)
