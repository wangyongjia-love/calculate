#include <iostream>
#include <cstring>
#include <cmath>
#include <stack> 
#include <sstream>
#include <vector> 

using namespace std;

//第一个功能 ：进制转换 

void transform_of_binary(void)                                //通过输入转化进制实现函数                         
{
    int a,b;                                                   
	cout<<"请输入初始进制：" ;
	cin>>a;                                                   //a记录初始进制 
	cout<<"请输入要转换的进制：";
	cin>>b;                                                   //b记录转换后的进制 
	int ss;                                                   //ss为要转化的数字 
	cout<<"请输入要转换的数字：";
	if(a==8&&b==10)                                           //八进制转为十进制 
	{
		cin>>oct>>ss;                                         //输入八进制ss 
		cout<<"结果为："<<dec<<ss;                            //输出十进制ss 
	}
	else if(a==8&&b==16)                                      //八进制转为十六进制 
	{
		cin>>oct>>ss;                                         //输入八进制ss 
		cout<<"结果为："<<hex<<ss;                            //输出十六进制ss 
	}
	else if(a==16&&b==10)                                     //十六进制转为十进制 
	{
		cin>>hex>>ss;                                         //输入十六进制ss 
		cout<<"结果为："<<dec<<ss;                            //输出十进制ss 
	}
	else if(a==10&&b==16)                                     //十进制转为十六进制 
	{
		cin>>dec>>ss;                                         //输入十进制ss 
		cout<<"结果为："<<hex<<ss;                            //输出十六进制ss 
	}
	else if(a==10&&b==8)                                      //十进制转为八进制 
	{
		cin>>dec>>ss;                                         //输入十进制ss 
		cout<<"结果为："<<oct<<ss;                            //输出八进制ss 
	}
	else if(a==16&&b==8)                                      //十六进制转为八进制 
	{
		cin>>hex>>ss;                                         //输入十六进制ss 
		cout<<"结果为："<<oct<<ss;                            //输出八进制ss 
	}
	else if(a==2&&b==8)                                       //二进制转为八进制 
	{
		cin>>ss;	                                          //输入ss，此时认为是二进制 
	    int m,n=0,i=0;                                        //i指向循环次数 
	    while(ss>0)                                           //ss大于0则循环 
	    {
	    	m=ss%10;                                          //m记录当前ss最后一位数                               
	    	n+=m*pow(2,i);                                    //m乘以2的i次方，并加到n中 
	    	ss/=10;                                           //ss等于ss除以十 
	    	i++;                                              //i加1 
	    }                                                     //此时n为理论上十进制的值 
	    cout<<"结果为："<<oct<<n;                             //将十进制转为八进制 
	} 
	else if(a==2&&b==10)                                      //二进制转为十进制 
	{
		cin>>ss;	                                          //输入二进制ss 
	    int m,n=0,i=0;                                        //i指向循环次数 
	    while(ss>0)                                           //ss大于0则循环 
	    {
	    	m=ss%10;                                          //m记录当前ss最后一位数                               
	    	n+=m*pow(2,i);                                    //m乘以2的i次方，并加到n中 
	    	ss/=10;                                           //ss等于ss除以十 
	    	i++;                                              //i加1 
	    }                                                     
	    cout<<"结果为："<<n;                                  //n为理论十进制的值 
	} 
	else if(a==2&&b==16)                                      //二进制转为十六进制 
	{
		cin>>ss;	                                          //输入二进制ss 
	    int m,n=0,i=0;                                        //i指向循环次数 
	    while(ss>0)                                           //ss大于0则循环 
	    {
	    	m=ss%10;                                          //m记录当前ss最后一位数                               
	    	n+=m*pow(2,i);                                    //m乘以2的i次方，并加到n中 
	    	ss/=10;                                           //ss等于ss除以十 
	    	i++;                                              //i加1 
	    }                                                     //n为理论上十进制的值 
	    cout<<"结果为："<<hex<<n;                             //将十进制转为十六进制 
	} 
	else if(a==10&&b==2)                                      //十进制转为二进制                         
	{
		int k[1000],i=0;                                      //设置数组k，i指向次数 
		cin>>ss;                                              //输入十进制ss 
		while(ss>0)                                           //ss大于0则循环 
		{
			k[i]=ss%2;                                        //用k储存ss对2的余数 
			ss/=2;                                            //ss等于ss除以2 
			i++;                                              //i+1 
		}
		cout<<"结果为："; 
		for(;i>0;i--)                                         //从数组最后一位开始 
	    {
	    	cout<<k[i-1];                                     //输出储存的数字 
		}
	}
	else if(a==8&&b==2)                                       //八进制转为二进制                         
	{
		int k[1000],i=0;                                      //设置数组k，i指向次数 
		cin>>oct>>ss;                                         //输入八进制ss 
		while(ss>0)                                           //ss大于0则循环 
		{
			k[i]=ss%2;                                        //用k储存ss对2的余数 
			ss/=2;                                            //ss等于ss除以2 
			i++;                                              //i+1 
		}
		cout<<"结果为："; 
		for(;i>0;i--)                                         //从数组最后一位开始 
	    {
	    	cout<<k[i-1];                                     //输出储存的数字 
		}
	}
	else if(a==16&&b==2)                                      //十六进制转为二进制                         
	{
		int k[1000],i=0;                                      //设置数组k，i指向次数 
		cin>>hex>>ss;                                         //输入十六进制ss 
		while(ss>0)                                           //ss大于0则循环 
		{
			k[i]=ss%2;                                        //用k储存ss对2的余数 
			ss/=2;                                            //ss等于ss除以2 
			i++;                                              //i+1 
		}
		cout<<"结果为："; 
		for(;i>0;i--)                                         //从数组最后一位开始 
	    {
	    	cout<<k[i-1];                                     //输出储存的数字 
		}
	}
	else                                                      //若非上述的进制转化 
	{
		cout<<"格式错误；";                                    
	}
}

void binary_judge(void)                                       //自动判断进制并转化为十进制函数 
{
	string ss,op;                                             //ss记录输入数据，op记录数字 
	cin>>ss;                                                  
	if(ss[0]=='0'&&(ss[1]=='b'||ss[1]=='B'))                  //如果是二进制 
	{
		for(int i=2;ss[i]!='\0';i++)
		{
			op+=ss[i];                                      
		}
		istringstream iss(op);                                //读取数值并转化为int型存在num中                            
		int num;
		iss>>num;                            
		int m,n=0,i=0;                                        //i指向次数 
	    while(num>0)                                          //num大于0则循环 
	    {
	    	m=num%10;                                         //m记录当前num最后一位数                               
	    	n+=m*pow(2,i);                                    //m乘以2的i次方，并加到n中 
	    	num/=10;                                          //num等于num除以十 
	    	i++;                                              //i加1 
	    }                                                     
	    cout<<"十进制为："<<n;                                //n为十进制
	}
	else if(ss[0]=='0'&&(ss[1]=='x'||ss[1]=='X'))             //如果是十六进制 
	{
		for(int i=2;ss[i]!='\0';i++)
		{
			op+=ss[i];                                                
		}
		istringstream iss(op);                                //读取十六进制数值并转化为int型存在num中                               
		int num;
		iss>>hex>>num;                                         
	    cout<<"十进制为："<<dec<<num;                         //num为十进制
	}
	else if(ss[0]=='0')                                       //如果是八进制 
	{
		for(int i=1;ss[i]!='\0';i++)
		{
			op+=ss[i];                                                
		}
		istringstream iss(op);                                //读取八进制数值并转化为int型存在num中                               
		int num;
		iss>>oct>>num;                            
	    cout<<"十进制为："<<dec<<num;                         //num为十进制
	}
	else                                                      //否则默认为十进制
	{
		cout<<"十进制为：";
		for(int i=0;ss[i]!='\0';i++)
		{
			cout<<ss[i];
		} 
	}
	
} 
 
void binary_use(void)                                         //进制转换功能实现函数 
{
	cout<<"自动判断进制并转化为十进制请输入1；"<<endl;
	cout<<"选定初始进制与最终进制进行转换请输入2；"<<endl;
	int a;                                                    //a判断是哪一种形式 
	cin>>a;
	if(a==1)
	{
		binary_judge();                                       //自动判断型 
	} 
	else if(a==2)
	{
		transform_of_binary();                                //输入转换型 
	}
	else
	{
		cout<<"格式错误；";
	}
}

//第二个功能：表达式计算 
 
int priority(char operate)                                    //运算功能中优先级比较函数
{
	switch(operate)                                             
	{
		case '(':return 1;                                    //如果是左括号，应入栈 
        case ')':return 4;                                    //如果是右括号，找到上一个左括号，退栈 
		case '+':return 2;                                    //数字代表优先级大小 
        case '-':return 2;                        
        case '*':return 3;                                     
        case '/':return 3;                                    //高级别才可入栈 
   }
} 

string infix_suffix(string ss)                                //运算功能中中缀转后缀表达式函数 
{
	stack<char>operate;                                       //开辟操作符栈
	int flag;                                                 //用以判断是否是负数 
	string suffix="                                        "; //预留空间 
	char currentop;                                           //当前的操作
	int i=0,j=0;                                              //i为中缀当前指向，j为后缀指向
	while(ss[i]!='\0')                                        //按流程走一遍 
	{
		if((ss[i]>='0'&&ss[i]<='9')||ss[i]=='a'||ss[i]=='A'||ss[i]=='b'||ss[i]=='B'||ss[i]=='c'||ss[i]=='C'||ss[i]=='d'||ss[i]=='D'||ss[i]=='e'||ss[i]=='E'||ss[i]=='f'||ss[i]=='F')//如果ss[i]中储存的是数字
		{
			suffix[j++]='|';                                  //|用来分隔数字或符号 
			suffix[j++]=ss[i];                                //储存当前数字并指向下一个
			i+=1;
			while((ss[i]>='0'&&ss[i]<='9')||ss[i]=='a'||ss[i]=='A'||ss[i]=='b'||ss[i]=='B'||ss[i]=='c'||ss[i]=='C'||ss[i]=='d'||ss[i]=='D'||ss[i]=='e'||ss[i]=='E'||ss[i]=='f'||ss[i]=='F')//仍为数字
			{
				suffix[j++]=ss[i];                            //储存当前数字并指向下一个 
				i++;                                          //指向下一个 
			} 
			if(ss[i]=='.')                                    //如果是小数点 
            {
                suffix[j++]='.';                              //储存小数点并指向下一个 
                i+=1;                                         
                while((ss[i]>='0'&&ss[i]<='9')||ss[i]=='a'||ss[i]=='A'||ss[i]=='b'||ss[i]=='B'||ss[i]=='c'||ss[i]=='C'||ss[i]=='d'||ss[i]=='D'||ss[i]=='e'||ss[i]=='E'||ss[i]=='f'||ss[i]=='F')//小数部分数字 
                {
                    suffix[j++] =ss[i];                       //储存当前数字并指向下一个 
                    i++;
                }
            }
		}  
		else if(ss[i]=='(')                                    //如果是左括号
		{
			operate.push(ss[i]);                               //把左括号添加在栈顶 
			i++; 
		}  
		else if(ss[i]==')')                                    //如果是右括号      
		{
			if(operate.empty()!=0)                             //）前面必须有（ 
			{                  
			    cout<<"格式错误；"<<endl;                     
			}
			else
			{
				currentop=operate.top();                       //当前操作为栈顶元素
				while(currentop!='(')                          //如果不是（
				{
					suffix[j++]='|';                           //出栈分隔前面的数据 
					suffix[j++]=currentop;                     //储存栈顶操作符
					operate.pop();                             //移除栈顶操作符 
					if(operate.empty()!=0)                     //如果是空栈了，说明没有（ 
                    {
                        cout<<"格式错误；"<<endl;
                        break;                                 //结束循环 
                    }
                    currentop=operate.top();                   //继续储存操作符   
				} 
				operate.pop();                                 //删除栈中（
				i++; 
			} 
		}
		else if(ss[i]=='+'||ss[i]=='-'||ss[i]=='*'||ss[i]=='/')//如果是加减乘除
		{
			if(ss[i]=='-')                                     //-可能是减号也可能是负号
			{
				if(i==0)                                       //如果第一位出现- 
				{
					flag=1;                                    //说明是负号 
				}
				else if(ss[i-1]=='+'||ss[i-1]=='-'||ss[i-1]=='*'||ss[i-1]=='/')
				{
					flag=1;                                    //如果前面有加减乘除说明也是负号 
				}
				if(flag==1)                                    //如果是负号 
				{
					suffix[j++]='|';                           // 用来分隔数字 
					suffix[j++]='-';                           //负号也是数字的一部分
					i++;
					if((ss[i]>='0'&&ss[i]<='9')||ss[i]=='a'||ss[i]=='A'||ss[i]=='b'||ss[i]=='B'||ss[i]=='c'||ss[i]=='C'||ss[i]=='d'||ss[i]=='D'||ss[i]=='e'||ss[i]=='E'||ss[i]=='f'||ss[i]=='F')//如果ss[i]为数字 
					{
						suffix[j++]=ss[i];                     //储存数字并指向下一个 
						i++;
						while((ss[i]>='0'&&ss[i]<='9')||ss[i]=='a'||ss[i]=='A'||ss[i]=='b'||ss[i]=='B'||ss[i]=='c'||ss[i]=='C'||ss[i]=='d'||ss[i]=='D'||ss[i]=='e'||ss[i]=='E'||ss[i]=='f'||ss[i]=='F')//如果仍为数字则循环 
						{
							suffix[j++]=ss[i];                 //储存数字 
							i++;
						}
						if(ss[i]=='.')                         //如果是小数点
						{
							suffix[j++]=='.' ;                 //储存小数点 
							i++;
							while((ss[i]>='0'&&ss[i]<='9')||ss[i]=='a'||ss[i]=='A'||ss[i]=='b'||ss[i]=='B'||ss[i]=='c'||ss[i]=='C'||ss[i]=='d'||ss[i]=='D'||ss[i]=='e'||ss[i]=='E'||ss[i]=='f'||ss[i]=='F')//小数部分数字 
							{
								suffix[j++]=ss[i];             //储存当前数字 
								i++;                          
							}
						} 
					}
				continue;                                      //进行下一次循环
				} 
			} 
			if(operate.empty()!=0)                             //如果是空栈
			{
				operate.push(ss[i]);                           //放在栈顶 
				i++; 
			} 
			else
			{
				char top_item=operate.top();                   //获取栈顶元素 
				if(priority(top_item)<priority(ss[i]))         //栈顶优先级小于当前优先级
				{
					operate.push(ss[i]);                       //将当前符号放入栈顶 
					i++;
				} 
				else
				{
					while(priority(top_item)>=priority(ss[i])) //栈顶优先级高于当前优先级 
					{
						suffix[j++]='|';                       //符号分隔符 
                        suffix[j++]=top_item;                  //储存顶部项 
                        operate.pop();                         //删除顶部项    
                        if(operate.empty()==0)                 //如果不是空栈 
                        {
                            top_item= operate.top();           //重新获取新的顶部项               
                        }
                        else                                   //如果是空栈 
                        {
                        	break;                             //结束 
						}
					}
				operate.push(ss[i]);                           //放入栈顶 
				i++;	
				}                      
			} 
		} 
		else                                                   //如果不是上述符号 
		{
			cout<<"格式错误；"<<endl;
			i++;
		} 
	}
	while(operate.empty()==0)                                  //表达式读完后栈中还有操作符，应全放入字符串 
	{
        char next= operate.top();                              //next放栈顶操作符 
        suffix[j++]='|';                                       //符号分隔符          
        suffix[j++]=next;                                      //存放操作符并指向下一个 
        operate.pop();                                         //删除栈顶元素 
    }
    suffix[j]='!';                                             //!代表整个运行的结束
	return suffix; 
}

double calculate(string suffix)                                //十进制计算功能实现函数 
{
	stack<double>number;                                       //数字栈
	int i=0,j=0;                                               //i指向后缀，j记录位数    
	string now_cal;                                            //当前的计算 
	while(suffix[i]!='!')                                      //后缀不是结束符号则循环 
	{
		bool judge=0;                                          //用来判断是数字还是符号 
		if(suffix[i]=='|')                                     //如果是分隔符 
        {
            for(j=i+1;;j++)                                    //从分隔符开始循环 
            {
                if(suffix[j]=='|')                             //遇到下一个分隔符结束 
                    break;
                else if(suffix[j]=='!')                        //或者遇到结束符结束 
                    break;
            }
            for(int k=i+1; k<j; k++)                           //从分隔符开始，到分隔符或者结束符结束 
            {
                now_cal+=suffix[k];                            //储存之间的元素 
            }

            //判断是否为数值
            for(int k=0; k<now_cal.size(); k++)                //从这之间的元素开始到结束 
            {
                if(now_cal[k]>='0'&&now_cal[k]<='9')           //如果是数字
                {
                    istringstream iss(now_cal);                //使用sstream的函数获取数值 
                    double num;
                    iss>>num;                                  //将其转化为double型值储存在num中             
                    number.push(num);                          //将数字储存在栈顶 
                    judge = 1;                                 //是数字 
				    break;                                     //结束 
                }
            }
            if(judge!=1)                                       //如果不是数字 
			{
                double y=number.top();                         //y记录栈顶数字 
                number.pop();                                  //移除栈顶 
                double x=number.top();                         //x记录新的栈顶元素 
                number.pop();                                  //移除栈顶 
                if(now_cal=="+")                               //如果是加号 
				{
                    number.push(x+y);                          //将x+y的值存入栈顶 
                }
                else if(now_cal=="-")                          //如果是减号 
				{
                    number.push(x-y);                          //将x-y的值存入栈顶 
                }
                else if(now_cal=="*")                          //如果是乘号 
				{
                    number.push(x*y);                          //将x*y的值存入栈顶 
                }
                else if(now_cal=="/")                          //如果是除号 
				{
                    number.push(x/y);                          //将x/y的值存入栈顶 
                }
            }
            now_cal="";                                        //清空当前计算
        }
    i++;
    }
    if(number.size()!=1)                                       //如果栈中最终剩余的元素不是一个 
    {
    	cout<<"格式错误；"<<endl;
	}
    else
    {
	    return number.top();                                   //返回最终结果 
	}
}

int calculate_2(string suffix)                                 //二进制计算功能实现函数 
{
	stack<int>number;                                          //数字栈
	int i=0,j=0;                                               //i指向后缀，j记录位数    
	string now_cal;                                            //当前的计算 
	while(suffix[i]!='!')                                      //后缀不是结束符号则循环 
	{
		bool judge=0;                                          //用来判断是数字还是符号 
		if(suffix[i]=='|')                                     //如果是分隔符 
        {
            for(j=i+1;;j++)                                    //从分隔符开始循环 
            {
                if(suffix[j]=='|')                             //遇到下一个分隔符结束 
                    break;
                else if(suffix[j]=='!')                        //或者遇到结束符结束 
                    break;
            }
            for(int k=i+1; k<j; k++)                           //从分隔符开始，到分隔符或者结束符结束 
            {
                now_cal+=suffix[k];                            //储存之间的元素 
            }
            for(int k=0; k<now_cal.size(); k++)                //从这之间的元素开始到结束 
            {
                if(now_cal[k]>='0'&&now_cal[k]<='9')           //如果是数字
                {
                    istringstream iss(now_cal);                //使用sstream的函数获取数值 
                    int num;
                    iss>>num;                                  //将其转化为int型值储存在num中  
					int m1,n1=0,i1=0;                          //i1指向次数 
	                while(num>0)                               //num大于0则循环 
	                {
	               	    m1=num%10;                             //m1记录当前num最后一位数                               
	    	            n1+=m1*pow(2,i1);                      //m1乘以2的i1次方，并加到n1中 
	    	            num/=10;                               
	    	            i1++;                                  //i1加1 
	                }                                                                       
                    number.push(n1);                           //将数字储存在栈顶 
                    judge = 1;                                 //是数字 
				    break;                                     //结束 
                }
            }
            if(judge!=1)                                       //如果不是数字 
			{
                int y=number.top();                            //y记录栈顶数字 
                number.pop();                                  //移除栈顶 
                int x=number.top();                            //x记录新的栈顶元素 
                number.pop();                                  //移除栈顶 
                if(now_cal=="+")                               //如果是加号 
				{
                    number.push(x+y);                          //将x+y的值存入栈顶 
                }
                else if(now_cal=="-")                          //如果是减号 
				{
                    number.push(x-y);                          //将x-y的值存入栈顶 
                }
                else if(now_cal=="*")                          //如果是乘号 
				{
                    number.push(x*y);                          //将x*y的值存入栈顶 
                }
                else if(now_cal=="/")                          //如果是除号 
				{
                    number.push(x/y);                          //将x/y的值存入栈顶 
                }
            }
            now_cal="";                                        //清空当前计算
        }
    i++;
    }
    if(number.size()!=1)                                       //如果栈中最终剩余的元素不是一个 
    {
    	cout<<"格式错误；"<<endl;
	}
    else
    {
    	int opt=number.top();                                  //opt储存十进制的值 
	    	int k2[1000],i2=0;                                 //设置数组k2，整形变量i2=0                                              //输入十进制ss 
		while(opt>0)                                           //opt大于0则循环 
		{
			k2[i2]=opt%2;                                      //用k2储存opt对2的余数 
			opt/=2;                                            //opt等于opt除以2 
			i2++;                                              //i2+1 
		}
		for(;i2>0;i2--)                                        //从数组最后一位开始 
	    {
	    	cout<<k2[i2-1];                                    //输出储存的数字 
		}
	}
}

int calculate_16(string suffix)                                //十六进制计算功能实现函数 
{
	stack<int>number;                                          //数字栈
	int i=0,j=0;                                               //i指向后缀，j记录位数    
	string now_cal;                                            //当前的计算 
	while(suffix[i]!='!')                                      //后缀不是结束符号则循环 
	{
		bool judge=0;                                          //用来判断是数字还是符号 
		if(suffix[i]=='|')                                     //如果是分隔符 
        {
            for(j=i+1;;j++)                                    //从分隔符开始循环 
            {
                if(suffix[j]=='|')                             //遇到下一个分隔符结束 
                    break;
                else if(suffix[j]=='!')                        //或者遇到结束符结束 
                    break;
            }
            for(int k=i+1; k<j; k++)                           //从分隔符开始，到分隔符或者结束符结束 
            {
                now_cal+=suffix[k];                            //储存之间的元素 
            }
            for(int k=0; k<now_cal.size(); k++)                //从这之间的元素开始到结束 
            {
                if((now_cal[k]>='0'&&now_cal[k]<='9')||now_cal[k]=='a'||now_cal[k]=='A'||now_cal[k]=='b'||now_cal[k]=='B'||now_cal[k]=='c'||now_cal[k]=='C'||now_cal[k]=='d'||now_cal[k]=='D'||now_cal[k]=='e'||now_cal[k]=='E'||now_cal[k]=='f'||now_cal[k]=='F')           //如果是数字
                {
                    istringstream iss(now_cal);                //使用sstream的函数获取串值 
                    int num;
                    iss>>hex>>num;                             //将其转化为int型值储存在num中     
                    number.push(num);                          //将数字储存在栈顶 
                    judge = 1;                                 //是数字 
				    break;                                     //结束 
                }
            }
            if(judge!=1)                                       //如果不是数字 
			{
                int y=number.top();                            //y记录栈顶数字 
                number.pop();                                  //移除栈顶 
                int x=number.top();                            //x记录新的栈顶元素 
                number.pop();                                  //移除栈顶 
                if(now_cal=="+")                               //如果是加号 
				{
                    number.push(x+y);                          //将x+y的值存入栈顶 
                }
                else if(now_cal=="-")                          //如果是减号 
				{
                    number.push(x-y);                          //将x-y的值存入栈顶 
                }
                else if(now_cal=="*")                          //如果是乘号 
				{
                    number.push(x*y);                          //将x*y的值存入栈顶 
                }
                else if(now_cal=="/")                          //如果是除号 
				{
                    number.push(x/y);                          //将x/y的值存入栈顶 
                }
            }
            now_cal="";                                        //清空当前计算
        }
    i++;
    }
    if(number.size()!=1)                                       //如果栈中最终剩余的元素不是一个 
    {
    	cout<<"格式错误；"<<endl;
	}
    else
    {
    	cout<<hex<<number.top();                               //十六进制的值 
	}
}

void math_operation(void)                                      //数学运算功能实现函数 
{
	int n;                                                     //n为进制                             
	cout<<"请输入进制：";
	cin>>n;
	string ss;                                                 //ss储存输入的表达式 
	cout<<"请输入表达式：";
	cin>>ss;
	if(n==10)
	{
		cout<<ss<<"="<<calculate(infix_suffix(ss));            //十进制运算实现函数 
	}
	else if(n==2)
	{
		cout<<ss<<"=";
		calculate_2(infix_suffix(ss));                         //二进制运算实现函数 
	} 
	else if(n==16)
	{
		cout<<ss<<"=";
		calculate_16(infix_suffix(ss));                        //十六进制运算实现函数 
	} 
	else
	{
		cout<<"格式错误";                                      
	}
	
}

//第三个功能：特殊计算 

void function(void)                                            //特殊计算功能实现函数 
{
	cout<<"请输入函数表达式";     
	string ss;                                                 //ss储存输入的表达式 
	cin>>ss;
	if(ss[0]=='s'&&ss[1]=='i'&&ss[2]=='n')                     //如果是sin 
	{
		string op;                                             //op储存数字 
		for(int i=3;ss[i]!='\0';i++)
		{
			op+=ss[i];                                           
		}
		istringstream iss(op);                                 //将op转换为串值 
		double num;
		iss>>num;                                              //将op转换为double型储存在num中 
		cout<<sin(num);                                        //输出sin值 
	}
	else if(ss[0]=='c'&&ss[1]=='o'&&ss[2]=='s')                //如果是cos 
	{
		string op;                                             //op储存数字 
		for(int i=3;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //将op转化为串值 
		double num;
		iss>>num;                                              //将op转化为double型储存在num中 
		cout<<cos(num);                                        //输出cos值 
	}
	else if(ss[0]=='t'&&ss[1]=='a'&&ss[2]=='n')                //如果是tan
	{
		string op;                                             //op储存数字 
		for(int i=3;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //将op转化为串值 
		double num;
		iss>>num;                                              //将op转化为double型储存在num中 
		cout<<tan(num);                                        //输出tan值 
	}
	else if(ss[0]=='a'&&ss[1]=='s'&&ss[2]=='i'&&ss[3]=='n')    //如果是arcsin
	{
		string op;                                             //op储存数字 
		for(int i=4;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //将op转化为串值 
		double num;
		iss>>num;                                              //将op转化为double型储存在num中 
		cout<<asin(num);                                       //输出asin值 
	}
	else if(ss[0]=='c'&&ss[1]=='s'&&ss[2]=='c')                //如果是csc
	{
		string op;                                             //op储存数字 
		for(int i=3;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //将op转化为串值 
		double num;
		iss>>num;                                              //将op转化为double型储存在num中 
		cout<<1/sin(num);                                      //输出csc值 
	}
	else if(ss[0]=='s'&&ss[1]=='e'&&ss[2]=='c')                //如果是sec
	{
		string op;                                             //op储存数字 
		for(int i=3;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //将op转化为串值 
		double num;
		iss>>num;                                              //将op转化为double型储存在num中 
		cout<<1/cos(num);                                      //输出sec值 
	}
	else if(ss[0]=='c'&&ss[1]=='o'&&ss[2]=='t')                //如果是cot
	{
		string op;                                             //op储存数字 
		for(int i=3;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //将op转化为串值 
		double num;
		iss>>num;                                              //将op转化为double型储存在num中 
		cout<<1/tan(num);                                      //输出cot值 
	}
	else if(ss[0]=='a'&&ss[1]=='c'&&ss[2]=='o'&&ss[3]=='s')    //如果是arccos
	{
		string op;                                             //op储存数字 
		for(int i=4;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //将op转化为串值 
		double num;
		iss>>num;                                              //将op转化为double型储存在num中 
		cout<<acos(num);                                       //输出acos值 
	}
	else if(ss[0]=='s'&&ss[1]=='q'&&ss[2]=='r'&&ss[3]=='t')    //如果是sqrt
	{
		string op;                                             //op储存数字 
		for(int i=4;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //将op转化为串值 
		double num;
		iss>>num;                                              //将op转化为double型储存在num中 
		cout<<sqrt(num);                                       //输出sqrt值 
	}
	else if(ss[0]=='a'&&ss[1]=='t'&&ss[2]=='a'&&ss[3]=='n')    //如果是arctan
	{
		string op;                                             //op储存数字 
		for(int i=4;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //将op转化为串值 
		double num;
		iss>>num;                                              //将op转化为double型储存在num中 
		cout<<atan(num);                                       //输出atan值 
	}
	else if(ss[0]=='l'&&ss[1]=='o'&&ss[2]=='g')                //如果是log
	{
		string op1,op2;                                        //op1,2储存数字 
		int i=3;
		for(;ss[i]!='(';i++)                                      
		{
			op1+=ss[i];                                        //op1储存底数 
		}
		istringstream iss(op1);                                //将op1转化为串值 
		double num1;
		iss>>num1;                                             //将op1转化为double型储存在num1中 
		double q1=log(num1);                                   //q1储存log值
		i++;
		for(;ss[i]!=')';i++)                                    
		{
			op2+=ss[i];                                        //op2储存对数 
		}
		istringstream is(op2);                                 //将op2转化为串值 
		double num2;
		is>>num2;                                              //将op2转化为double型储存在num2中 
		double q2=log(num2);                                   //q2储存log值 
		cout<<q2/q1;                                           //输出q2/q1的值 
	}
	else if(ss[0]=='l'&&ss[1]=='n')                            //如果是ln
	{
		string op;                                             //op储存数字 
		for(int i=2;ss[i]!='\0';i++)                                      
		{
			op+=ss[i];                                         //op储存对数 
		}
		istringstream iss(op);                                 //将op转化为串值 
		double num;
		iss>>num;                                              //将op转化为double型储存在num中 
		cout<<log(num)/log(2.718281);                          //输出ln值 
	}
	else                                                       //如果是幂函数 
	{
		string op1,op2;                                        //op1，2储存数字                          
		int i=0;
		for(;ss[i]!='^';i++)           
		{
			op1+=ss[i];                                        //op1储存底数 
		}
		istringstream iss(op1);                                //将op1转化为串值 
		double num1;
		iss>>num1;                                             //将op1转化为double型储存在num1中 
		i++;
		for(;ss[i]!='\0';i++)
		{
			op2+=ss[i];                                        //op2储存指数 
		}
		istringstream is(op2);                                 //将指数转化为串值 
		double num2;
		is>>num2;                                              //将op2转化为double型储存在num2中 
		cout<<pow(num1,num2);                                  //输出num1的num2次方 
	}
} 

//第四个功能：大小比较
 
int put_in(int a)                                              //比较大小函数输入函数 
{
	int ss;                                                    //输入的数字 
	if(a==8)                                                   //如果是八进制 
	{
		cin>>oct>>ss;
	}
	else if(a==10)                                             //如果是十进制 
	{
		cin>>dec>>ss;
	}
	else if(a==16)                                             //如果是十六进制 
	{
		cin>>hex>>ss;
	}
	else if(a==2)                                              //如果是二进制 
	{
		cin>>ss;
		int m,n=0,i=0;                                         //设定整形变量m,n,i=0 
	    while(ss>0)                                            //ss大于0则循环 
	    {
	    	m=ss%10;                                           //m记录当前ss最后一位数                               
	    	n+=m*pow(2,i);                                     //m乘以2的i次方，并加到n中 
	    	ss/=10;                                            
	    	i++;                                               //i加1 
	    }
		ss=n;                                                  //将n的值赋给ss  
	}
	return ss;                                                 //返回值为ss 
}

void put_out(int m,int n)                                      //比较大小函数输出函数 
{
	if(m==8)                                                   //如果是八进制 
	{
		cout<<oct<<n<<"大";
	}
	else if(m==10)                                             //如果是十进制 
	{
		cout<<dec<<n<<"大";
	}
	else if(m==16)                                             //如果是十六进制 
	{
		cout<<hex<<n<<"大";
	} 
	else if(m==2)                                              //如果是二进制 
	{
		int k[1000],i=0;                                       //设置数组k，整形变量i=0 
		while(n>0)                                            
		{
			k[i]=n%2;                                          //用k储存ss对2的余数 
			n/=2;                                              //ss等于ss除以2 
			i++;                                               //i+1 
		}
		for(;i>0;i--)                                          //从数组最后一位开始 
	    {
	    	cout<<k[i-1];                                      //输出储存的数字 
		}
		cout<<"大";
	}
}

void compare_with(void)                                        //大小比较功能实现函数 
{
	int a,b,c,d;                                               //a，b为第一，二个数字进制 
	cout<<"请输入第一个数字的进制：";
    cin>>dec>>a; 
	cout<<"请输入第一个数字：";
	c=put_in(a);                                               //c，d为第一，二个数字的值 
	cout<<"请输入第二个数字的进制：";
	cin>>dec>>b;
	cout<<"请输入第二个数字：";
	d=put_in(b);
	int k=c-d;                                                 //通过c-d的正负来比较大小 
	if(k>0)                                                    //k为正则c大      
	{
		put_out(a,c);
	}
	else if(k<0)                                               //k为负说明d大 
	{
		put_out(b,d);
	}
	else if(k==0)                                              //等于0则一样大 
	{
		cout<<"一样大";                                         
	}
}

//第五个功能：公倍数与公约数
 
void com_div_mul(void)                                         //最大公约数与最小公倍数实现函数 
{
	int a,b;                                                   //a,b分别为两数的值  
	int m,n;                                                   //m为最大公约数，n为最小公倍数 
	cout<<"两个数字分别为:"<<endl;
	cin>>a>>b;
	if((a<=0)||(b<=0))                                         //如果某个数小于或等于0则格式错误 
	{
		cout<<"格式错误；"; 
	} 
	for(int i=1;(i<=a)&&(i<=b);i++)                            //从i=1开始循环到较小的数 
	{
		if((a%i==0)&&(b%i==0))                                 //如果对i求余数都是0 
		{
			m=i;                                               //m暂且为i的值 
		}
	} 
	for(int i=a;;i++)                                          //从某一个数开始 
	{
		if(i%a==0&&i%b==0)                                     //如果有个数对两个数求余数都是0 
		{
			n=i;                                               //n为最小公倍数，结束循环 
			break;
		}
	} 
	cout<<"最大公约数为："<<m<<endl;
	cout<<"最小公倍数为："<<n;
} 

//第六个功能：函数
 
void function_solve(void)                                      //函数功能实现函数 
{
	int a;                                                     
	cout<<"使用一元一次函数请输入1；"<<endl;
	cout<<"使用一元二次函数请输入2；"<<endl;
	cout<<"使用反比例函数请输入3；"<<endl;
	cout<<"使用指数函数请输入4；"<<endl; 
    cout<<"使用对数函数请输入5；"<<endl;
    cin>>a;
	if(a==1)                                                   //如果是一元一次函数 
	{
		cout<<"y=ax+b"<<endl;                                   
		cout<<"请输入a：";
		double x;                                              //x记录a的值 
		cin>>x;
		cout<<"请输入b：";
		double y;                                              //y记录b的值 
		cin>>y;
		int m;                                                 //m为自变量x 
		while(1)                                               //一直循环 
		{ 
			cout<<"请输入x：";                                 //输入x的值 
			cin>>m;                                          
			cout<<"y="<<x*m+y;                                 //输出y的值                      
			cout<<endl;
		}
	} 
	else if(a==2)                                              //如果是一元二次函数 
	{
		cout<<"y=ax^2+bx+c"<<endl;                                   
		cout<<"请输入a：";
		double x;                                              //x记录a的值 
		cin>>x;
		cout<<"请输入b：";
		double y;                                              //y记录b的值 
		cin>>y;
		cout<<"请输入c：";
		double z;                                              //z记录c的值
		cin>>z; 
		int m;                                                 //m为自变量x 
		while(1)                                               //一直循环 
		{ 
			cout<<"请输入x：";                                 //输入x的值 
			cin>>m;   
			int k=x*m*m+y*m+z;                                 //k为y值                                       
			cout<<"y="<<k;                                     //输出y的值                      
			cout<<endl;
		}
	} 
	else if(a==3)                                              //如果是反比例函数 
	{
		cout<<"y=k/x"<<endl;                                   
		cout<<"请输入k：";
		double x;                                              //x记录k的值 
		cin>>x;
		int m;                                                 //m为自变量x 
		while(1)                                               //一直循环 
		{ 
			cout<<"请输入x：";                                 //输入x的值 
			cin>>m; 
			if(m==0)
			{
				cout<<"格式错误；"<<endl; 
				continue;
			}                                         
			cout<<"y="<<x/m;                                   //输出y的值                      
			cout<<endl;
		}
	} 
	else if(a==4)                                              //如果是指数函数 
	{
		cout<<"y=a^x"<<endl;                                   
		cout<<"请输入a：";
		double x;                                              //x记录a的值 
		cin>>x;
		if(x<=0)                                               //a小于或等于0不符合定义 
		{
			cout<<"格式错误；"<<endl;
		}
		else
		{
			int m;                                             //m为自变量x 
		    while(1)                                           //一直循环 
		    { 
			    cout<<"请输入x：";                             //输入x的值 
			    cin>>m;                                          
			    cout<<"y="<<pow(x,m);                          //输出y的值                      
			    cout<<endl;
	     	}
		}
	} 
	else if(a==5)                                              //如果是对数函数 
	{
		cout<<"y=loga(x)"<<endl;                                   
		cout<<"请输入a：";
		double x;                                              //x记录a的值 
		cin>>x;
		if((x<=0)||(x==1))                                     //a小于或等于0和a等于1不符合定义 
		{
			cout<<"格式错误；"<<endl;
		}
		else
		{
			int m;                                             //m为自变量x 
		    while(1)                                           //一直循环 
		    { 
			    cout<<"请输入x：";                             //输入x的值 
			    cin>>m;  
				if(m>0)                                        
			    {
			    	cout<<"y="<<log(m)/log(x);                 //输出y的值                      
			        cout<<endl;
				}
				else                                           //真数小于等于0不符合定义 
				{
					cout<<"格式错误；"<<endl;
				}
	     	}
		}
	} 
	else
	{
		cout<<"格式错误；"<<endl;
	}
}

//第七个功能：方程求解
 
void solve_two(string ss,int &a,int &b,int &c)                  //返回一元二次方程中左侧或右侧abc的值 
{
	int n=ss.length();                                          //ss长度 
	int start=0;                                                //指向每一段 
	vector<string>op;                                           //存放数据的容器 
	for(int i=0;i<n;i++)
	{
		if(ss[i]=='+')
		{
			op.push_back(ss.substr(start,i-start));             //如果是加号记录上个符号到加号以前的数据
			start=i+1;                                          //加号不需要被记录，指向加号的下一个数据 
		}
		else if(ss[i]=='-')
        {
            op.push_back(ss.substr(start,i-start));             //如果是减号记录上个符号到减号以前的数据 
            start=i;                                            //减号属于下个数据，即负数，从减号开始记录                                    
        }
		else if(i==n-1)
        {
        	op.push_back(ss.substr(start,i-start+1));           //如果到最后一个数据了，那么从上一个符号开始记录 
		}
	} 
	for(int i=0;i<op.size();i++)
	{
		if (op[i].length()>2&&op[i][op[i].length()-2]=='^')     //如果是二次项 
        {
            if (op[i][0]=='x')                                  //如果系数是1 
            {
            	a+=1;                                           //二次项系数加1 
			}
            else if (op[i][0]=='-'&&op[i][1]=='x')              //如果系数是-1 
            {
             	a+=-1;                                          //二次项系数减1 
			}   
            else                                                //否则 
            {
            	istringstream iss(op[i].substr(0,op[i].length()-3));//将数据段转化为数值  
            	double num;
            	iss>>num;                                       //储存在double型的num中 
            	iss.clear();
            	a+=num;                                         //二次项系数加上num值 
			}
        }
        else if(op[i][op[i].length()-1]=='x')                   //如果是一次项 
        {
            if (op[i][0]=='x')                                  //如果系数是1        
            {
             	b+=1;                                           //一次项系数加一 
			}  
            else if (op[i][0]=='-'&&op[i][1]=='x')              //如果系数是-1 
            {
              	b+=-1;                                          //一次项系数减1 
			} 
            else                                                //否则 
            {
            	istringstream iss(op[i].substr(0,op[i].length()-1));   //将数据转化为串值 
            	double num;            
            	iss>>num;                                       //储存在double型的num中 
            	iss.clear();
            	b+=num;                                         //一次项系数加上num 
		    }
		}
		else                                                    //如果是常数项 
        {
        	istringstream iss(op[i].substr(0,op[i].length()));  //将数据转化为串值  
            double num;
            iss>>num;                                           //储存在double型的num中 
            iss.clear();
            c+=num;                                             //常数项加上num 
        }
    } 
}

void equation_two(void)                                         //一元二次方程求解函数 
{
	string ss,ss_l,ss_r;                                        //分别储存总方程，等号左侧数据，右侧数据
	cin>>ss;
	int i=0;                                                    //i为ss的指向 
	int l=ss.length();                                          //ss长度
	double delta;                                               //delta=b^2-4ac
	int al=0,bl=0,cl=0,ar=0,br=0,cr=0;                          //等号左右两边a，b，c的值 
	for(;ss[i]!='=';i++);
	ss_l=ss.substr(0,i);                                        //截取等号左边字符串 
	solve_two(ss_l,al,bl,cl);
    if(ss[i+1]=='0')                                            //如果右边为0                  
	{
		delta=bl*bl-4*al*cl; 
		if(delta<0)                                             //Δ小于0无解 
	    {
		    cout<<"方程无实数解";
	    }
	    else
	    {
		    cout<<"x1="<<(-bl-sqrt(delta))/2/al<<" "<<"x2="<<(-bl+sqrt(delta))/2/al<<endl; 
	    }  
	}
	else
	{
		ss_r=ss.substr(i+1,l-i-1);                                //截取等号右边字符串 
		solve_two(ss_r,ar,br,cr);
	    int a=al-ar;                                              //a值为左侧a减去右侧a 
	    int b=bl-br;                                              //b值为左侧b减去右侧b 
	    int c=cl-cr;                                              //c值为左侧c减去右侧c 
	    delta=b*b-4*a*c;                                   
	    if(delta<0)                                               //Δ小于0无解 
	    {
		    cout<<"方程无实数解";
	    }
	    else
	    {
		    cout<<"x1="<<(-b-sqrt(delta))/2/a<<" "<<"x2="<<(-b+sqrt(delta))/2/a<<endl;    
	    } 
	}
}

void solve_one(string ss,double &a,double &b)                   //返回一元一次方程中左侧或右侧ab的值 
{
	int n=ss.length();                                          //ss长度 
	int start=0;                                                //指向每一段 
	vector<string>op;                                           //存放分段数据的容器 
	for(int i=0;i<n;i++)
	{
		if(ss[i]=='+')
		{
			op.push_back(ss.substr(start,i-start));             //如果是加号记录上个符号到加号以前的数据
			start=i+1;                                          //加号不需要被记录，指向加号的下一个数据 
		}
		else if(ss[i]=='-')
        {
            op.push_back(ss.substr(start,i-start));             //如果是减号记录上个符号到减号以前的数据 
            start=i;                                            //减号属于下个数据，即负数，从减号开始记录                                    
        }
		else if(i==n-1)
        {
        	op.push_back(ss.substr(start,i-start+1));           //如果到最后一个数据了，那么从上一个符号开始记录 
		}
	} 
	for(int i=0;i<op.size();i++)
	{
        if(op[i][op[i].length()-1]=='x')                        //如果是一次项 
        {
            if (op[i][0]=='x')                                  //如果系数是1        
            {
             	a+=1;                                           //一次项系数加一 
			}  
            else if (op[i][0]=='-'&&op[i][1]=='x')              //如果系数是-1 
            {
              	a+=-1;                                          //一次项系数减1 
			} 
            else                                                //否则 
            {
            	istringstream iss(op[i].substr(0,op[i].length()-1));   //将数据转化为数值 
            	double num;            
            	iss>>num;                                       //储存在double型的num中 
            	iss.clear();
            	a+=num;                                         //一次项系数加上num 
		    }
		}
		else                                                    //如果是常数项 
        {
        	istringstream iss(op[i].substr(0,op[i].length()));  //将数据转化为数值  
            double num;
            iss>>num;                                           //储存在double型的num中 
            iss.clear();
            b+=num;                                             //常数项加上num 
        }
    } 
}

void equation_one(void)                                         //一元一次方程求解函数 
{
	string ss,ss_l,ss_r;                                        //分别储存总方程，等号左侧数据，右侧数据
	cin>>ss;
	int i=0;                                                    //i为ss的指向 
	int l=ss.length();                                          //ss长度
	double al=0,bl=0,ar=0,br=0;                                 //等号左右两边a，b的值 
	for(;ss[i]!='=';i++);
	ss_l=ss.substr(0,i);                                        //截取等号左边字符串 
	solve_one(ss_l,al,bl);
    if(ss[i+1]=='0')                                            //如果右侧只有0 
	{
		cout<<"x="<<-bl/al;
	}
	else
	{
		ss_r=ss.substr(i+1,l-i-1);                              //截取等号右边字符串 
		solve_one(ss_r,ar,br);
	    double a=al-ar;                                         //a值为左侧a减去右侧a
	    double b=bl-br;                                         //b值为左侧b减去右侧b 
	    cout<<"x="<<-b/a<<endl;    
	}
}

void solve_anti(string ss,int &a,int &b)                        //返回反比例方程中左侧或右侧ab的值 
{
	int n=ss.length();                                          //ss长度 
	int start=0;                                                //指向每一段 
	vector<string>op;                                           //存放分段数据的容器 
	for(int i=0;i<n;i++)
	{
		if(ss[i]=='+')
		{
			op.push_back(ss.substr(start,i-start));             //如果是加号记录上个符号到加号以前的数据
			start=i+1;                                          //加号不需要被记录，指向加号的下一个数据 
		}
		else if(ss[i]=='-')
        {
            op.push_back(ss.substr(start,i-start));             //如果是减号记录上个符号到减号以前的数据 
            start=i;                                            //减号属于下个数据，即负数，从减号开始记录                                    
        }
		else if(i==n-1)
        {
        	op.push_back(ss.substr(start,i-start+1));           //如果到最后一个数据了，那么从上一个符号开始记录 
		}
	} 
	for(int i=0;i<op.size();i++)
	{
        if(op[i][op[i].length()-1]=='x')                        //如果是x项 
        {
            if (op[i][0]=='x')                                  //如果系数是1        
            {
             	a+=1;                                           //一次项系数加一 
			}  
            else if (op[i][0]=='-'&&op[i][1]=='x')              //如果系数是-1 
            {
              	a+=-1;                                          //一次项系数减1 
			} 
            else                                                //否则 
            {
            	istringstream iss(op[i].substr(0,op[i].length()-1));   //将数据转化为串值 
            	double num;            
            	iss>>num;                                       //储存在double型的num中 
            	iss.clear();
            	a+=num;                                         //一次项系数加上num 
		    }
		}
		else                                                    //如果是常数项 
        {
        	istringstream iss(op[i].substr(0,op[i].length()));  //将数据转化为串值  
            double num;
            iss>>num;                                           //储存在double型的num中 
            iss.clear();
            b+=num;                                             //常数项加上num 
        }
    } 
}

void equation_anti(void)                                        //反比例方程求解函数 
{
	string ss,ss_l,ss_r;                                        //分别储存总方程，等号左侧数据，右侧数据
	cin>>ss;
	int i=0;                                                    //i为ss的指向 
	int l=ss.length();                                          //ss长度
	double al=0,bl=0,ar=0,br=0;                                 //等号左右两边a，b的值 
	for(;ss[i]!='=';i++);
	ss_l=ss.substr(0,i);                                        //截取等号左边字符串 
	solve_one(ss_l,al,bl);
    if(ss[i+1]=='0')                                            //如果右侧只有0 
	{
		cout<<"x="<<-al/bl;
	}
	else
	{
		ss_r=ss.substr(i+1,l-i-1);                              //截取等号右边字符串 
		solve_one(ss_r,ar,br);
	    double a=al-ar;                                         //a值为左侧a减去右侧a
	    double b=bl-br;                                         //b值为左侧b减去右侧b 
	    cout<<"x="<<-a/b<<endl;    
	}
}

void equation_log(void)                                         //对数方程求解函数 
{
	string ss;                                                  //储存输入的数据 
	cin>>ss;
	int i=3;                                                    //从数字开始 
	string op1,op2;
	for(;ss[i]!='x';i++)
	{
		op1+=ss[i];                                                              
	}
	istringstream iss(op1);                                     //将数字转化为数值中 
	double num1;
	iss>>num1;                                                  //转化为double型储存在num1中 
	i+=2;
	for(;ss[i]!='\0';i++)
	{
		op2+=ss[i];                                             //第二组数字的储存 
	} 
	istringstream is(op2);                                      //将数字转化为串值                       
	double num2;                              
	is>>num2;                                                   //转化为double型储存在num2中 
	cout<<"x="<<pow(num1,num2);                                 //输出x的值 
} 

void equation_indix(void)                                       //指数方程求解函数
{
	string ss;                                                  //ss储存输入数据 
	cin>>ss; 
	int i=0;                                                    //i为ss指向 
	string op1,op2;                                             //储存两组数字 
	for(;ss[i]!='^';i++)
	{
		op1+=ss[i];                                             //op1记录第一组数字 
	} 
	istringstream iss(op1);                                     //将op1转化为串值 
	double num1;
	iss>>num1;                                                  //放入double型的num1中             
	for(;ss[i]!='=';i++);
	i++; 
	for(;ss[i]!='\0';i++)
	{
		op2+=ss[i];                                             //op2记录第二组数字 
	}
	istringstream is(op2);                                      //将op2转化为串值 
	double num2;
	is>>num2;                                                   //放入double型的num2中 
	cout<<"x="<<log(num2)/log(num1);                            //输出结果 
} 

void solve_equation(void)                                       //方程求解实现函数 
{
	cout<<"求一元一次方程解请输入1；"<<endl;   
	cout<<"求一元二次方程解请输入2；"<<endl;
	cout<<"求反比例方程解请输入3；"<<endl;
	cout<<"求指数方程解请输入4；"<<endl;
	cout<<"求对数方程解请输入5；"<<endl; 
	int a;
	cin>>a;
	if(a==1)
	{
		equation_one();                                         //一元一次方程求解函数 
	}
	else if(a==2)
	{
		equation_two();                                         //一元二次方程求解函数 
	}
	else if(a==3)
	{
		equation_anti();                                        //反比例方程求解函数 
	}
	else if(a==4)
	{
	    equation_indix();                                       //指数方程求解函数 
	}
	else if(a==5)
	{
	    equation_log();                                         //对数方程求解函数 
	} 
	else
	{
		cout<<"格式错误；"<<endl; 
	} 
}
 
//main函数
 
int main(void)
{
	cout<<"欢迎来到计算器..."<<endl;
	cout<<"使用进制转换功能请输入1；"<<endl;
	cout<<"使用运算功能请输入2；" <<endl;
	cout<<"使用特殊计算功能请输入3；"<<endl;
	cout<<"使用大小比较功能请输入4；"<<endl;
	cout<<"使用公约数、公倍数功能请输入5；"<<endl;
	cout<<"使用函数功能请输入6；"<<endl; 
	cout<<"使用方程求解功能请输入7；"<<endl; 
	cout<<"退出请输入0；"<<endl; 
    int n;
    cin>>n;
    if(n==0)
    {
    	cout<<"欢迎下次使用..."<<endl;
		return 0; 
	}
	else if(n==1)                                             
	{
		binary_use();                                         //使用进制转换功能 
	}
    else if(n==2)                                             
	{
	    math_operation();                                     //使用数学运算功能           
	} 
	else if(n==3)
	{
		function();                                           //使用特殊计算功能 
	} 
	else if(n==4)
    {
    	compare_with();                                       //使用大小比较功能                            
	}
	else if(n==5)
	{
		com_div_mul();                                        //使用求最大公约数与最小公倍数功能 
	}
    else if(n==6)
    {
    	function_solve();                                     //使用函数功能 
	}
	else if(n==7)
	{
		solve_equation();                                     //使用方程求解功能 
	}
	else
	{
		cout<<"格式错误；"; 
	} 
	return 0;
}

