#include <bits/stdc++.h>
using namespace std;

int p=0;
class Node
{
    public:
	map<char,Node*> child;
	bool isLast;
	Node()
	{
        for (char i = 'a'; i <= 'z'; i++)
        child[i] = NULL;
		isLast = false;
	}
};

struct p
{
    int y;
    string z;
} c[10];


Node *root = NULL;
void insert(string s)
{
	int len = s.length();
    Node *ptr = root;
	for (int i = 0; i < len; i++)
	{
        Node *nextNode = ptr->child[s[i]];
		if (nextNode == NULL)
		{
            nextNode = new Node();
            ptr->child[s[i]] = nextNode;
		}
		ptr = nextNode;
		if (i == len - 1)
			ptr->isLast = true;
	}
}
void displayNode(Node *curNode, string prefix)
{
	if (curNode->isLast)
		cout << prefix << endl;
	for (char i = 'a'; i <= 'z'; i++)
	{
		Node *nextNode = curNode->child[i];
		if (nextNode != NULL)
			displayNode(nextNode, prefix + (char)i);
	}
}
void display(string str)
{
	Node *prevNode = root;
	string prefix = "";
	int len = str.length();
	int i;
	for (i=0; i<len; i++)
	{
        prefix += (char)str[i];
		char lastChar = prefix[i];
		Node *curNode = prevNode->child[lastChar];
		if (curNode == NULL)
		{
		    cout<<endl;
			cout<< "\n\t\tNo Results Found for : "<< prefix<<endl;

		}

        cout<<endl<< "\n\t\tSuggestions based on " << prefix << " are :"<<endl;
		displayNode(curNode, prefix);
		prevNode = curNode;
	}
	for (; i<len; i++)
	{
		prefix += (char)str[i];
		cout << "\n\t\tNo Results Found for : " << prefix <<endl;
        ::p=1;
	}

}
void insertintotree(string contacts[],int n)
{
	root = new Node();
	for (int i = 0; i < n; i++)
		insert(contacts[i]);
}

void files(){

    ofstream file1;
    file1.open("f1.txt");
    file1<<"car car car bike bike car van bus bus van van auto bike cart cart cart cart cart cart cart cart cart van van bike bus bus bike bike bus car bike bike car auto bus bike bike bus van van van van van van van ";
    file1.close();

    ofstream file2("f2.txt");
    file2<<"car bus van bus bike van van ant van bus bus van van van auto cart cart cart cart auto bus bike van van van bus auto auto bus bus auto bike auto cart cart bus bus auto auto bus bike bus bus bus ";
    file2.close();

    ofstream file3("f3.txt");
      file3<<"car car car bus bus bus bus bus ant ant bus bus bus bus bus auto auto auto cart cart cart cart cart cart cart cart cart cart cart auto auto bike bike bike bike bike bike bike bike van van van van van van car";
    file3.close();

    ofstream file4("f4.txt");
    file4<<"car car car car bus auto auto auto ant ant ant auto auto auto auto cart cart auto auto auto auto auto bike bike bike van van van van van van van van van van van car car car car";
    file4.close();

    ofstream file5("f5.txt");
    file5<<"car car car bus bus bus bus bus bus bus bus ant ant ant ant bus auto auto auto cart cart cart cart cart cart cart cart bike bike bike bike bike bike van van van van van van van car car car car";
    file5.close();

    ofstream file6("f6.txt");
    file6<<"car car car bus bus bus bus bus bus bus bus bus ant ant ant ant ant bus bus cart bus auto auto auto auto bike bike van van van van van van van van van";
    file6.close();

    ofstream file7("f7.txt");
    file7<<"car car car car car car car bus bus bus auto auto auto auto auto auto ant ant ant ant ant ant  bike bike bike cart cart cart cart cart cart cart cart cart cart cart cart bike bike bike bike bike bike bike bike bike bike van van van van car car car";
    file7.close();

    ofstream file8("f8.txt");
    file8<<"car bus bus bus bus bus bus car auto auto auto cart cart cart ant ant ant ant ant ant ant ant cart auto auto auto auto auto auto auto bike bike bike bike bike van van van van van van van van";
    file8.close();

    ofstream file9("f9.txt");
    file9<<"car bus auto auto auto auto auto auto auto auto cart cart cart ant ant ant ant ant ant ant cart cart cart cart auto auto auto auto auto auto van bike bike bike bike bike bike bike bus car car car car car car car car car car car";
    file9.close();

    ofstream file10("f10.txt");
    file10<<"car bus auto car auto van van bus auto bus bus cart cart ant ant ant ant ant ant ant ant ant ant cart bus bus bus bus auto auto auto auto auto auto bike bike bike bike bike bike bike bike bike bike bike car car car";
    file10.close();

}


int check(string word)
{
    int a[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i,j,temp;
    int b[10];
    string x;
    c[0].y=0;
    c[0].z= "one";
    c[1].y=1;
    c[1].z= "two";
    c[2].y=2;
    c[2].z="three";
    c[3].y=3;
    c[3].z= "four";
    c[4].y=4;
    c[4].z= "five";
    c[5].y=5;
    c[5].z= "six";
    c[6].y=6;
    c[6].z= "seven";
    c[7].y=7;
    c[7].z= "eight";
    c[8].y=8;
    c[8].z= "nine";
    c[9].y=9;
    c[9].z= "ten";


    ifstream fileone;
    fileone.open("f1.txt");
    while(fileone>>x)
    {
        if(x.compare(word)==0)
            a[0]++;
    }
    fileone.close();

    ifstream filetwo("f2.txt");
    while(filetwo>>x)
    {

        if(x.compare(word)==0)
            a[1]++;
    }
    filetwo.close();

    ifstream filethree("f3.txt");
    while(filethree>>x)
    {
        if(x.compare(word)==0)
            a[2]++;
    }
    filethree.close();

    ifstream filefour("f4.txt");
    while(filefour>>x)
    {
        if(x.compare(word)==0)
            a[3]++;
    }
    filefour.close();

    ifstream filefive("f5.txt");
    while(filefive>>x)
    {
        if(x.compare(word)==0)
            a[4]++;
    }

    filefive.close();

    ifstream filesix("f6.txt");
    while(filesix>>x)
    {
        if(x.compare(word)==0)
            a[5]++;
    }
    filesix.close();

    ifstream fileseven("f7.txt");
    while(fileseven>>x)
    {

        if(x.compare(word)==0)
            a[6]++;
    }
    fileseven.close();

    ifstream fileeight("f8.txt");
    while(fileeight>>x)
    {
        if(x.compare(word)==0)
            a[7]++;
    }
    fileeight.close();

    ifstream filenine("f9.txt");
    while(filenine>>x)
    {
        if(x.compare(word)==0)
            a[8]++;
    }
    filenine.close();

    ifstream fileten("f10.txt");
    while(fileten>>x)
    {
        if(x.compare(word)==0)
            a[9]++;
    }
    fileten.close();
    if (a[0]==0)
    {

    cout<<"No occurrence";
    exit(0);
    }
    for(i=0;i<10;i++)
        b[i]=a[i];


    for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				temp  =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[i]==b[j])

               cout<<"\n\t\tFile "<<c[j].z<<" has "<<a[i]<<" occurrences of "<<word ;
        }
    }
	cout<<"\n\t\t";

	return 0;

}


void openfiles(int num)
{
    string x;
    if(num==1)
    {
        ifstream fileo("f1.txt");
    while(fileo>>x)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    fileo.close();
    }

    if(num==2)
    {
        ifstream fileo("f2.txt");
    while(fileo>>x)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    fileo.close();
    }

    if(num==3)
    {
        ifstream fileo("f3.txt");
    while(fileo>>x)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    fileo.close();
    }

    if(num==4)
    {
        ifstream fileo("f4.txt");
    while(fileo>>x)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    fileo.close();
    }

    if(num==5)
    {
        ifstream fileo("f5.txt");
    while(fileo>>x)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    fileo.close();
    }

    if(num==6)
    {
        ifstream fileo("f6.txt");
    while(fileo>>x)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    fileo.close();
    }

    if(num==7)
    {
        ifstream fileo("f7.txt");
    while(fileo>>x)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    fileo.close();
    }

    if(num==8)
    {
        ifstream fileo("f8.txt");
    while(fileo>>x)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    fileo.close();
    }

    if(num==9)
    {
        ifstream fileo("f9.txt");
    while(fileo>>x)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    fileo.close();
    }

    if(num==10)
    {
        ifstream fileo("f10.txt");
    while(fileo>>x)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    fileo.close();
    }

}
int main()
{
    string words[] ={"car","cart","cold","bike","bus","bucket","van","vase","voice","auto","audio","ant"};
	int n = sizeof(words)/sizeof(string);
	insertintotree(words, n);
	string prefix;
	string fname;
	cout<<"\n\t\t\t\t\t::::WORD RECOMMENDATION::::";
	cout<<"\n\n\t\tEnter string to be searched for: ";
	cin>>prefix;
    cout<<endl;
	display(prefix);
    if(p==1)
        exit(0);

    string wsearch;
    cout<<"\n\n\t\tSelect any word from the suggested list:\t";
    cin>>wsearch;
    cout<<"\n\t\t\t\t\t::::SEARCH ENGINE OPTIMIZATION::::\n";
    files();
    check(wsearch);

    int num;
    cout<<"\n\t\tWhich file you wish to open? ";
    cin>>num;
    openfiles(num);

	return 0;
}
