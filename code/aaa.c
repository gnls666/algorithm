#include<stdio.h>
#include<stdlib.h>
struct ProcessOfMy
{//定义进程
	int name;
	int timeRequire;
	//1为就绪态，0为运行态，-1为已经完成
	int currentState;
	ProcessOfMy* next;
};
typedef struct ProcessOfMy PCB;
struct PCBQueue
{//定义PCB队列
	int numOfProcess=0;
	ProcessOfMy *front, *rear;
	
};
typedef struct PCBQueue PCBQueue;

PCB* InitPCBQuee(PCB* process)
{
	PCB*queue = (PCB*)malloc(sizeof(PCB));
	if (queue == NULL)
	{
		return NULL;c
	}
	queue->next=NULL;
	process = queue;
	return process;
}

PCB* EnProcess(PCB*rear,int a)
{//加入队列
	PCB* p = (PCB*)malloc(sizeof(PCB));
	if (p == NULL)
	{
		return NULL;
	}
	int timeRequire = rand()%15;
	p->currentState = 1;
	p->timeRequire = timeRequire;
	p->name = a;
	p->next = NULL;
	rear->next = p;
	rear = p;
	return rear;
}

PCB* DeProcess(PCB* front, PCB* rear)
{//从队列中删除
	PCB* p;
	p = front;
	front = front->next;
	p->next = NULL;
	rear->next = front;
	
	return front;
}

PCB* SchProcess(PCB*front, PCB*rear)
{//将完成一个时间片的进程加入队尾
	rear->next = front;
	return rear;
}

void ChangeCurrentState(PCBQueue  *PCB)
{//若队头程序完成，改变该进程的状态
	PCB->front->currentState = -1;

}

void PrintReadyProcess(PCBQueue *pcbQueue)
{//打印出就绪队列中的进程
	printf("就绪队列有%d个程序：\n", pcbQueue->numOfProcess);
	PCB* p;
	int i;
	
	for (p = pcbQueue->front,i=0;i!=pcbQueue->numOfProcess;i++,p = p->next)
	{
		printf("进程%d(剩余%d单位时间片)\n", p->name, p->timeRequire);
		
	}
	printf("\n");
	
}



int main()
{

	PCB   process, * front, * rear,*cpFront,*cpRear,cpProcess,*p,*p1;
	//创建PCB
	PCBQueue pcbQueue;
	//初始化就绪队列
	front = rear = InitPCBQuee(&process);
	//初始化已完成队列
	cpFront=cpRear= InitPCBQuee(&cpProcess);
	int i;
	for (i = 0;i < 5;i++)
	{//初始化进程
		rear = EnProcess(rear, i);
		if (i == 0)
		{
			front = rear;
		}
		pcbQueue.rear = rear;
		pcbQueue.numOfProcess++;
		printf("进程%d 时间片要求%d\n", rear->name, rear->timeRequire);

	}
	//队尾指向队头形成循环队列
	rear->next = front;

	pcbQueue.front = front;
	pcbQueue.rear = rear;
	

	printf("\n");

	while (pcbQueue.numOfProcess!=0)
	{
		//对第一个进程操作并且操作完之后判断
		pcbQueue.front->timeRequire--;
		printf("进程%d使用了一个CPU时间片，还需要%d个时间片\n", pcbQueue.front->name, pcbQueue.front->timeRequire);

		if (pcbQueue.front->timeRequire == 0)
		{//判断第一个进程是否完成，若完成则释放并且进程数减一
			printf("进程%d完成，出队\n", pcbQueue.front->name);
			ChangeCurrentState(&pcbQueue);
			p = pcbQueue.front;
			//从队列中删除队头已完成的进程
			pcbQueue.front=DeProcess(pcbQueue.front, pcbQueue.rear);
			p->next = NULL;
			//将删除的进程加入已完成队列，并且输出整个已完成队列的名单
			cpRear->next = p;
			cpRear = p;
			printf("已完成的进程有：");
			for (p1 = cpFront->next;p1 != NULL;p1 = p1->next)
			{
				printf("%d ", p1->name);
			}
			printf("\n");
			//PCB中就绪进程数减一
			pcbQueue.numOfProcess--;
			PrintReadyProcess(&pcbQueue);
			continue;
		}
		//队头，队尾前进
		pcbQueue.rear = pcbQueue.rear->next;
		pcbQueue.front = pcbQueue.front->next;
		PrintReadyProcess(&pcbQueue);

	}
	return 1;
	
}

