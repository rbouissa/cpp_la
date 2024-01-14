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

void RPN::process_expression(std::string st)
{
    int i;;
    i=0;
    // while(st[i]&&((st[i]>=0&&st[i]<=9)||(st[i]=='*'||st[i]=='/'||st[i]=='+'||st[i]=='-'||st[i]==' ')))
    //        i++;
        //std::cout<<"st[i]-----"<<st[i]<<std::endl;
    // if(st[i])
    // {
    //     std::cout<<"Sdsdsd"<<std::endl;
    //         throw (InvalidNumber());
    // }
    // i=0;
    std::string tmp;
    std::string str;
    while(st.size()>0)
    {
        size_t pip = st.find(" ");
        str = st.substr(0,pip);
        st = st.substr(pip);
        if(atoi(str.c_str()))
            //std::cout<<"dsdsdsdsdsds"<<std::endl;
            myStack.push(atoi(str.c_str()));
        else if(str=="/"||str=="*"||str=="+"||str=="-"||str=="0")
        {
            if(myStack.size()<3)
                throw(InvalidNumber());
            else
            {
                int a= myStack.top();
                myStack.pop();
                int b=myStack.top();
                myStack.pop();
                int result;
                if(str=="*")
                    result=mult(a,b);
                else if(str=="/")
                    result=div(a,b);
                else if(str=="-")
                    result=moin(a,b);
                else if(str=="+")
                   result= add(a,b);
                myStack.push(result);
            }
        }
        else{
            throw(InvalidNumber());
        }
        if(myStack.size()!=1)
                throw(InvalidNumber());
    }
}

const char *	RPN::InvalidNumber::what() const throw()
{
    return "Error: Invalid Number";
}