///C++ simple sleep and authentication function.
#include <iostream>
#include <unistd.h>

int main()
{
    //use for authenticating.
    char access = 'y';
    int crash = 500000;

    //Output message.
    std::cout << "Bypassing server please wait. 5%" << std::endl;
    //Sleep function
    sleep(2);
    //clear each output.
    system("cls");

    std::cout << "Bypassing server please wait.. 10%" << std::endl;
    sleep(3);
    system("cls");

    std::cout << "Bypassing server please wait.. 20%" << std::endl;
    sleep(4);
    system("cls");

    std::cout << "Bypassing server please wait.. 40%" << std::endl;
    sleep(5);
    system("cls");

    std::cout << "Bypassing server please wait... 60%" << std::endl;
    sleep(6);
    system("cls");

    std::cout << "Bypassing server please wait.... 80%" << std::endl;
    sleep(7);
    system("cls");

    std::cout << "Bypassing server please wait..... 100%" << std::endl;
    sleep(8);
    system("cls");

    //Notifying of successful operation.
    std::cout << "Server bypass successfully!" << std::endl;

    do
    {
        //Login confirmation.
        std::cout << "Press y/Y to login ";
        //For prompting keyword
        std::cin >> access;
        system("cls");
        //function to check if prompt key is valid
        if (access != 'y' && access != 'Y')
        {
            std::cout << "Access denied!" << std::endl;
        }
        else
        {
            std::cout << "Access granted!" << std::endl;
        }

    } while (access != 'y' && access != 'Y');
    //Prompt will continue until y or Y is inputted.

    for (int i = 0; i < crash; i++)
    {
        std::cout << "injecting virus " << i << "%" << std::endl;
    }
    std::cout << "Fail to inject virus! program stop at '499999'" << std::endl;

    //system("pause < 0");
    return 0;
}
