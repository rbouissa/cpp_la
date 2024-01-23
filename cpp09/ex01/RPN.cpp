#include"RPN.hpp"

RPN::RPN()
{

}

RPN::~RPN()
{

}

RPN::RPN(const RPN &o)
{
    *this = o;
}

RPN &RPN::operator=(const RPN &o)
{
    if (this != &o)
    {
        myStack = o.myStack;
    }
    return *this;
}

int RPN::add(int a,int b)
{
    return a+b;
}

int RPN::div(int a,int b)
{  
    return a/b;
}

int RPN::mult(int a,int b)
{
    return a*b;
}

int RPN::moin(int a,int b)
{
    return a-b;
}
int check_line(std::string av)
{
    int i=0;
    while(av[i]&&(av[i]=='/'||av[i]=='*'||av[i]=='+'||av[i]=='-'||isdigit(av[i])||av[i]==' '))
        i++;
    if(av[i])
        return 0;
    else
        return 1;
}
int check_line_without_space(char av)
{
    if(av&&(av=='/'||av=='*'||av=='+'||av=='-'||isdigit(av)))
       return 1;
    else
        return 0;
}

int check_after_char(std::string av)
{
    int i;
    i=0;
    while(av[i])
    {       
        if(av[i]==' ')
            break ;
        if(check_line_without_space(av[i]))
            i++;
        if(av[i]==' ')
            i++;
        else
            break;
        if(!av[i+1]&&check_line_without_space(av[i]))
            i++;
    }
    if(av[i])
        return 0;
    else    
        return 1;
}

void RPN::process_expression(std::string str)
{
    int i=0;
    if(!check_line(str))
        throw(InvalidNumber());
    if(!check_after_char(str))
   
          throw(InvalidNumber()); 
    else
    {
        while(str[i])
        {
        if(str[i] == ' ')
            i++;
        if(str[i]>='0'&&str[i]<='9')
            myStack.push(str[i]-48);
        else if(str[i]=='/'||str[i]=='*'||str[i]=='+'||str[i]=='-')
        {
            if(myStack.size()<2)
                 throw(InvalidNumber());
            else
            {   
                int a = myStack.top();
                myStack.pop();
                int b = myStack.top();
                myStack.pop();
                int result;
                if(str[i]=='*')
                    result=mult(a,b);
                else if(str[i]=='/')
                    result=div(a,b);
                else if(str[i]=='-')
                    result=moin(a,b);
                else if(str[i]=='+')
                   result= add(a,b);
                myStack.push(result); 
            }
        }
        else  
            throw(InvalidNumber());
        if(str[i])
        i++;
        }

    if(myStack.size()!=1)
                throw(InvalidNumber());
     else
        std::cout<<myStack.top()<<std::endl;
    }
   
}

const char *	RPN::InvalidNumber::what() const throw()
{
    return "Error: Invalid Number";
}