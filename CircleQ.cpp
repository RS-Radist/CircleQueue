#include <iostream>
using namespace std;
class CircleQueue
{
private:
    int size;
    int arr[10];
    int end,begin;
public:
    CircleQueue():size(0)
    {}
    bool Push(int x)
    {
        if (size==10)
        {
            cout<<"Over ";
            return false;
        }
        if (size==0)
        {
            arr[0]=x;
            size++;
            return true;
        }
        else
        {
            int temp[size+1];
            temp[0]=x;
            int k=1;
            for (int i=0;i<size;++i)
            {
                
                temp[k]=arr[i];
                k++;
            }
            for (int i=0;i<size+1;++i)
            {
                
                arr[i]=temp[i];
            }
            size++;
            return true;
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
        }
        
        int temp=arr[0];
        int tempMas;
        for (int i=0;i<size;++i)
        {
            tempMas=arr[i+1];
            arr[i]=tempMas;
        }
        arr[size-1]=temp;
        
        
    }
    int ClearQueue()
    {
        return 0;
    }
    int GetSize()
    {
        return size;
    }
};


int main()
{
    CircleQueue Cqu;
    cout<<"Очередь-";
    Cqu.Push(50);
    Cqu.Push(51);
    Cqu.Push(53);
    Cqu.Push(54);
    Cqu.Push(55);
    Cqu.Push(56);
    Cqu.Push(57);
    Cqu.Push(58);
    Cqu.Show();
    cout<<endl;
    Cqu.Pop();
    Cqu.Pop();
    Cqu.Pop();
    cout<<endl;
    Cqu.Show();
    cout<<endl;
    //cout<<"Удаляем все элементы-";
   //cout<<ClearQueue();
//
    cout<<endl;
    cout<<"Начало-";
    Cqu.Begin();
    cout<<endl;
    cout<<"Конец-";
    Cqu.End();

    return 0;
}
