#include <iostream>
using namespace std;
class PriorityQueue
{
private:
    int size;
    int arr[5];
    int priority[10];
    int end,begin;
public:
    PriorityQueue():size(0)
    {}
    void Push(int x, int prior)
    {
        
        if (size==0){
            arr[0]=x;
            priority[0]=prior;
            size++;
        }
        else
        {
            arr[size]=x;
            priority[size]=prior;
            for (int i=0;i<size;i++)
            {
                for (int j=i;j<size;++j)
                {
                    if (priority[i]>priority[j+1])
                    {
                        int temp=priority[j+1];
                        priority[j+1]=priority[i];
                        priority[i]=temp;
                    }
                }
            }
                int k=0;
                int idx;
                while (k<size)
                {
                    idx=priority[k];
                    for (int i=0;i<size;i++)
                    {
                        if (idx>size)
                        {
                            int temp=arr[size-1];
                            arr[size]
                        }
                                int temp=priority[j+1];
                                priority[j+1]=priority[i];
                                priority[i]=temp;
                            }
                    
                    }
                }
            }
            
            size++;
        }
    }
    void Show()
    {
        for (int i=0;i<size;++i)
        {
            cout<<arr[i]<<" ";
        }
    }
    void End()
    {
        int max=-1;
        for (int i=0;i<size;++i)
        {
            if (max<i)
            {
                end=arr[i];
            }
        }
        cout<<end;
        if (size==0)
        {
            cout<<"Первого элемента нет ! ";
        }
    }
    void Begin()
    {
        begin=arr[0];
        cout<<begin;
    }
    void Pop()
    {
        if (size==0)
        {
            cout<<"Очередь пустая";
            return;
        }
        int temp[size-1];
        int k=0;
        for (int i=0;i<size-1;++i)
        {
            temp[k]=arr[i+1];
            k++;
        }
        size--;
        for (int i=0;i<size;++i)
        {
            arr[i]=temp[i];
        }
    }
    int ClearQueue()
    {
        // нужно доделать
        return 0;
    }
};


int main() {
    PriorityQueue Cqu;
    cout<<"Очередь- ";
    Cqu.Push(10,10);
    Cqu.Push(51,5);
    Cqu.Show();
//    cout<<endl;
//    cout<<"Удаление-";
//    Cqu.Pop();
//    Cqu.Pop();
//    Cqu.Pop();
//    Cqu.Pop();
//    Cqu.Pop();
//    Cqu.Pop();
//    Cqu.Pop();
//    Cqu.Show();
//    cout<<endl;
//    //cout<<"Удаляем все элементы-";
//    //cout<<ClearQueue();
//    cout<<endl;
//    cout<<"Начало-";
//    Cqu.Begin();
//    cout<<endl;
//    cout<<"Конец-";
//    Cqu.End();
//    cout<<endl;
    
    return 0;
}
