#include <iostream>
#include <cstring>
#include <cmath>
#include <stack> 
#include <sstream>
#include <vector> 

using namespace std;

//��һ������ ������ת�� 

void transform_of_binary(void)                                //ͨ������ת������ʵ�ֺ���                         
{
    int a,b;                                                   
	cout<<"�������ʼ���ƣ�" ;
	cin>>a;                                                   //a��¼��ʼ���� 
	cout<<"������Ҫת���Ľ��ƣ�";
	cin>>b;                                                   //b��¼ת����Ľ��� 
	int ss;                                                   //ssΪҪת�������� 
	cout<<"������Ҫת�������֣�";
	if(a==8&&b==10)                                           //�˽���תΪʮ���� 
	{
		cin>>oct>>ss;                                         //����˽���ss 
		cout<<"���Ϊ��"<<dec<<ss;                            //���ʮ����ss 
	}
	else if(a==8&&b==16)                                      //�˽���תΪʮ������ 
	{
		cin>>oct>>ss;                                         //����˽���ss 
		cout<<"���Ϊ��"<<hex<<ss;                            //���ʮ������ss 
	}
	else if(a==16&&b==10)                                     //ʮ������תΪʮ���� 
	{
		cin>>hex>>ss;                                         //����ʮ������ss 
		cout<<"���Ϊ��"<<dec<<ss;                            //���ʮ����ss 
	}
	else if(a==10&&b==16)                                     //ʮ����תΪʮ������ 
	{
		cin>>dec>>ss;                                         //����ʮ����ss 
		cout<<"���Ϊ��"<<hex<<ss;                            //���ʮ������ss 
	}
	else if(a==10&&b==8)                                      //ʮ����תΪ�˽��� 
	{
		cin>>dec>>ss;                                         //����ʮ����ss 
		cout<<"���Ϊ��"<<oct<<ss;                            //����˽���ss 
	}
	else if(a==16&&b==8)                                      //ʮ������תΪ�˽��� 
	{
		cin>>hex>>ss;                                         //����ʮ������ss 
		cout<<"���Ϊ��"<<oct<<ss;                            //����˽���ss 
	}
	else if(a==2&&b==8)                                       //������תΪ�˽��� 
	{
		cin>>ss;	                                          //����ss����ʱ��Ϊ�Ƕ����� 
	    int m,n=0,i=0;                                        //iָ��ѭ������ 
	    while(ss>0)                                           //ss����0��ѭ�� 
	    {
	    	m=ss%10;                                          //m��¼��ǰss���һλ��                               
	    	n+=m*pow(2,i);                                    //m����2��i�η������ӵ�n�� 
	    	ss/=10;                                           //ss����ss����ʮ 
	    	i++;                                              //i��1 
	    }                                                     //��ʱnΪ������ʮ���Ƶ�ֵ 
	    cout<<"���Ϊ��"<<oct<<n;                             //��ʮ����תΪ�˽��� 
	} 
	else if(a==2&&b==10)                                      //������תΪʮ���� 
	{
		cin>>ss;	                                          //���������ss 
	    int m,n=0,i=0;                                        //iָ��ѭ������ 
	    while(ss>0)                                           //ss����0��ѭ�� 
	    {
	    	m=ss%10;                                          //m��¼��ǰss���һλ��                               
	    	n+=m*pow(2,i);                                    //m����2��i�η������ӵ�n�� 
	    	ss/=10;                                           //ss����ss����ʮ 
	    	i++;                                              //i��1 
	    }                                                     
	    cout<<"���Ϊ��"<<n;                                  //nΪ����ʮ���Ƶ�ֵ 
	} 
	else if(a==2&&b==16)                                      //������תΪʮ������ 
	{
		cin>>ss;	                                          //���������ss 
	    int m,n=0,i=0;                                        //iָ��ѭ������ 
	    while(ss>0)                                           //ss����0��ѭ�� 
	    {
	    	m=ss%10;                                          //m��¼��ǰss���һλ��                               
	    	n+=m*pow(2,i);                                    //m����2��i�η������ӵ�n�� 
	    	ss/=10;                                           //ss����ss����ʮ 
	    	i++;                                              //i��1 
	    }                                                     //nΪ������ʮ���Ƶ�ֵ 
	    cout<<"���Ϊ��"<<hex<<n;                             //��ʮ����תΪʮ������ 
	} 
	else if(a==10&&b==2)                                      //ʮ����תΪ������                         
	{
		int k[1000],i=0;                                      //��������k��iָ����� 
		cin>>ss;                                              //����ʮ����ss 
		while(ss>0)                                           //ss����0��ѭ�� 
		{
			k[i]=ss%2;                                        //��k����ss��2������ 
			ss/=2;                                            //ss����ss����2 
			i++;                                              //i+1 
		}
		cout<<"���Ϊ��"; 
		for(;i>0;i--)                                         //���������һλ��ʼ 
	    {
	    	cout<<k[i-1];                                     //������������ 
		}
	}
	else if(a==8&&b==2)                                       //�˽���תΪ������                         
	{
		int k[1000],i=0;                                      //��������k��iָ����� 
		cin>>oct>>ss;                                         //����˽���ss 
		while(ss>0)                                           //ss����0��ѭ�� 
		{
			k[i]=ss%2;                                        //��k����ss��2������ 
			ss/=2;                                            //ss����ss����2 
			i++;                                              //i+1 
		}
		cout<<"���Ϊ��"; 
		for(;i>0;i--)                                         //���������һλ��ʼ 
	    {
	    	cout<<k[i-1];                                     //������������ 
		}
	}
	else if(a==16&&b==2)                                      //ʮ������תΪ������                         
	{
		int k[1000],i=0;                                      //��������k��iָ����� 
		cin>>hex>>ss;                                         //����ʮ������ss 
		while(ss>0)                                           //ss����0��ѭ�� 
		{
			k[i]=ss%2;                                        //��k����ss��2������ 
			ss/=2;                                            //ss����ss����2 
			i++;                                              //i+1 
		}
		cout<<"���Ϊ��"; 
		for(;i>0;i--)                                         //���������һλ��ʼ 
	    {
	    	cout<<k[i-1];                                     //������������ 
		}
	}
	else                                                      //���������Ľ���ת�� 
	{
		cout<<"��ʽ����";                                    
	}
}

void binary_judge(void)                                       //�Զ��жϽ��Ʋ�ת��Ϊʮ���ƺ��� 
{
	string ss,op;                                             //ss��¼�������ݣ�op��¼���� 
	cin>>ss;                                                  
	if(ss[0]=='0'&&(ss[1]=='b'||ss[1]=='B'))                  //����Ƕ����� 
	{
		for(int i=2;ss[i]!='\0';i++)
		{
			op+=ss[i];                                      
		}
		istringstream iss(op);                                //��ȡ��ֵ��ת��Ϊint�ʹ���num��                            
		int num;
		iss>>num;                            
		int m,n=0,i=0;                                        //iָ����� 
	    while(num>0)                                          //num����0��ѭ�� 
	    {
	    	m=num%10;                                         //m��¼��ǰnum���һλ��                               
	    	n+=m*pow(2,i);                                    //m����2��i�η������ӵ�n�� 
	    	num/=10;                                          //num����num����ʮ 
	    	i++;                                              //i��1 
	    }                                                     
	    cout<<"ʮ����Ϊ��"<<n;                                //nΪʮ����
	}
	else if(ss[0]=='0'&&(ss[1]=='x'||ss[1]=='X'))             //�����ʮ������ 
	{
		for(int i=2;ss[i]!='\0';i++)
		{
			op+=ss[i];                                                
		}
		istringstream iss(op);                                //��ȡʮ��������ֵ��ת��Ϊint�ʹ���num��                               
		int num;
		iss>>hex>>num;                                         
	    cout<<"ʮ����Ϊ��"<<dec<<num;                         //numΪʮ����
	}
	else if(ss[0]=='0')                                       //����ǰ˽��� 
	{
		for(int i=1;ss[i]!='\0';i++)
		{
			op+=ss[i];                                                
		}
		istringstream iss(op);                                //��ȡ�˽�����ֵ��ת��Ϊint�ʹ���num��                               
		int num;
		iss>>oct>>num;                            
	    cout<<"ʮ����Ϊ��"<<dec<<num;                         //numΪʮ����
	}
	else                                                      //����Ĭ��Ϊʮ����
	{
		cout<<"ʮ����Ϊ��";
		for(int i=0;ss[i]!='\0';i++)
		{
			cout<<ss[i];
		} 
	}
	
} 
 
void binary_use(void)                                         //����ת������ʵ�ֺ��� 
{
	cout<<"�Զ��жϽ��Ʋ�ת��Ϊʮ����������1��"<<endl;
	cout<<"ѡ����ʼ���������ս��ƽ���ת��������2��"<<endl;
	int a;                                                    //a�ж�����һ����ʽ 
	cin>>a;
	if(a==1)
	{
		binary_judge();                                       //�Զ��ж��� 
	} 
	else if(a==2)
	{
		transform_of_binary();                                //����ת���� 
	}
	else
	{
		cout<<"��ʽ����";
	}
}

//�ڶ������ܣ����ʽ���� 
 
int priority(char operate)                                    //���㹦�������ȼ��ȽϺ���
{
	switch(operate)                                             
	{
		case '(':return 1;                                    //����������ţ�Ӧ��ջ 
        case ')':return 4;                                    //����������ţ��ҵ���һ�������ţ���ջ 
		case '+':return 2;                                    //���ִ������ȼ���С 
        case '-':return 2;                        
        case '*':return 3;                                     
        case '/':return 3;                                    //�߼���ſ���ջ 
   }
} 

string infix_suffix(string ss)                                //���㹦������׺ת��׺���ʽ���� 
{
	stack<char>operate;                                       //���ٲ�����ջ
	int flag;                                                 //�����ж��Ƿ��Ǹ��� 
	string suffix="                                        "; //Ԥ���ռ� 
	char currentop;                                           //��ǰ�Ĳ���
	int i=0,j=0;                                              //iΪ��׺��ǰָ��jΪ��׺ָ��
	while(ss[i]!='\0')                                        //��������һ�� 
	{
		if((ss[i]>='0'&&ss[i]<='9')||ss[i]=='a'||ss[i]=='A'||ss[i]=='b'||ss[i]=='B'||ss[i]=='c'||ss[i]=='C'||ss[i]=='d'||ss[i]=='D'||ss[i]=='e'||ss[i]=='E'||ss[i]=='f'||ss[i]=='F')//���ss[i]�д����������
		{
			suffix[j++]='|';                                  //|�����ָ����ֻ���� 
			suffix[j++]=ss[i];                                //���浱ǰ���ֲ�ָ����һ��
			i+=1;
			while((ss[i]>='0'&&ss[i]<='9')||ss[i]=='a'||ss[i]=='A'||ss[i]=='b'||ss[i]=='B'||ss[i]=='c'||ss[i]=='C'||ss[i]=='d'||ss[i]=='D'||ss[i]=='e'||ss[i]=='E'||ss[i]=='f'||ss[i]=='F')//��Ϊ����
			{
				suffix[j++]=ss[i];                            //���浱ǰ���ֲ�ָ����һ�� 
				i++;                                          //ָ����һ�� 
			} 
			if(ss[i]=='.')                                    //�����С���� 
            {
                suffix[j++]='.';                              //����С���㲢ָ����һ�� 
                i+=1;                                         
                while((ss[i]>='0'&&ss[i]<='9')||ss[i]=='a'||ss[i]=='A'||ss[i]=='b'||ss[i]=='B'||ss[i]=='c'||ss[i]=='C'||ss[i]=='d'||ss[i]=='D'||ss[i]=='e'||ss[i]=='E'||ss[i]=='f'||ss[i]=='F')//С���������� 
                {
                    suffix[j++] =ss[i];                       //���浱ǰ���ֲ�ָ����һ�� 
                    i++;
                }
            }
		}  
		else if(ss[i]=='(')                                    //�����������
		{
			operate.push(ss[i]);                               //�������������ջ�� 
			i++; 
		}  
		else if(ss[i]==')')                                    //�����������      
		{
			if(operate.empty()!=0)                             //��ǰ������У� 
			{                  
			    cout<<"��ʽ����"<<endl;                     
			}
			else
			{
				currentop=operate.top();                       //��ǰ����Ϊջ��Ԫ��
				while(currentop!='(')                          //������ǣ�
				{
					suffix[j++]='|';                           //��ջ�ָ�ǰ������� 
					suffix[j++]=currentop;                     //����ջ��������
					operate.pop();                             //�Ƴ�ջ�������� 
					if(operate.empty()!=0)                     //����ǿ�ջ�ˣ�˵��û�У� 
                    {
                        cout<<"��ʽ����"<<endl;
                        break;                                 //����ѭ�� 
                    }
                    currentop=operate.top();                   //�������������   
				} 
				operate.pop();                                 //ɾ��ջ�У�
				i++; 
			} 
		}
		else if(ss[i]=='+'||ss[i]=='-'||ss[i]=='*'||ss[i]=='/')//����ǼӼ��˳�
		{
			if(ss[i]=='-')                                     //-�����Ǽ���Ҳ�����Ǹ���
			{
				if(i==0)                                       //�����һλ����- 
				{
					flag=1;                                    //˵���Ǹ��� 
				}
				else if(ss[i-1]=='+'||ss[i-1]=='-'||ss[i-1]=='*'||ss[i-1]=='/')
				{
					flag=1;                                    //���ǰ���мӼ��˳�˵��Ҳ�Ǹ��� 
				}
				if(flag==1)                                    //����Ǹ��� 
				{
					suffix[j++]='|';                           // �����ָ����� 
					suffix[j++]='-';                           //����Ҳ�����ֵ�һ����
					i++;
					if((ss[i]>='0'&&ss[i]<='9')||ss[i]=='a'||ss[i]=='A'||ss[i]=='b'||ss[i]=='B'||ss[i]=='c'||ss[i]=='C'||ss[i]=='d'||ss[i]=='D'||ss[i]=='e'||ss[i]=='E'||ss[i]=='f'||ss[i]=='F')//���ss[i]Ϊ���� 
					{
						suffix[j++]=ss[i];                     //�������ֲ�ָ����һ�� 
						i++;
						while((ss[i]>='0'&&ss[i]<='9')||ss[i]=='a'||ss[i]=='A'||ss[i]=='b'||ss[i]=='B'||ss[i]=='c'||ss[i]=='C'||ss[i]=='d'||ss[i]=='D'||ss[i]=='e'||ss[i]=='E'||ss[i]=='f'||ss[i]=='F')//�����Ϊ������ѭ�� 
						{
							suffix[j++]=ss[i];                 //�������� 
							i++;
						}
						if(ss[i]=='.')                         //�����С����
						{
							suffix[j++]=='.' ;                 //����С���� 
							i++;
							while((ss[i]>='0'&&ss[i]<='9')||ss[i]=='a'||ss[i]=='A'||ss[i]=='b'||ss[i]=='B'||ss[i]=='c'||ss[i]=='C'||ss[i]=='d'||ss[i]=='D'||ss[i]=='e'||ss[i]=='E'||ss[i]=='f'||ss[i]=='F')//С���������� 
							{
								suffix[j++]=ss[i];             //���浱ǰ���� 
								i++;                          
							}
						} 
					}
				continue;                                      //������һ��ѭ��
				} 
			} 
			if(operate.empty()!=0)                             //����ǿ�ջ
			{
				operate.push(ss[i]);                           //����ջ�� 
				i++; 
			} 
			else
			{
				char top_item=operate.top();                   //��ȡջ��Ԫ�� 
				if(priority(top_item)<priority(ss[i]))         //ջ�����ȼ�С�ڵ�ǰ���ȼ�
				{
					operate.push(ss[i]);                       //����ǰ���ŷ���ջ�� 
					i++;
				} 
				else
				{
					while(priority(top_item)>=priority(ss[i])) //ջ�����ȼ����ڵ�ǰ���ȼ� 
					{
						suffix[j++]='|';                       //���ŷָ��� 
                        suffix[j++]=top_item;                  //���涥���� 
                        operate.pop();                         //ɾ��������    
                        if(operate.empty()==0)                 //������ǿ�ջ 
                        {
                            top_item= operate.top();           //���»�ȡ�µĶ�����               
                        }
                        else                                   //����ǿ�ջ 
                        {
                        	break;                             //���� 
						}
					}
				operate.push(ss[i]);                           //����ջ�� 
				i++;	
				}                      
			} 
		} 
		else                                                   //��������������� 
		{
			cout<<"��ʽ����"<<endl;
			i++;
		} 
	}
	while(operate.empty()==0)                                  //���ʽ�����ջ�л��в�������Ӧȫ�����ַ��� 
	{
        char next= operate.top();                              //next��ջ�������� 
        suffix[j++]='|';                                       //���ŷָ���          
        suffix[j++]=next;                                      //��Ų�������ָ����һ�� 
        operate.pop();                                         //ɾ��ջ��Ԫ�� 
    }
    suffix[j]='!';                                             //!�����������еĽ���
	return suffix; 
}

double calculate(string suffix)                                //ʮ���Ƽ��㹦��ʵ�ֺ��� 
{
	stack<double>number;                                       //����ջ
	int i=0,j=0;                                               //iָ���׺��j��¼λ��    
	string now_cal;                                            //��ǰ�ļ��� 
	while(suffix[i]!='!')                                      //��׺���ǽ���������ѭ�� 
	{
		bool judge=0;                                          //�����ж������ֻ��Ƿ��� 
		if(suffix[i]=='|')                                     //����Ƿָ��� 
        {
            for(j=i+1;;j++)                                    //�ӷָ�����ʼѭ�� 
            {
                if(suffix[j]=='|')                             //������һ���ָ������� 
                    break;
                else if(suffix[j]=='!')                        //������������������ 
                    break;
            }
            for(int k=i+1; k<j; k++)                           //�ӷָ�����ʼ�����ָ������߽��������� 
            {
                now_cal+=suffix[k];                            //����֮���Ԫ�� 
            }

            //�ж��Ƿ�Ϊ��ֵ
            for(int k=0; k<now_cal.size(); k++)                //����֮���Ԫ�ؿ�ʼ������ 
            {
                if(now_cal[k]>='0'&&now_cal[k]<='9')           //���������
                {
                    istringstream iss(now_cal);                //ʹ��sstream�ĺ�����ȡ��ֵ 
                    double num;
                    iss>>num;                                  //����ת��Ϊdouble��ֵ������num��             
                    number.push(num);                          //�����ִ�����ջ�� 
                    judge = 1;                                 //������ 
				    break;                                     //���� 
                }
            }
            if(judge!=1)                                       //����������� 
			{
                double y=number.top();                         //y��¼ջ������ 
                number.pop();                                  //�Ƴ�ջ�� 
                double x=number.top();                         //x��¼�µ�ջ��Ԫ�� 
                number.pop();                                  //�Ƴ�ջ�� 
                if(now_cal=="+")                               //����ǼӺ� 
				{
                    number.push(x+y);                          //��x+y��ֵ����ջ�� 
                }
                else if(now_cal=="-")                          //����Ǽ��� 
				{
                    number.push(x-y);                          //��x-y��ֵ����ջ�� 
                }
                else if(now_cal=="*")                          //����ǳ˺� 
				{
                    number.push(x*y);                          //��x*y��ֵ����ջ�� 
                }
                else if(now_cal=="/")                          //����ǳ��� 
				{
                    number.push(x/y);                          //��x/y��ֵ����ջ�� 
                }
            }
            now_cal="";                                        //��յ�ǰ����
        }
    i++;
    }
    if(number.size()!=1)                                       //���ջ������ʣ���Ԫ�ز���һ�� 
    {
    	cout<<"��ʽ����"<<endl;
	}
    else
    {
	    return number.top();                                   //�������ս�� 
	}
}

int calculate_2(string suffix)                                 //�����Ƽ��㹦��ʵ�ֺ��� 
{
	stack<int>number;                                          //����ջ
	int i=0,j=0;                                               //iָ���׺��j��¼λ��    
	string now_cal;                                            //��ǰ�ļ��� 
	while(suffix[i]!='!')                                      //��׺���ǽ���������ѭ�� 
	{
		bool judge=0;                                          //�����ж������ֻ��Ƿ��� 
		if(suffix[i]=='|')                                     //����Ƿָ��� 
        {
            for(j=i+1;;j++)                                    //�ӷָ�����ʼѭ�� 
            {
                if(suffix[j]=='|')                             //������һ���ָ������� 
                    break;
                else if(suffix[j]=='!')                        //������������������ 
                    break;
            }
            for(int k=i+1; k<j; k++)                           //�ӷָ�����ʼ�����ָ������߽��������� 
            {
                now_cal+=suffix[k];                            //����֮���Ԫ�� 
            }
            for(int k=0; k<now_cal.size(); k++)                //����֮���Ԫ�ؿ�ʼ������ 
            {
                if(now_cal[k]>='0'&&now_cal[k]<='9')           //���������
                {
                    istringstream iss(now_cal);                //ʹ��sstream�ĺ�����ȡ��ֵ 
                    int num;
                    iss>>num;                                  //����ת��Ϊint��ֵ������num��  
					int m1,n1=0,i1=0;                          //i1ָ����� 
	                while(num>0)                               //num����0��ѭ�� 
	                {
	               	    m1=num%10;                             //m1��¼��ǰnum���һλ��                               
	    	            n1+=m1*pow(2,i1);                      //m1����2��i1�η������ӵ�n1�� 
	    	            num/=10;                               
	    	            i1++;                                  //i1��1 
	                }                                                                       
                    number.push(n1);                           //�����ִ�����ջ�� 
                    judge = 1;                                 //������ 
				    break;                                     //���� 
                }
            }
            if(judge!=1)                                       //����������� 
			{
                int y=number.top();                            //y��¼ջ������ 
                number.pop();                                  //�Ƴ�ջ�� 
                int x=number.top();                            //x��¼�µ�ջ��Ԫ�� 
                number.pop();                                  //�Ƴ�ջ�� 
                if(now_cal=="+")                               //����ǼӺ� 
				{
                    number.push(x+y);                          //��x+y��ֵ����ջ�� 
                }
                else if(now_cal=="-")                          //����Ǽ��� 
				{
                    number.push(x-y);                          //��x-y��ֵ����ջ�� 
                }
                else if(now_cal=="*")                          //����ǳ˺� 
				{
                    number.push(x*y);                          //��x*y��ֵ����ջ�� 
                }
                else if(now_cal=="/")                          //����ǳ��� 
				{
                    number.push(x/y);                          //��x/y��ֵ����ջ�� 
                }
            }
            now_cal="";                                        //��յ�ǰ����
        }
    i++;
    }
    if(number.size()!=1)                                       //���ջ������ʣ���Ԫ�ز���һ�� 
    {
    	cout<<"��ʽ����"<<endl;
	}
    else
    {
    	int opt=number.top();                                  //opt����ʮ���Ƶ�ֵ 
	    	int k2[1000],i2=0;                                 //��������k2�����α���i2=0                                              //����ʮ����ss 
		while(opt>0)                                           //opt����0��ѭ�� 
		{
			k2[i2]=opt%2;                                      //��k2����opt��2������ 
			opt/=2;                                            //opt����opt����2 
			i2++;                                              //i2+1 
		}
		for(;i2>0;i2--)                                        //���������һλ��ʼ 
	    {
	    	cout<<k2[i2-1];                                    //������������ 
		}
	}
}

int calculate_16(string suffix)                                //ʮ�����Ƽ��㹦��ʵ�ֺ��� 
{
	stack<int>number;                                          //����ջ
	int i=0,j=0;                                               //iָ���׺��j��¼λ��    
	string now_cal;                                            //��ǰ�ļ��� 
	while(suffix[i]!='!')                                      //��׺���ǽ���������ѭ�� 
	{
		bool judge=0;                                          //�����ж������ֻ��Ƿ��� 
		if(suffix[i]=='|')                                     //����Ƿָ��� 
        {
            for(j=i+1;;j++)                                    //�ӷָ�����ʼѭ�� 
            {
                if(suffix[j]=='|')                             //������һ���ָ������� 
                    break;
                else if(suffix[j]=='!')                        //������������������ 
                    break;
            }
            for(int k=i+1; k<j; k++)                           //�ӷָ�����ʼ�����ָ������߽��������� 
            {
                now_cal+=suffix[k];                            //����֮���Ԫ�� 
            }
            for(int k=0; k<now_cal.size(); k++)                //����֮���Ԫ�ؿ�ʼ������ 
            {
                if((now_cal[k]>='0'&&now_cal[k]<='9')||now_cal[k]=='a'||now_cal[k]=='A'||now_cal[k]=='b'||now_cal[k]=='B'||now_cal[k]=='c'||now_cal[k]=='C'||now_cal[k]=='d'||now_cal[k]=='D'||now_cal[k]=='e'||now_cal[k]=='E'||now_cal[k]=='f'||now_cal[k]=='F')           //���������
                {
                    istringstream iss(now_cal);                //ʹ��sstream�ĺ�����ȡ��ֵ 
                    int num;
                    iss>>hex>>num;                             //����ת��Ϊint��ֵ������num��     
                    number.push(num);                          //�����ִ�����ջ�� 
                    judge = 1;                                 //������ 
				    break;                                     //���� 
                }
            }
            if(judge!=1)                                       //����������� 
			{
                int y=number.top();                            //y��¼ջ������ 
                number.pop();                                  //�Ƴ�ջ�� 
                int x=number.top();                            //x��¼�µ�ջ��Ԫ�� 
                number.pop();                                  //�Ƴ�ջ�� 
                if(now_cal=="+")                               //����ǼӺ� 
				{
                    number.push(x+y);                          //��x+y��ֵ����ջ�� 
                }
                else if(now_cal=="-")                          //����Ǽ��� 
				{
                    number.push(x-y);                          //��x-y��ֵ����ջ�� 
                }
                else if(now_cal=="*")                          //����ǳ˺� 
				{
                    number.push(x*y);                          //��x*y��ֵ����ջ�� 
                }
                else if(now_cal=="/")                          //����ǳ��� 
				{
                    number.push(x/y);                          //��x/y��ֵ����ջ�� 
                }
            }
            now_cal="";                                        //��յ�ǰ����
        }
    i++;
    }
    if(number.size()!=1)                                       //���ջ������ʣ���Ԫ�ز���һ�� 
    {
    	cout<<"��ʽ����"<<endl;
	}
    else
    {
    	cout<<hex<<number.top();                               //ʮ�����Ƶ�ֵ 
	}
}

void math_operation(void)                                      //��ѧ���㹦��ʵ�ֺ��� 
{
	int n;                                                     //nΪ����                             
	cout<<"��������ƣ�";
	cin>>n;
	string ss;                                                 //ss��������ı��ʽ 
	cout<<"��������ʽ��";
	cin>>ss;
	if(n==10)
	{
		cout<<ss<<"="<<calculate(infix_suffix(ss));            //ʮ��������ʵ�ֺ��� 
	}
	else if(n==2)
	{
		cout<<ss<<"=";
		calculate_2(infix_suffix(ss));                         //����������ʵ�ֺ��� 
	} 
	else if(n==16)
	{
		cout<<ss<<"=";
		calculate_16(infix_suffix(ss));                        //ʮ����������ʵ�ֺ��� 
	} 
	else
	{
		cout<<"��ʽ����";                                      
	}
	
}

//���������ܣ�������� 

void function(void)                                            //������㹦��ʵ�ֺ��� 
{
	cout<<"�����뺯�����ʽ";     
	string ss;                                                 //ss��������ı��ʽ 
	cin>>ss;
	if(ss[0]=='s'&&ss[1]=='i'&&ss[2]=='n')                     //�����sin 
	{
		string op;                                             //op�������� 
		for(int i=3;ss[i]!='\0';i++)
		{
			op+=ss[i];                                           
		}
		istringstream iss(op);                                 //��opת��Ϊ��ֵ 
		double num;
		iss>>num;                                              //��opת��Ϊdouble�ʹ�����num�� 
		cout<<sin(num);                                        //���sinֵ 
	}
	else if(ss[0]=='c'&&ss[1]=='o'&&ss[2]=='s')                //�����cos 
	{
		string op;                                             //op�������� 
		for(int i=3;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //��opת��Ϊ��ֵ 
		double num;
		iss>>num;                                              //��opת��Ϊdouble�ʹ�����num�� 
		cout<<cos(num);                                        //���cosֵ 
	}
	else if(ss[0]=='t'&&ss[1]=='a'&&ss[2]=='n')                //�����tan
	{
		string op;                                             //op�������� 
		for(int i=3;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //��opת��Ϊ��ֵ 
		double num;
		iss>>num;                                              //��opת��Ϊdouble�ʹ�����num�� 
		cout<<tan(num);                                        //���tanֵ 
	}
	else if(ss[0]=='a'&&ss[1]=='s'&&ss[2]=='i'&&ss[3]=='n')    //�����arcsin
	{
		string op;                                             //op�������� 
		for(int i=4;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //��opת��Ϊ��ֵ 
		double num;
		iss>>num;                                              //��opת��Ϊdouble�ʹ�����num�� 
		cout<<asin(num);                                       //���asinֵ 
	}
	else if(ss[0]=='c'&&ss[1]=='s'&&ss[2]=='c')                //�����csc
	{
		string op;                                             //op�������� 
		for(int i=3;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //��opת��Ϊ��ֵ 
		double num;
		iss>>num;                                              //��opת��Ϊdouble�ʹ�����num�� 
		cout<<1/sin(num);                                      //���cscֵ 
	}
	else if(ss[0]=='s'&&ss[1]=='e'&&ss[2]=='c')                //�����sec
	{
		string op;                                             //op�������� 
		for(int i=3;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //��opת��Ϊ��ֵ 
		double num;
		iss>>num;                                              //��opת��Ϊdouble�ʹ�����num�� 
		cout<<1/cos(num);                                      //���secֵ 
	}
	else if(ss[0]=='c'&&ss[1]=='o'&&ss[2]=='t')                //�����cot
	{
		string op;                                             //op�������� 
		for(int i=3;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //��opת��Ϊ��ֵ 
		double num;
		iss>>num;                                              //��opת��Ϊdouble�ʹ�����num�� 
		cout<<1/tan(num);                                      //���cotֵ 
	}
	else if(ss[0]=='a'&&ss[1]=='c'&&ss[2]=='o'&&ss[3]=='s')    //�����arccos
	{
		string op;                                             //op�������� 
		for(int i=4;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //��opת��Ϊ��ֵ 
		double num;
		iss>>num;                                              //��opת��Ϊdouble�ʹ�����num�� 
		cout<<acos(num);                                       //���acosֵ 
	}
	else if(ss[0]=='s'&&ss[1]=='q'&&ss[2]=='r'&&ss[3]=='t')    //�����sqrt
	{
		string op;                                             //op�������� 
		for(int i=4;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //��opת��Ϊ��ֵ 
		double num;
		iss>>num;                                              //��opת��Ϊdouble�ʹ�����num�� 
		cout<<sqrt(num);                                       //���sqrtֵ 
	}
	else if(ss[0]=='a'&&ss[1]=='t'&&ss[2]=='a'&&ss[3]=='n')    //�����arctan
	{
		string op;                                             //op�������� 
		for(int i=4;ss[i]!='\0';i++)
		{
			op+=ss[i];
		}
		istringstream iss(op);                                 //��opת��Ϊ��ֵ 
		double num;
		iss>>num;                                              //��opת��Ϊdouble�ʹ�����num�� 
		cout<<atan(num);                                       //���atanֵ 
	}
	else if(ss[0]=='l'&&ss[1]=='o'&&ss[2]=='g')                //�����log
	{
		string op1,op2;                                        //op1,2�������� 
		int i=3;
		for(;ss[i]!='(';i++)                                      
		{
			op1+=ss[i];                                        //op1������� 
		}
		istringstream iss(op1);                                //��op1ת��Ϊ��ֵ 
		double num1;
		iss>>num1;                                             //��op1ת��Ϊdouble�ʹ�����num1�� 
		double q1=log(num1);                                   //q1����logֵ
		i++;
		for(;ss[i]!=')';i++)                                    
		{
			op2+=ss[i];                                        //op2������� 
		}
		istringstream is(op2);                                 //��op2ת��Ϊ��ֵ 
		double num2;
		is>>num2;                                              //��op2ת��Ϊdouble�ʹ�����num2�� 
		double q2=log(num2);                                   //q2����logֵ 
		cout<<q2/q1;                                           //���q2/q1��ֵ 
	}
	else if(ss[0]=='l'&&ss[1]=='n')                            //�����ln
	{
		string op;                                             //op�������� 
		for(int i=2;ss[i]!='\0';i++)                                      
		{
			op+=ss[i];                                         //op������� 
		}
		istringstream iss(op);                                 //��opת��Ϊ��ֵ 
		double num;
		iss>>num;                                              //��opת��Ϊdouble�ʹ�����num�� 
		cout<<log(num)/log(2.718281);                          //���lnֵ 
	}
	else                                                       //������ݺ��� 
	{
		string op1,op2;                                        //op1��2��������                          
		int i=0;
		for(;ss[i]!='^';i++)           
		{
			op1+=ss[i];                                        //op1������� 
		}
		istringstream iss(op1);                                //��op1ת��Ϊ��ֵ 
		double num1;
		iss>>num1;                                             //��op1ת��Ϊdouble�ʹ�����num1�� 
		i++;
		for(;ss[i]!='\0';i++)
		{
			op2+=ss[i];                                        //op2����ָ�� 
		}
		istringstream is(op2);                                 //��ָ��ת��Ϊ��ֵ 
		double num2;
		is>>num2;                                              //��op2ת��Ϊdouble�ʹ�����num2�� 
		cout<<pow(num1,num2);                                  //���num1��num2�η� 
	}
} 

//���ĸ����ܣ���С�Ƚ�
 
int put_in(int a)                                              //�Ƚϴ�С�������뺯�� 
{
	int ss;                                                    //��������� 
	if(a==8)                                                   //����ǰ˽��� 
	{
		cin>>oct>>ss;
	}
	else if(a==10)                                             //�����ʮ���� 
	{
		cin>>dec>>ss;
	}
	else if(a==16)                                             //�����ʮ������ 
	{
		cin>>hex>>ss;
	}
	else if(a==2)                                              //����Ƕ����� 
	{
		cin>>ss;
		int m,n=0,i=0;                                         //�趨���α���m,n,i=0 
	    while(ss>0)                                            //ss����0��ѭ�� 
	    {
	    	m=ss%10;                                           //m��¼��ǰss���һλ��                               
	    	n+=m*pow(2,i);                                     //m����2��i�η������ӵ�n�� 
	    	ss/=10;                                            
	    	i++;                                               //i��1 
	    }
		ss=n;                                                  //��n��ֵ����ss  
	}
	return ss;                                                 //����ֵΪss 
}

void put_out(int m,int n)                                      //�Ƚϴ�С����������� 
{
	if(m==8)                                                   //����ǰ˽��� 
	{
		cout<<oct<<n<<"��";
	}
	else if(m==10)                                             //�����ʮ���� 
	{
		cout<<dec<<n<<"��";
	}
	else if(m==16)                                             //�����ʮ������ 
	{
		cout<<hex<<n<<"��";
	} 
	else if(m==2)                                              //����Ƕ����� 
	{
		int k[1000],i=0;                                       //��������k�����α���i=0 
		while(n>0)                                            
		{
			k[i]=n%2;                                          //��k����ss��2������ 
			n/=2;                                              //ss����ss����2 
			i++;                                               //i+1 
		}
		for(;i>0;i--)                                          //���������һλ��ʼ 
	    {
	    	cout<<k[i-1];                                      //������������ 
		}
		cout<<"��";
	}
}

void compare_with(void)                                        //��С�ȽϹ���ʵ�ֺ��� 
{
	int a,b,c,d;                                               //a��bΪ��һ���������ֽ��� 
	cout<<"�������һ�����ֵĽ��ƣ�";
    cin>>dec>>a; 
	cout<<"�������һ�����֣�";
	c=put_in(a);                                               //c��dΪ��һ���������ֵ�ֵ 
	cout<<"������ڶ������ֵĽ��ƣ�";
	cin>>dec>>b;
	cout<<"������ڶ������֣�";
	d=put_in(b);
	int k=c-d;                                                 //ͨ��c-d���������Ƚϴ�С 
	if(k>0)                                                    //kΪ����c��      
	{
		put_out(a,c);
	}
	else if(k<0)                                               //kΪ��˵��d�� 
	{
		put_out(b,d);
	}
	else if(k==0)                                              //����0��һ���� 
	{
		cout<<"һ����";                                         
	}
}

//��������ܣ��������빫Լ��
 
void com_div_mul(void)                                         //���Լ������С������ʵ�ֺ��� 
{
	int a,b;                                                   //a,b�ֱ�Ϊ������ֵ  
	int m,n;                                                   //mΪ���Լ����nΪ��С������ 
	cout<<"�������ֱַ�Ϊ:"<<endl;
	cin>>a>>b;
	if((a<=0)||(b<=0))                                         //���ĳ����С�ڻ����0���ʽ���� 
	{
		cout<<"��ʽ����"; 
	} 
	for(int i=1;(i<=a)&&(i<=b);i++)                            //��i=1��ʼѭ������С���� 
	{
		if((a%i==0)&&(b%i==0))                                 //�����i����������0 
		{
			m=i;                                               //m����Ϊi��ֵ 
		}
	} 
	for(int i=a;;i++)                                          //��ĳһ������ʼ 
	{
		if(i%a==0&&i%b==0)                                     //����и���������������������0 
		{
			n=i;                                               //nΪ��С������������ѭ�� 
			break;
		}
	} 
	cout<<"���Լ��Ϊ��"<<m<<endl;
	cout<<"��С������Ϊ��"<<n;
} 

//���������ܣ�����
 
void function_solve(void)                                      //��������ʵ�ֺ��� 
{
	int a;                                                     
	cout<<"ʹ��һԪһ�κ���������1��"<<endl;
	cout<<"ʹ��һԪ���κ���������2��"<<endl;
	cout<<"ʹ�÷���������������3��"<<endl;
	cout<<"ʹ��ָ������������4��"<<endl; 
    cout<<"ʹ�ö�������������5��"<<endl;
    cin>>a;
	if(a==1)                                                   //�����һԪһ�κ��� 
	{
		cout<<"y=ax+b"<<endl;                                   
		cout<<"������a��";
		double x;                                              //x��¼a��ֵ 
		cin>>x;
		cout<<"������b��";
		double y;                                              //y��¼b��ֵ 
		cin>>y;
		int m;                                                 //mΪ�Ա���x 
		while(1)                                               //һֱѭ�� 
		{ 
			cout<<"������x��";                                 //����x��ֵ 
			cin>>m;                                          
			cout<<"y="<<x*m+y;                                 //���y��ֵ                      
			cout<<endl;
		}
	} 
	else if(a==2)                                              //�����һԪ���κ��� 
	{
		cout<<"y=ax^2+bx+c"<<endl;                                   
		cout<<"������a��";
		double x;                                              //x��¼a��ֵ 
		cin>>x;
		cout<<"������b��";
		double y;                                              //y��¼b��ֵ 
		cin>>y;
		cout<<"������c��";
		double z;                                              //z��¼c��ֵ
		cin>>z; 
		int m;                                                 //mΪ�Ա���x 
		while(1)                                               //һֱѭ�� 
		{ 
			cout<<"������x��";                                 //����x��ֵ 
			cin>>m;   
			int k=x*m*m+y*m+z;                                 //kΪyֵ                                       
			cout<<"y="<<k;                                     //���y��ֵ                      
			cout<<endl;
		}
	} 
	else if(a==3)                                              //����Ƿ��������� 
	{
		cout<<"y=k/x"<<endl;                                   
		cout<<"������k��";
		double x;                                              //x��¼k��ֵ 
		cin>>x;
		int m;                                                 //mΪ�Ա���x 
		while(1)                                               //һֱѭ�� 
		{ 
			cout<<"������x��";                                 //����x��ֵ 
			cin>>m; 
			if(m==0)
			{
				cout<<"��ʽ����"<<endl; 
				continue;
			}                                         
			cout<<"y="<<x/m;                                   //���y��ֵ                      
			cout<<endl;
		}
	} 
	else if(a==4)                                              //�����ָ������ 
	{
		cout<<"y=a^x"<<endl;                                   
		cout<<"������a��";
		double x;                                              //x��¼a��ֵ 
		cin>>x;
		if(x<=0)                                               //aС�ڻ����0�����϶��� 
		{
			cout<<"��ʽ����"<<endl;
		}
		else
		{
			int m;                                             //mΪ�Ա���x 
		    while(1)                                           //һֱѭ�� 
		    { 
			    cout<<"������x��";                             //����x��ֵ 
			    cin>>m;                                          
			    cout<<"y="<<pow(x,m);                          //���y��ֵ                      
			    cout<<endl;
	     	}
		}
	} 
	else if(a==5)                                              //����Ƕ������� 
	{
		cout<<"y=loga(x)"<<endl;                                   
		cout<<"������a��";
		double x;                                              //x��¼a��ֵ 
		cin>>x;
		if((x<=0)||(x==1))                                     //aС�ڻ����0��a����1�����϶��� 
		{
			cout<<"��ʽ����"<<endl;
		}
		else
		{
			int m;                                             //mΪ�Ա���x 
		    while(1)                                           //һֱѭ�� 
		    { 
			    cout<<"������x��";                             //����x��ֵ 
			    cin>>m;  
				if(m>0)                                        
			    {
			    	cout<<"y="<<log(m)/log(x);                 //���y��ֵ                      
			        cout<<endl;
				}
				else                                           //����С�ڵ���0�����϶��� 
				{
					cout<<"��ʽ����"<<endl;
				}
	     	}
		}
	} 
	else
	{
		cout<<"��ʽ����"<<endl;
	}
}

//���߸����ܣ��������
 
void solve_two(string ss,int &a,int &b,int &c)                  //����һԪ���η����������Ҳ�abc��ֵ 
{
	int n=ss.length();                                          //ss���� 
	int start=0;                                                //ָ��ÿһ�� 
	vector<string>op;                                           //������ݵ����� 
	for(int i=0;i<n;i++)
	{
		if(ss[i]=='+')
		{
			op.push_back(ss.substr(start,i-start));             //����ǼӺż�¼�ϸ����ŵ��Ӻ���ǰ������
			start=i+1;                                          //�ӺŲ���Ҫ����¼��ָ��Ӻŵ���һ������ 
		}
		else if(ss[i]=='-')
        {
            op.push_back(ss.substr(start,i-start));             //����Ǽ��ż�¼�ϸ����ŵ�������ǰ������ 
            start=i;                                            //���������¸����ݣ����������Ӽ��ſ�ʼ��¼                                    
        }
		else if(i==n-1)
        {
        	op.push_back(ss.substr(start,i-start+1));           //��������һ�������ˣ���ô����һ�����ſ�ʼ��¼ 
		}
	} 
	for(int i=0;i<op.size();i++)
	{
		if (op[i].length()>2&&op[i][op[i].length()-2]=='^')     //����Ƕ����� 
        {
            if (op[i][0]=='x')                                  //���ϵ����1 
            {
            	a+=1;                                           //������ϵ����1 
			}
            else if (op[i][0]=='-'&&op[i][1]=='x')              //���ϵ����-1 
            {
             	a+=-1;                                          //������ϵ����1 
			}   
            else                                                //���� 
            {
            	istringstream iss(op[i].substr(0,op[i].length()-3));//�����ݶ�ת��Ϊ��ֵ  
            	double num;
            	iss>>num;                                       //������double�͵�num�� 
            	iss.clear();
            	a+=num;                                         //������ϵ������numֵ 
			}
        }
        else if(op[i][op[i].length()-1]=='x')                   //�����һ���� 
        {
            if (op[i][0]=='x')                                  //���ϵ����1        
            {
             	b+=1;                                           //һ����ϵ����һ 
			}  
            else if (op[i][0]=='-'&&op[i][1]=='x')              //���ϵ����-1 
            {
              	b+=-1;                                          //һ����ϵ����1 
			} 
            else                                                //���� 
            {
            	istringstream iss(op[i].substr(0,op[i].length()-1));   //������ת��Ϊ��ֵ 
            	double num;            
            	iss>>num;                                       //������double�͵�num�� 
            	iss.clear();
            	b+=num;                                         //һ����ϵ������num 
		    }
		}
		else                                                    //����ǳ����� 
        {
        	istringstream iss(op[i].substr(0,op[i].length()));  //������ת��Ϊ��ֵ  
            double num;
            iss>>num;                                           //������double�͵�num�� 
            iss.clear();
            c+=num;                                             //���������num 
        }
    } 
}

void equation_two(void)                                         //һԪ���η�����⺯�� 
{
	string ss,ss_l,ss_r;                                        //�ֱ𴢴��ܷ��̣��Ⱥ�������ݣ��Ҳ�����
	cin>>ss;
	int i=0;                                                    //iΪss��ָ�� 
	int l=ss.length();                                          //ss����
	double delta;                                               //delta=b^2-4ac
	int al=0,bl=0,cl=0,ar=0,br=0,cr=0;                          //�Ⱥ���������a��b��c��ֵ 
	for(;ss[i]!='=';i++);
	ss_l=ss.substr(0,i);                                        //��ȡ�Ⱥ�����ַ��� 
	solve_two(ss_l,al,bl,cl);
    if(ss[i+1]=='0')                                            //����ұ�Ϊ0                  
	{
		delta=bl*bl-4*al*cl; 
		if(delta<0)                                             //��С��0�޽� 
	    {
		    cout<<"������ʵ����";
	    }
	    else
	    {
		    cout<<"x1="<<(-bl-sqrt(delta))/2/al<<" "<<"x2="<<(-bl+sqrt(delta))/2/al<<endl; 
	    }  
	}
	else
	{
		ss_r=ss.substr(i+1,l-i-1);                                //��ȡ�Ⱥ��ұ��ַ��� 
		solve_two(ss_r,ar,br,cr);
	    int a=al-ar;                                              //aֵΪ���a��ȥ�Ҳ�a 
	    int b=bl-br;                                              //bֵΪ���b��ȥ�Ҳ�b 
	    int c=cl-cr;                                              //cֵΪ���c��ȥ�Ҳ�c 
	    delta=b*b-4*a*c;                                   
	    if(delta<0)                                               //��С��0�޽� 
	    {
		    cout<<"������ʵ����";
	    }
	    else
	    {
		    cout<<"x1="<<(-b-sqrt(delta))/2/a<<" "<<"x2="<<(-b+sqrt(delta))/2/a<<endl;    
	    } 
	}
}

void solve_one(string ss,double &a,double &b)                   //����һԪһ�η����������Ҳ�ab��ֵ 
{
	int n=ss.length();                                          //ss���� 
	int start=0;                                                //ָ��ÿһ�� 
	vector<string>op;                                           //��ŷֶ����ݵ����� 
	for(int i=0;i<n;i++)
	{
		if(ss[i]=='+')
		{
			op.push_back(ss.substr(start,i-start));             //����ǼӺż�¼�ϸ����ŵ��Ӻ���ǰ������
			start=i+1;                                          //�ӺŲ���Ҫ����¼��ָ��Ӻŵ���һ������ 
		}
		else if(ss[i]=='-')
        {
            op.push_back(ss.substr(start,i-start));             //����Ǽ��ż�¼�ϸ����ŵ�������ǰ������ 
            start=i;                                            //���������¸����ݣ����������Ӽ��ſ�ʼ��¼                                    
        }
		else if(i==n-1)
        {
        	op.push_back(ss.substr(start,i-start+1));           //��������һ�������ˣ���ô����һ�����ſ�ʼ��¼ 
		}
	} 
	for(int i=0;i<op.size();i++)
	{
        if(op[i][op[i].length()-1]=='x')                        //�����һ���� 
        {
            if (op[i][0]=='x')                                  //���ϵ����1        
            {
             	a+=1;                                           //һ����ϵ����һ 
			}  
            else if (op[i][0]=='-'&&op[i][1]=='x')              //���ϵ����-1 
            {
              	a+=-1;                                          //һ����ϵ����1 
			} 
            else                                                //���� 
            {
            	istringstream iss(op[i].substr(0,op[i].length()-1));   //������ת��Ϊ��ֵ 
            	double num;            
            	iss>>num;                                       //������double�͵�num�� 
            	iss.clear();
            	a+=num;                                         //һ����ϵ������num 
		    }
		}
		else                                                    //����ǳ����� 
        {
        	istringstream iss(op[i].substr(0,op[i].length()));  //������ת��Ϊ��ֵ  
            double num;
            iss>>num;                                           //������double�͵�num�� 
            iss.clear();
            b+=num;                                             //���������num 
        }
    } 
}

void equation_one(void)                                         //һԪһ�η�����⺯�� 
{
	string ss,ss_l,ss_r;                                        //�ֱ𴢴��ܷ��̣��Ⱥ�������ݣ��Ҳ�����
	cin>>ss;
	int i=0;                                                    //iΪss��ָ�� 
	int l=ss.length();                                          //ss����
	double al=0,bl=0,ar=0,br=0;                                 //�Ⱥ���������a��b��ֵ 
	for(;ss[i]!='=';i++);
	ss_l=ss.substr(0,i);                                        //��ȡ�Ⱥ�����ַ��� 
	solve_one(ss_l,al,bl);
    if(ss[i+1]=='0')                                            //����Ҳ�ֻ��0 
	{
		cout<<"x="<<-bl/al;
	}
	else
	{
		ss_r=ss.substr(i+1,l-i-1);                              //��ȡ�Ⱥ��ұ��ַ��� 
		solve_one(ss_r,ar,br);
	    double a=al-ar;                                         //aֵΪ���a��ȥ�Ҳ�a
	    double b=bl-br;                                         //bֵΪ���b��ȥ�Ҳ�b 
	    cout<<"x="<<-b/a<<endl;    
	}
}

void solve_anti(string ss,int &a,int &b)                        //���ط����������������Ҳ�ab��ֵ 
{
	int n=ss.length();                                          //ss���� 
	int start=0;                                                //ָ��ÿһ�� 
	vector<string>op;                                           //��ŷֶ����ݵ����� 
	for(int i=0;i<n;i++)
	{
		if(ss[i]=='+')
		{
			op.push_back(ss.substr(start,i-start));             //����ǼӺż�¼�ϸ����ŵ��Ӻ���ǰ������
			start=i+1;                                          //�ӺŲ���Ҫ����¼��ָ��Ӻŵ���һ������ 
		}
		else if(ss[i]=='-')
        {
            op.push_back(ss.substr(start,i-start));             //����Ǽ��ż�¼�ϸ����ŵ�������ǰ������ 
            start=i;                                            //���������¸����ݣ����������Ӽ��ſ�ʼ��¼                                    
        }
		else if(i==n-1)
        {
        	op.push_back(ss.substr(start,i-start+1));           //��������һ�������ˣ���ô����һ�����ſ�ʼ��¼ 
		}
	} 
	for(int i=0;i<op.size();i++)
	{
        if(op[i][op[i].length()-1]=='x')                        //�����x�� 
        {
            if (op[i][0]=='x')                                  //���ϵ����1        
            {
             	a+=1;                                           //һ����ϵ����һ 
			}  
            else if (op[i][0]=='-'&&op[i][1]=='x')              //���ϵ����-1 
            {
              	a+=-1;                                          //һ����ϵ����1 
			} 
            else                                                //���� 
            {
            	istringstream iss(op[i].substr(0,op[i].length()-1));   //������ת��Ϊ��ֵ 
            	double num;            
            	iss>>num;                                       //������double�͵�num�� 
            	iss.clear();
            	a+=num;                                         //һ����ϵ������num 
		    }
		}
		else                                                    //����ǳ����� 
        {
        	istringstream iss(op[i].substr(0,op[i].length()));  //������ת��Ϊ��ֵ  
            double num;
            iss>>num;                                           //������double�͵�num�� 
            iss.clear();
            b+=num;                                             //���������num 
        }
    } 
}

void equation_anti(void)                                        //������������⺯�� 
{
	string ss,ss_l,ss_r;                                        //�ֱ𴢴��ܷ��̣��Ⱥ�������ݣ��Ҳ�����
	cin>>ss;
	int i=0;                                                    //iΪss��ָ�� 
	int l=ss.length();                                          //ss����
	double al=0,bl=0,ar=0,br=0;                                 //�Ⱥ���������a��b��ֵ 
	for(;ss[i]!='=';i++);
	ss_l=ss.substr(0,i);                                        //��ȡ�Ⱥ�����ַ��� 
	solve_one(ss_l,al,bl);
    if(ss[i+1]=='0')                                            //����Ҳ�ֻ��0 
	{
		cout<<"x="<<-al/bl;
	}
	else
	{
		ss_r=ss.substr(i+1,l-i-1);                              //��ȡ�Ⱥ��ұ��ַ��� 
		solve_one(ss_r,ar,br);
	    double a=al-ar;                                         //aֵΪ���a��ȥ�Ҳ�a
	    double b=bl-br;                                         //bֵΪ���b��ȥ�Ҳ�b 
	    cout<<"x="<<-a/b<<endl;    
	}
}

void equation_log(void)                                         //����������⺯�� 
{
	string ss;                                                  //������������� 
	cin>>ss;
	int i=3;                                                    //�����ֿ�ʼ 
	string op1,op2;
	for(;ss[i]!='x';i++)
	{
		op1+=ss[i];                                                              
	}
	istringstream iss(op1);                                     //������ת��Ϊ��ֵ�� 
	double num1;
	iss>>num1;                                                  //ת��Ϊdouble�ʹ�����num1�� 
	i+=2;
	for(;ss[i]!='\0';i++)
	{
		op2+=ss[i];                                             //�ڶ������ֵĴ��� 
	} 
	istringstream is(op2);                                      //������ת��Ϊ��ֵ                       
	double num2;                              
	is>>num2;                                                   //ת��Ϊdouble�ʹ�����num2�� 
	cout<<"x="<<pow(num1,num2);                                 //���x��ֵ 
} 

void equation_indix(void)                                       //ָ��������⺯��
{
	string ss;                                                  //ss������������ 
	cin>>ss; 
	int i=0;                                                    //iΪssָ�� 
	string op1,op2;                                             //������������ 
	for(;ss[i]!='^';i++)
	{
		op1+=ss[i];                                             //op1��¼��һ������ 
	} 
	istringstream iss(op1);                                     //��op1ת��Ϊ��ֵ 
	double num1;
	iss>>num1;                                                  //����double�͵�num1��             
	for(;ss[i]!='=';i++);
	i++; 
	for(;ss[i]!='\0';i++)
	{
		op2+=ss[i];                                             //op2��¼�ڶ������� 
	}
	istringstream is(op2);                                      //��op2ת��Ϊ��ֵ 
	double num2;
	is>>num2;                                                   //����double�͵�num2�� 
	cout<<"x="<<log(num2)/log(num1);                            //������ 
} 

void solve_equation(void)                                       //�������ʵ�ֺ��� 
{
	cout<<"��һԪһ�η��̽�������1��"<<endl;   
	cout<<"��һԪ���η��̽�������2��"<<endl;
	cout<<"�󷴱������̽�������3��"<<endl;
	cout<<"��ָ�����̽�������4��"<<endl;
	cout<<"��������̽�������5��"<<endl; 
	int a;
	cin>>a;
	if(a==1)
	{
		equation_one();                                         //һԪһ�η�����⺯�� 
	}
	else if(a==2)
	{
		equation_two();                                         //һԪ���η�����⺯�� 
	}
	else if(a==3)
	{
		equation_anti();                                        //������������⺯�� 
	}
	else if(a==4)
	{
	    equation_indix();                                       //ָ��������⺯�� 
	}
	else if(a==5)
	{
	    equation_log();                                         //����������⺯�� 
	} 
	else
	{
		cout<<"��ʽ����"<<endl; 
	} 
}
 
//main����
 
int main(void)
{
	cout<<"��ӭ����������..."<<endl;
	cout<<"ʹ�ý���ת������������1��"<<endl;
	cout<<"ʹ�����㹦��������2��" <<endl;
	cout<<"ʹ��������㹦��������3��"<<endl;
	cout<<"ʹ�ô�С�ȽϹ���������4��"<<endl;
	cout<<"ʹ�ù�Լ��������������������5��"<<endl;
	cout<<"ʹ�ú�������������6��"<<endl; 
	cout<<"ʹ�÷�����⹦��������7��"<<endl; 
	cout<<"�˳�������0��"<<endl; 
    int n;
    cin>>n;
    if(n==0)
    {
    	cout<<"��ӭ�´�ʹ��..."<<endl;
		return 0; 
	}
	else if(n==1)                                             
	{
		binary_use();                                         //ʹ�ý���ת������ 
	}
    else if(n==2)                                             
	{
	    math_operation();                                     //ʹ����ѧ���㹦��           
	} 
	else if(n==3)
	{
		function();                                           //ʹ��������㹦�� 
	} 
	else if(n==4)
    {
    	compare_with();                                       //ʹ�ô�С�ȽϹ���                            
	}
	else if(n==5)
	{
		com_div_mul();                                        //ʹ�������Լ������С���������� 
	}
    else if(n==6)
    {
    	function_solve();                                     //ʹ�ú������� 
	}
	else if(n==7)
	{
		solve_equation();                                     //ʹ�÷�����⹦�� 
	}
	else
	{
		cout<<"��ʽ����"; 
	} 
	return 0;
}

