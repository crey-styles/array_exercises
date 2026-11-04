/*Create a data type using c*/

#include <stdio.h>
#include <string.h>
#include <cs50.h>

typedef struct 
{
    string name;
    string number;
}
phonebook;



int main(void)
{
typedef char *string;   

    phonebook contact_lists[5];
    contact_lists[0].name = "John Doe";
    contact_lists[0].number = "+1 456 546 4523";

    contact_lists[1].name = "Melinda Marthias";
    contact_lists[1].number = "+1 456 323 8239";

    contact_lists[2].name = "Yolanda Rodriguez";
    contact_lists[2].number = "+1 533 578 2039";

    contact_lists[3].name = "Maddy Davidson";
    contact_lists[3].number = "+1 312 767 2821";

    contact_lists[4].name = "Osprey Muddyspoon";
    contact_lists[4].number = "+234 713 321 4532";

    string search_lists = get_string("Search: ");
    printf("Contact: ");

    for (int i = 0 ; i < 5 ; i++)
    {
        if (strcmp(contact_lists[i].name, search_lists) == 0)
        {
            printf("%s\n", contact_lists[i].number);
        }

        else if (strcmp(contact_lists[1].name, search_lists) == 1)
        {
            printf("Not a registered contact\n");
            break;
        }
    }    

    printf("\n");
    return 0;
    
}

