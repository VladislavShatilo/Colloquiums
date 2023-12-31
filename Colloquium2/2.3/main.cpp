#include"MyList.h"
int main()
{
    my_list my_list;
    my_list.append(1);
    my_list.append(2);
    my_list.append(3);
    my_list.append(4);
    my_list.append(5);
    my_list.print_list();
    my_list.reverse();
    my_list.print_list();
}