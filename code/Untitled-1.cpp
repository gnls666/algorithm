#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, s, d;
    cin>>n>>m>>s>>d;
    int city[n];
    for(int i = 0; i < n; i++)
        cin>>city[i];



}
// int main()
// {
// 	int n;
// 	cin>>n;
// 	vector<int> v1, v2;
// 	for(int i = 0; i < n; i++)
// 	{
// 		int inte;
// 		cin>>inte;
// 		v1.push_back(inte);
// 	}
// 	for(int i = 0; i < n; i++)
// 	{
// 		int inte;
// 		cin>>inte;
// 		v2.push_back(inte);
// 	}
// 	stack<int> s;
// 	int len = n;
// 	int cnt = 0;
// 	queue<int> q;
// 	while(1)
// 	{
// 		if(v2[cnt] == v1[len - 1])
// 		{
// 			len = 

// 		}
// 		cnt = (cnt + 1) % len;

// 	}

		

// 	return 0;
// }

// #include <iostream>
// #include <queue>
// #define N 5
// using namespace std;
// int maze[N][N] = {
//     { 0, 1, 1, 0, 0 },
//     { 0, 0, 1, 1, 0 },
//     { 0, 1, 1, 1, 0 },
//     { 1, 0, 0, 0, 0 },
//     { 0, 0, 1, 1, 0 }
// };
// int visited[N + 1] = { 0, };
// void BFS(int start)
// {
//     queue<int> Q;
//     Q.push(start);
//     visited[start] = 1;
//     while (!Q.empty())
//     {
//         int front = Q.front();
//         cout << front << " ";
//         Q.pop();
//         for (int i = 1; i <= N; i++)
//         {
//             if (!visited[i] && maze[front - 1][i - 1] == 1)
//             {
//                 visited[i] = 1;
//                 Q.push(i);
//             }
//         }
//     }
// }
// int main()
// {
//     for (int i = 1; i <= N; i++)
//     {
//         if (visited[i] == 1)
//             continue;
//         BFS(i);
//     }
//     return 0;
// }



// int main()
// {
// 	int n;
// 	cin>>n;
// 	int cnt = 0;
// 	multimap<int, int> m[n];
// 	int book1[1010], book2[1010];
// 	int ti[n], me[n];
// 	for(int i = 0; i < 1010; i++)
// 	{
// 		book1[i] = -1;
// 	}
// 	for(int i = 0; i < n; i++)
// 	{
// 		ti[i] = 0;
// 		me[i] = 0;
// 	}

// 	while(1)
// 	{
// 		int a;
// 		char b;
// 		cin>>a>>b;
// 		getchar();
// 		int hh, mm;
// 		scanf("%02d:%02d", &hh, &mm);
// 		if(b == 'S')
// 		{
// 			book1[a] = hh * 60 + mm;
			
// 		}
			
// 		else
// 		{
// 			book2[a] = hh * 60 + mm;
// 			if(book1[a] != -1)
// 			{
// 				me[cnt] += book2[a] - book1[a];
// 				ti[cnt]++;
//                 book1[a] = -1;

// 			}
				

// 		}
// 		if(a == 0)
// 		{
// 			cnt++;
// 			for(int i = 0; i < 1010; i++)
// 			{
// 				book1[i] = -1;
// 			}
// 			if(cnt == n)
// 				break;
// 		}

// 	}
// 	for(int i = 0; i < n; i++)
// 	{
// 		if(ti[i])
// 		{
			
// 			double t = me[i] * 1.0 / ti[i];
// 			cout<<ti[i]<<" "<<int(t + 0.5)<<endl;
			
// 		}
// 		else
// 			cout<<"0 0"<<endl;
// 	}

// 	return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//    int n;
//    cin>>n;
//    getchar();
//    vector<string> s1, s2;
//    for(int i = 0; i < n; i++)
//    {
//         string str;
//         getline(cin, str);
//         s1.push_back(str);
//         int space = 0;
//         int m;
//         for(int j = 0; j < str.length(); j++)
//         {
            
//             if(str[j] > 'A' && str[j] < 'I' || str[j] > 'I' && str[j] < 'Z')
//                 str[j] -= 'A' - 'a';
//             if(str[j] == 'I')
//             {
//                 if(j != 0)
//                 {
//                     if((str[j + 1] == ' ' || str[j + 1] == ',') && (str[j - 1] == ' ' || str[j - 1] == ','))
//                         str.replace(j, 1, "you");

//                 }
//                 else
//                 {
//                     if(str[j + 1] == ' ' || str[j + 1] == ',')
//                         str.replace(j, 1, "you");

//                 }
//             }
 
//             if(str[j] == '?')
//                 str[j] = '!';
//             if(str[j] == ' ')
//             {
//                 int k = j;
//                 int len = str.length();
//                 if(str[k + 1] == '\?' || str[k + 1] == '\'' || k == 0 || k == len)
//                 {
//                     str.erase(k, 1);
//                     j--;
//                     continue;
//                 }
                    
//                 while(str[k] == ' ')
//                 {
//                     space++;
//                     k++;
//                 }
//                 if(space > 1)
//                 {
//                     if((str[k] >= 'a' && str[k] <= 'z') || (str[k] >= 'A' && str[k] <= 'Z') || (str[k] >= '0' && str[k] <= '9'))
//                         str.replace(j, space, " ");
//                     else
//                         str.erase(j, space);
//                 }
                
//                 space = 0;
                
//             }

//         }
//         if(str.find("can you") != str.npos && str.length()  == str.find("can you") + 7)
//             str.replace(str.find("can you"), 7, "I can");
//         if(str.find("Can you") != str.npos && str.length()  == str.find("Can you") + 7)
//             str.replace(str.find("Can you"), 7, "I can");
//         if(str.find("could you") != str.npos && str.length()  == str.find("could you") + 9)
//             str.replace(str.find("could you"), 9, "I can");
//         if(str.find("Could you") != str.npos && str.length()  == str.find("Could you") + 9)
//             str.replace(str.find("Could you"), 9, "I can");

//         if(str.find("can you ") != str.npos)
//             str.replace(str.find("can you "), 8, "I can ");
//         if(str.find("could you ") != str.npos)
//             str.replace(str.find("could you "), 10, "I could ");
//         if(str.find("Can you ") != str.npos)
//             str.replace(str.find("Can you "), 8, "I can ");
//         if(str.find("Could you ") != str.npos)
//             str.replace(str.find("Could you "), 10, "I could ");
//         if(str.find(" me") != str.npos)
//             str.replace(str.find(" me"), 3, " you");
        
        
//         str = "AI: " + str;
//         s2.push_back(str);
//    }
//    for(int i = 0; i < n; i++)
//    {
//         cout<<s1[i]<<endl;
//         cout<<s2[i]<<endl;
    
//    }
//    return 0;

// }