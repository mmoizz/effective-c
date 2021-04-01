// Chapter 5

int main()
{
    int a;
    a = 6;  // a simple expression
    ;       // a null statement (does nothing)
    ++a;

    // compound statement aka block
    {
        int b;
        b = 5;
        ++b;
    }

    // selection statements
    if (a > 1)
    {
        // do something
    }

    else if (a > 0)
    {

    }

    else
    {
        // do something else
    }
    
    int marks = 99;
    switch (marks/10)
    {
        case 10:
        case 9:
        puts("A");
        break;
        case 8:
        puts("B");
        break;
        default:
        break;
    }

    // iteration statements
    int count = 0;
    while (count < 20)
    {
        // do something
        ++count;
    }

    int count2 = 0;
    do
    {
        // do something
        ++count2;
    } while (count2 < 20);

    for (int i = 0; i < 5; ++i)
    {
        // do something
    }

    goto location;

location:
    int y = 5;

    while (1)
    {
        puts("Press any key, Q to quit.");
        char c = toupper(getchar());
        if (c == 'Q')
        {
            break;
        }
        
    }
        
    return 0;
}
